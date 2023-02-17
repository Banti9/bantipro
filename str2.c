#include<stdio.h>

void printfullname(char a[]);
int main()
{
   char fullname[100];
//    gets(fullname);
      fgets(fullname,100,stdin);
   puts(fullname);

    return 0;
}

void printfullname(char a[]){
    for (int i = 0; a[i]< '\0'; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}
