#include<stdio.h>


int FreqOfCh(char *str,char ch)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the char to find\n");
    scanf(" %c",&cValue);

    iRet=FreqOfCh(Arr,cValue);

    printf("Frequency of Character is :%d\n",iRet);
    
}