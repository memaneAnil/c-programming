#include<stdio.h>

int Difference(char *str)
{
    int iCapitalCnt=0,iSmallCnt=0;
    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
            iSmallCnt++;
        }
        else if(*str>='A'&& *str<='Z')
        {
            iCapitalCnt++;
        }
        str++;
    }
    return iSmallCnt-iCapitalCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);//

    iRet=Difference(Arr);

    printf("Difference of capital,small is :%d\n",iRet);

    return 0;
}