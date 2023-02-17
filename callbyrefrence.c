#include<stdio.h>
void swap(int *a ,int *b);

int main()
{ int x =7, y =9;
    swap(&x ,&y);
    printf("x = %d, y=%d", x ,y);
    return 0;
}
// call by refrence
void swap(int *a ,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}