#include<iostream>
#include<thread>
#include<condition_variable>

std::mutex m;
std::condition_variable cv;

void my_func()
{
 std::cout<<"executing: "<<__FUNCTION__<<std::endl;
 std::cout<<"We have "<<std::thread::hardware_concurrency()<<" cores availble to go crazy with threads"<<std::endl;
 std::cout<<"sleeping "<<2000<<" milliseconds before signaling main"<<std::endl;
 std::this_thread::sleep_for(std::chrono::milliseconds(2000));
 cv.notify_one(); //signal the main thread to proceed
}

int main()
{
 std::thread(my_func).detach(); //no need for join any more
 //but now we risk exiting the program before the thread is finished
 std::unique_lock<std::mutex> lk(m);
 cv.wait(lk);
 std::cout<<"Main thread exit: "<<std::endl;
 return 0;
}