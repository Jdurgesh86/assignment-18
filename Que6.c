#include<stdio.h>
void alphanum(char* string);
int main()
{
    char string[10];
    printf("Enter the string :");
    scanf("%s",string);
    alphanum(string);
}

void alphanum(char* string)
{
    int digit=0,alpha=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a'&& string[i]<='z' || string[i]>='A'&& string[i]<='Z')
            alpha++;
        if(string[i]>='0'&& string[i]<='9')
            digit++;
    }
    if(digit && alpha)
        printf("The string is alphanumeric ");
    else
        printf("The string is not alphanumeric ");
}