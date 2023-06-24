#include<stdio.h>
void uppercase(char *string);
int main()
{
    char string[10];
    printf("Enter the string :");
    scanf("%s",string);
    uppercase(string);
}
void uppercase(char *string)
{
    for(int i=0;string[i]!='\0';i++)
    {
        string[i]-=32;
    }
    printf("The string in upper case is %s",string);
}