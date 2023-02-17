#include<stdio.h>
void printname(char a[]);
int length(char a[]);
int main()

{
    // char *str = "hello world" ;

    // puts(str);
    // str ="hello banti";
    
    // puts(str);
  char name[100];
  fgets(name,100,stdin);
  printf("length is %d",length(name));
    return 0;
}
int length(char a[]){
    int n=0;
    for (int i = 0; a[i]!= '\0'; i++)
    {
        n++;
    }
    return n-1;
}
void printname(char a[]){
    for (int i = 0; a[i] < '\0'; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}