#include<stdio.h>
int main()
{
    int arry[100];
    int n;
    int pos,i;
    printf("enter the no of element to be entered\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
        printf("enter the value\n");
        scanf("%d",&arry[i]);
    }
    printf("actual array");
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    printf("enter the position to delete the value");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        arry[i]=arry[i+1];
    }
    n--;
    printf("array after deletion");
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    return 0;
}