#include<stdio.h>
#include<string.h>
int countvowel(char str[]);
int main()
{ 
    char str[]="bantichauhan";
    printf("the vowels are: %d",countvowel(str));
    
    return 0;
}
int countvowel(char str[]){
    int count=0;
    for (int i = 0; str[i] !='\0' ; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        
    }
    return count;
}