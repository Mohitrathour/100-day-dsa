#include<stdio.h>
int main()
{
    int arry[100]={10,20,30,40,50};
    int n=5;
    int pos,i;
    printf("enter the position to delete the value");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    for(i=pos-1;i<n;i++)
    {
        arry[i]=arry[i+1];
    }
    n--;
    printf("after deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    return 0;
}