#include<stdio.h>
void count(char* string);
int main()
{
    char string[100];
    printf("Enter the string :");
    fgets(string,100,stdin);
    count(string);
}

void count(char *string)
{
    int i,countw=0;
    printf("\n%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' '||string[i]=='\n'||string[i]=='\t')
                countw++;
    }
    printf("The words in the string is %d",countw);
}