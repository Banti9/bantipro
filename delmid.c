#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    int i,n,loc,data;
    node *head=NULL,*p,*q;
    printf("enter the no.of node::");
    scanf("%d",&n);
    printf("enter the value of nodes::\n");
    for ( i = 1; i <=n; i++)
    {
        if (head==NULL)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
            scanf("%d",&head->data);
            p->next=NULL;
        }
        else 
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            scanf("%d",&p->data);
            p->next=NULL;
            
        }
    }
        p=head;
    printf("your linked list::\n");
    for ( i = 1; i <=n; i++)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    printf("enter the location for deletion::");
    scanf("%d",&loc);
    printf("deletion at mid point::");
    p=head;
    for(i=1;i<=loc-2;i++){
       p=p->next;
    }
    
        q=p;

       p=p->next;
       
       q->next=p->next;
    
       free(p);
   
p=head;
while (p!=NULL)
{
    printf("%d\t",p->data);
    p=p->next;

}

    return 0;
}
