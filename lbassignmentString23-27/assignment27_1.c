#include<stdio.h>
#include<stdbool.h>

bool CheckCh(char *str,char ch)
{
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue='\0';
    bool bRet=false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the char to find\n");
    scanf(" %c",&cValue);

    bRet=CheckCh(Arr,cValue);

    if(bRet==true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }
}