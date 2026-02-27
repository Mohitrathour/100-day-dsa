#include<stdio.h>
int fab(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fab(n-1)+fab(n-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fab(n));
    return 0;
}