#include<stdio.h>

void Display(char ch)
{
   printf("decimal :%d\n",ch);
   printf("octal   :0%o\n",ch);
   printf("decimal :0x%x\n",ch);
}


int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}