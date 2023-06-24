#include<stdio.h>
void lengthstring(char *string);
int main()
{
    char string[10];
    printf("Enter the string: ");
    gets(string);
    lengthstring(string);
}

void lengthstring(char *string)
{
    int length=0;
    for(int i=0;string[i]!='\0';i++,length=i);
    printf("The length of the %s string is %d",string,length) ;
}