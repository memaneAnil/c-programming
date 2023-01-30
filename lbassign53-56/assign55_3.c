#include<stdio.h>

int StrlenX(char *str)
{
    static int iCnt=0;
    
    if(*str!='\0')
    {
        iCnt++;
        str++;
        StrlenX(str);
    }

    return iCnt;
}

int main()
{
    char ch[20];
    int iRet=0;

    printf("Please enter the string\n");
    scanf("%[^'\n]s",ch);
    iRet=StrlenX(ch);
    printf("char count is : %d\n",iRet);

    return 0;
}