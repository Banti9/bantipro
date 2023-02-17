#include<stdio.h>
int main()
{
  int a[5], b[5],i,n,m,j,d[3],k;

  printf("enter the size of a and b:");
  scanf("%d%d",&n,&m);
  printf("enter the elements of a=");
  for ( i = 0; i <= n; i++)
  {
    scanf("%d\t",&a[i]);
  } 
  
 
  printf("enter the elements of b=");
  for (  j= 0; j<=m; j++)
  {
    scanf("%d\t",&b[j]);
  }
  printf("differenc between a and b:");
 
   for(i=0;i<=n;i++)
    {
        for ( j = 0; j<=m; j++)
    {
        if (a[i]==b[j])
        {
        break;
        }
        else{
        d[k]=a[i];
        k++;
        
    }

    
    for(i=0;i<k;i++)
    printf("%d\n",d[i]);
    }
    

    }
  
   
    return 0;
}

