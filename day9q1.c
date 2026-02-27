#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    char str[n],store[n];
    scanf("%s",str);
    strcpy(store,str);
    int len=n;
    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("original:%s\n",store);
    printf("after mirroring\n");
    printf("%s",str);
    return 0;

}