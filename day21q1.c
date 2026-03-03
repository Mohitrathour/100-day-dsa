#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node*next;
};
struct node*head=NULL;
void insertion(int x)
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->a=x;
    new->next=head;
    head=new;
}
void traverse(struct node* ptr) 
{
    printf("\nLinked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->a);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x);
        insertion(x);
    }
    traverse(head);
}
