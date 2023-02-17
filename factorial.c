 #include<stdio.h>
 int main()
 {int fact=1,i,n;
 printf("enter the no:");
 scanf("%d",&n);
 for ( i = 1; i < n; i++)
 {
    fact*= i;
 }
 printf("factorial= %d",fact);
    
    return 0;
 }
  