#include<stdio.h>
void reverse(char *string);
int main()
{
    char string[10];
    printf("Enter the string :");
    fgets(string,10,stdin);
    reverse(string);
}


void reverse(char *string)
{
    int n;
    for(n=0;string[n]!='\0';n++);
    for(int i=0;i<(n/2);i++)
    {
        char temp;
        temp=string[i];
        string[i]=string[n-i-1];
        string[n-i-1]=temp;
    }
    printf("The revrse string is %s",string);
}