#include<stdio.h>
void sqr(int n);
void squar(int* m);
int main()
{
    int num=4;
   int num1=5;
   sqr(num);
    printf("number: %d\n", num);
    squar(&num1);
    printf("%d\n", num1);

    return 0;
}
// \\ call by value
void sqr(int n){
    n = n * n;
printf("%d\n",n);
}
void squar(int* m){
    *m= (*m) * (*m);
    printf("squra: %d\n",*m);
}