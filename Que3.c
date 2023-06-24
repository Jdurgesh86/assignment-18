#include<stdio.h>
void compare(char *string1,char *string2);
int main()
{
    char string1[10],string2[10];
    printf("Enter the first string ");
    fgets(string1,10,stdin);
    printf("Enter the second string ");
    fgets(string2,10,stdin);
    compare(string1,string2);
}
void compare(char *string1,char* string2)
{
    int length1,length2,i;
    for(length1=0;string1[length1]!='\0';length1++);
    for(length2=0;string2[length2]!='\0';length2++);
    for(i=0;i<length1&&i<length2;i++)
        if(string1[i]!=string2[i])
        {
            printf("\nstrings are not equal");
        }
    if(i==length1 && i==length2)
        printf("\nstrings are equal");


    for(i=0;i<length1-1;i++)
    {
        if(string1[i]<string1[i+1])
            break;
    }
    if(i!=length1-1)
        printf("\nThe string first %s is in lexographical order ",string1);
    else
        printf("\nThe string first %s is not in lexographical order ",string1);
    for(i=0;i<length2-1;i++)
    {
        if(string2[i]<string2[i+1])
            break;
    }
    if(i!=length2-1)
        printf("\nThe string second %s is in lexographical order ",string2);
    else
        printf("\nThe string second %s is not in lexographical order ",string2);
}

