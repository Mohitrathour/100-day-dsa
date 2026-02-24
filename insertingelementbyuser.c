#include<stdio.h>
int main()
{
    int arry[100];
    int n;
    int pos,value,i;
    //input value
    printf("enter the no of element to be entered\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element");
        scanf("%d",&arry[i]);
    }
    printf("actual array\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    printf("enter the position to enter the value");
    scanf("%d",&pos);
    printf("enter the value");
    scanf("%d",&value);
    for(i=5;i>pos-1;i--)
    {
        arry[i]==arry[i-1];
    }
    arry[pos-1]=value;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    return 0;
}