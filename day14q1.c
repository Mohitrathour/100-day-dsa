#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   if(n!=m)
   {
    printf("not an identity matrix");
    return 0;
   }
   int array[n][m];
   int i,j;
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
        scanf("%d",&array[i][j]);
     }
   }
   int flag=1;
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
        if(i==j)
        {
            if(array[i][j]==1)
            {
                flag=0;
            }
        }
        else if(i!=j && array[i][j]==0)
        {
            flag=0;
        }
     }
   }
   if(flag==0)
   {
    printf("its an identity matrix");
   }
   else{
    printf("not a identity matrix");
   }
   return 0;
}
