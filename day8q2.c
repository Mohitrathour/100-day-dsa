#include<stdio.h>
#include<stdbool.h>
int power(int n)
{
    if(n==1)
    {
        return true;
    }
    if(n<=0 || n%2!=0)
    {
        return false;
    }
    return power(n/2);
}
int main()
{
    int n;
    printf("enter the no\n");
    scanf("%d",&n);
    if(power(n)==true)
    {
        printf("%d is a power of two",n);
    }
    else{
        printf("%d is not a power of two",n);
    }
    return 0;
}