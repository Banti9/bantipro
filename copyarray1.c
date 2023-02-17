#include<stdio.h>
int main()
{
  int i,j,n,A[100],B[100];

printf("Enter the size of array = ");
scanf("%d",&n);
printf("Enter the elements of Array\n");
for ( i = 0; i < n; i++)
{
    scanf("%d\t",&A[i]);
}

printf("\n***** the array A is  ******\n");
for ( i = 0; i < n; i++)
{
    printf("%d\t",A[i]);
}

for ( i = 0; i < n; i++)
{
    B[i]=A[i];
}
 
printf("\n\n***** Copy the array A to array B ******\n");
 for ( i = 0; i < n; i++)
 {
    printf("%d\t",B[i]);
 }
 

    return 0;
}
