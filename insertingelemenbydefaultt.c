#include<stdio.h>
int main()
{
    int arry[100]={10,20,30,40,50};
    int n=5;
    int value,pos,i;
    //actual array
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    printf("enter the pos to enter the value");
    scanf("%d",&pos);
    printf("enter the value");
    scanf("%d",&value);
    for(i=5;i>=pos;i--)
    {
        arry[i]=arry[i-1];
    }
    arry[pos-1]=value;
    n++;
    //array after inserting element
    for(i=0;i<n;i++)
    {
        printf("%d,",arry[i]);
    }
    printf("\n");
    return 0;

}