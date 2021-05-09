#include <stdio.h>
/**
 * calculates taylor series values upto n using normal recursion
 * @param x value of x 
 * @param n value of n th term 
 * @result value of e^x 
*/
double taylorSeriesN(int x , int n){
    static double p=1,f=1;
    double r;
    if (n!=0)
    {
        r=taylorSeriesN(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
    else
    {
        return 1;
    }
    
}
/**
 * calculates taylor series values upto n using horners rule
 * @param x value of x 
 * @param n value of n th term 
 * @result value of e^x 
*/
double taylorSeriesR(int x, int n){
    static double s;
    if (n==0)
    {
        return s;
    }
    else
    {
        s=1+x*s/n;
        return taylorSeriesR(x,n-1);
    }
    

}
int main(int argc, char const *argv[])
{
    double result=taylorSeriesR(4,50);
    printf("%lf \n",result);   // O\P = 54.598150
    return 0;
}
