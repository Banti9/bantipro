#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct cnode
{
    int data;
    struct cnode *next;
}cnode;
int main()
{ int i ,n;
cnode *q,*rear,*p,*head=NULL;
printf("enter the no.of nodes::");
scanf("%d",&n);
// head=(cnode*)malloc(sizeof(cnode));
for ( i = 1; i <= n; i++)
{
    head=(cnode*)malloc(sizeof(cnode));
    p=head;
    if(head==NULL){
        p=head;
        p->next=p;

    }
    else{
    printf("enter the value of nodes::");
    scanf("%d",&p->data);
    p->next=rear;

    rear->next=p;
    rear=rear->next;}

 }
//  p=head;

//  do{
    // printf("%d",p->data);
    // p=p->next;
//  }while (p!=head);
  p=head;
    while (p!=head)
     {
        printf("%d ",p->data);
        p=p->next;
    }
 
   return 0; 
}

  

