#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node*next;
};
struct node*node(int x)
{
    struct node*=(struct node*)malloc(sizeof(struct node));
    ->a=x;
    ->next=NULL;
    return ;
}
struct node*delete(int element,struct node*n)
{
    if(==NULL)
    {
        printf("no node present");
        return;
    }
    else{
        struct node*temp;
        while(->a!=element)
        {
            temp=->next;
            =->next;
        }
        ->next=temp->next;
        free(temp);
        return ;
    }
}
void printlist(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d",head->a);
        if(head->next!=NULL)
        {
            printf(" ");
        }
        head=head->next;
    }
}
int main()
{
    int n,i,value;
    struct node*temp1=NULL;
    struct node*back=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct node*=node(value);
        if(temp1==NULL)
        {
            temp1=back=;
        }
        else{
            back->next=;
            back=;
        }
    }
    struct node*=node(value);
    int element;
    scanf("%d",&element);
    delete(element,);
}