#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node*next;
};
struct node*newnode(int x)
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->a=x;
    new->next=NULL;
    return new;
}
struct node*mergenode(struct node*l1,struct node*l2)
{
    struct node temp;
    struct node*temp2=&temp;
    temp.next=NULL;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->a <= l2->a)
        {
            temp2->next=l1;
            l1=l1->next;
        }
        else{
            temp2->next=l2;
            l2=l2->next;
        }
        temp2=temp2->next;
    }
    temp2->next=(l1!=NULL)? l1 : l2;
    return temp.next;
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
    int n,m,value;
    struct node*list1=NULL;
    struct node*list2=NULL;
    struct node*tail1=NULL;
    struct node*tail2=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        struct node*new=newnode(value);
        if(list1==NULL)
        {
            list1=tail1=new;
        }
        else{
            tail1->next=new;
            tail1=new;
        }
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&value);
        struct node*new=newnode(value);
        if(list2==NULL)
        {
            list2=tail2=new;
            tail2=new;
        }
        else
        {
            tail2->next=new;
            tail2=new;
        }
    }
    struct node*merged=mergenode(list1,list2);
    printlist(merged);
    return 0;
}