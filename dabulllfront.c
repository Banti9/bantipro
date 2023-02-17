#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct dnode
{
    int data;
    struct dnode *prev,*next;

}dnode;
int main()
{
    int n,i;
    dnode *head,*p;
    printf("enter the no.of nodes: ");
    scanf("%d",&n);
    printf("enter the value od node:::");
     for(i=1;i<=n;i++){

        if(head==NULL){
            head=(dnode*)malloc(sizeof(dnode));
            p=head;
           
            scanf("%d\t",&head->data);
            head->next=NULL;
            head->prev=NULL;

        }
        else{ 
            p=(dnode*)malloc(sizeof(dnode));
            p->next=head;
            
            scanf("%d",&p->data);
            p->next=head;
             head->prev=p;
 
              p->prev=NULL;
            head=p;
        }
    }
    p=head;
    printf("\nyour double linked list:\n");
    while (p->next!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    
    }
     return 0;
}
