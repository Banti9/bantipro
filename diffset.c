#include<stdio.h>
int main()
{
 int a[6]={1,2,3,4,5,6},b[6]={4,5,6,7,8,9};
 int i,j,k=0,n=5,m=5,c[20],l=0;
 printf("set A:::   ");
 for ( i = 0; i <=n; i++)
     {
        printf("%d\t",a[i]);
     }
 printf("\nset B:::  ");
 for ( i= 0; i <=m; i++)
     {
      printf("%d\t",b[i]);
     }
 
 for ( i = 0; i <=n; i++)
  { 
    for ( j = 0; j <=m; j++)
     {
         if (b[j]==a[i]){
           break;
         }
      }
   
      if (j==m+1)
      {
         for(l=0;l<k;l++)
         {
           if (c[l]==a[i]){
               break;
            }
        
        
         }
        if(l==k){
          c[k]=a[i];
          k++;
        }
      }
   }
 printf("\ndiffrence  ( A-B )= \n");    
 for ( i = 0; i<k; i++)
  {
      printf("%d\t",c[i]);
   }
       
 return 0;
}
