#include<stdio.h>
#include<string.h>
void printstring(char a[]);
int main()
{
    char firstname[]= "banti";
    char lastname[]= "chauhan";
    printstring(firstname);
    printstring(lastname);
    return 0;
}
void printstring(char a[]){
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    
}
