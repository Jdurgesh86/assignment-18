#include<stdio.h>
void lower(char *string);
int main()
{
    char string[10];
    printf("Enter the string in uppar case:");
    scanf("%s",string);
    lower(string);
}

void lower(char *string)
{
    for(int i=0;string[i]!='\0';i++)
    {
        string[i]+=32;
    }
    printf("String in the lower case is %s",string);
}