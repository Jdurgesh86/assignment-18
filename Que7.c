#include<stdio.h>
void pallin(char* string);
int main()
{
    char string[10];
    printf("Enter the string :");
    scanf("%s",string);
    pallin(string);
}

void pallin(char* string)
{
    int length=0;
    for(;string[length]!='\0';length++);
    char revstring[length];
    for(int i=0;i<length;i++)
    {
        revstring[i]=string[length-i-1];
    }
    int i;
    for( i=0;i<length;i++)
    {
        if(revstring[i]!=string[i])
            {
                printf("The string is not pallidrome");
                break;
            }
    }
    if(i==length)
        printf("The string is pallidrome");
}