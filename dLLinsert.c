#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct dnode
{
    int data;
    struct dnode *next,*prev;
}dnode;
int main(){
    int i,n;
    dnode *head,*p ,*q;
        
     head=(dnode*)malloc(sizeof(dnode));
     head->data=2;
     head->prev=NULL;
     head->next=NULL;
     q=head;
 
    printf("enter the no. of node:\t");
    scanf("%d",&n);
    printf("enter the value of double linked list::");
    for ( i = 0; i <=n; i++)
    {
        p=(dnode*)malloc(sizeof(dnode));
        scanf("%d",&p->data);
        p->next=NULL;
        p->prev=q;
        q->next=p;
        q=q->next;
    
    }
     printf("\n");
      printf("insert at front\n");

     p=head;
    while (p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
   
  
   
    


 return 0;
}

