// Write a program to print the nth number of fibonacci series
#include <stdio.h>
int fibonacci(int n);
int fibonacci(int n){
    if(n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);    
}
int main()
{
     int n;
     scanf("%d",&n);
     printf("%d",fibonacci(n));
    return 0;
}