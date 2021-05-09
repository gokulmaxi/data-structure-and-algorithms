#include <stdio.h>
/**
 * calculates taylor series values upto n
 * @param x value of x 
 * @param n value of n th term 
 * @result value of e^x 
*/
double taylorSeries(int x , int n){
    static double p=1,f=1;
    double r;
    if (n!=0)
    {
        r=taylorSeries(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
    else
    {
        return 1;
    }
    
}

int main(int argc, char const *argv[])
{
    double result=taylorSeries(4,50);
    printf("%lf \n",result);   // O\P = 54.598150
    return 0;
}
