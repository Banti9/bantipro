#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
     int data;
     struct node *next;

   
}node;
int main(){
    int n,i;
    node *p,*head=NULL,*q;
    printf("enter the no. of node: ");
    scanf("%d",&n);
    printf("enter the value of node: ");
    for ( i = 1; i <= n; i++)
    {
        if(head==NULL){
        head=(node*)malloc(sizeof(node));
        p=head;
        //  printf("enter the value of node: ");
        scanf("%d",&head->data);
        p->next=NULL;
        }
        else{
            p->next=(node*)malloc(sizeof(node));
            //  printf("enter the value of node: ");
            p=p->next;
            scanf("%d",&p->data);
            p->next=NULL;
        }
    }
    p=head;
    printf("your linked list\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
    printf("deletion at front\n");
    
    p=head;
    
      {  p=(node*)malloc(sizeof(node));
        
        head=head->next;
        free(p);
      }
    p=head;
    while (p!=NULL)
     {
        printf("%d ",p->data);
        p=p->next;
    }

   return 0; 
}
