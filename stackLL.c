#include<stdio.h>
#include<malloc.h>
#define max 15 
typedef struct node
{ int data,*next;
    
}node;

int main()
{ int ch,choic,x;
node *p,*top;
top=NULL;
printf("\n\n1-push,\n2-pop,\n3=display:");
do
{
    printf("enter the choics::\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        p=(node*)malloc(sizeof(node));
        printf("\nenter the element=");
        scanf("%d",&p->data);
        if (top==NULL)
        {
          top=p;
          top->next=NULL;
        }
        else{
            p->next=top;
            top=p;
        }
         break;
    case 2:
        p=(node*)malloc(sizeof(node));
      
        if (top==NULL)
        {
          printf("stack is empty");
        }
        else{
            x=top->data;
            top=p;
            printf("%d is poped from stack:",x);
          top=top->next;
          free(p);
        }
         break;
         case 3:
        p=(node*)malloc(sizeof(node));
      
        if (top==NULL)
        {
          printf("\nstack is empty");
        }
        else{
            p=top;
            while (p!=NULL)
            {
                printf("%d\t",p->data);
                p=p->next;

            }
         } break;
      default:
      printf("enter the correct choice::");
    
     }
     printf("\n if you want to repeat. prees 1\n");
     scanf("%d",&choic);
} while (choic==1);

    
    return 0;
}
