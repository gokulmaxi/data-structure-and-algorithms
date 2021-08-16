// CPP program to demonstrate multithreading
// using three different callables.
#include <iostream>
#include <thread>
// #include <pthread.h>
#include <chrono>
using namespace std;

// A dummy function
void foo(int Z)
{
	for (int i = 0; i < Z; i++)
	{
		cout << "1 Thread using function"
				" pointer as callable\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}

// A callable object
class thread_obj
{
public:
	void operator()(int x)
	{
		for (int i = 0; i < x; i++)
			cout << "2 Thread using function"
					" object as callable\n";
	}
};

int main()
{
	cout << "Threads 1 and 2 and 3 "
			"operating independently"
		 << endl;

	// This thread is launched by using
	// function pointer as callable
	thread th1(foo, 3);

	thread th2(thread_obj(), 3);

	auto f = [](int x)
	{
		for (int i = 0; i < x; i++)
			cout << "3 Thread using lambda"
					" expression as callable\n";
	};

	thread th3(f, 3);

	// th1.detach();   // closes the function even if its not completed
	th1.join();
	th2.join();

	th3.join();

	return 0;
}
