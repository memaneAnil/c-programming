#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt=0;
    
    if(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        
        str++;
        WhiteSpace(str);
    }

    return iCnt;
}

int main()
{
    char ch[20];
    int iRet=0;

    printf("Please enter the string\n");
    scanf("%[^'\n]s",ch);
    iRet=WhiteSpace(ch);
    printf("white space count is : %d\n",iRet);

    return 0;
}