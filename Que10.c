#include<stdio.h>
int main()
{
    char string[10];
    printf("Enter the string :");
    int length=0;
    gets(string);
    for(int i=0;string[i]!='\0';i++,length=i);
    for(int i=0;i<length-1;i++)
    {
        for(int j=i;j<length;j++)
        {
            if(string[i]>=string[j])
            {
                char temp;
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }

    int count=0,i;
    for(i=0;i<=length-1;i++)
    {
        if(string[i]==string[i+1])
        {
            count++;
            if(count==length)
            {
                printf("The repeated word is %c",string[i]);
            }
        }
        else{
            if(count>=1)
            printf("The repeated character is %c \n",string[i]);
            count=0;
        }
    }
}