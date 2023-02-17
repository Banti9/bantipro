#include<stdio.h>
int fibo(int n);
int main()
{ int n;
printf("enter the no:");
scanf("%d",&n);

printf("fibonicc:%d",fibo(n)); 
    
    return 0;
}
int fibo(int n){
    if (n==0)
    {
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    int fibo1=fibo(n-1), fibo2=fibo(n-2);
    int fibon=fibo1+fibo2;
    // printf("%d %d", n,fibon);
    return fibon;

}