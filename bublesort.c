#include<stdio.h>
int main()
{int i,n=8,j,temp;
 int a[100]={9,4,5,6,90,25,67,45,30 };
for(i=0;i<=n;i++){
    printf("%d  ",a[i]);
}
    for ( i = 0; i <=n-1; i++)
    {
        for (j=0;j<=n-i-1;j++)
        {
        if (a[j]>=a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
            // printf("\n%d  ",a[j]);
        }
    }
    printf("\nbubble sort\n");
    for ( i = 0;  i<=n; i++)
    {
    printf("%d ",a[i]);
    }
    
    return 0;
}
