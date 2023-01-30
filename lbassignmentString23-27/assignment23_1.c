#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch>='a'&& ch<='z')||ch>='A'&& ch<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet==true)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }
}