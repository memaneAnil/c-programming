#include<stdio.h>

int Small(char *str)
{
    static int iCnt=0;
    
    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        
        str++;
        Small(str);
    }

    return iCnt;
}

int main()
{
    char ch[20];
    int iRet=0;

    printf("Please enter the string\n");
    scanf("%[^'\n]s",ch);
    iRet=Small(ch);
    printf("white space count is : %d\n",iRet);

    return 0;
}