#include<stdio.h>

void Display(char ch)
{
    if((ch>='a'&& ch<='z'))
    {
        printf("char is %c\n",ch);
        ch=ch-32;
        printf("char is %c\n",ch);
    }
    else if((ch>='A'&& ch<='Z'))
    {
        printf("char is %c\n",ch);
        ch=ch+32;
        printf("char is %c\n",ch);
    }
    else
    {
        printf("char is %c\n",ch);

    }
}


int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}