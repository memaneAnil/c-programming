#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;
    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("%c\t%d\t%x\t%o\n",iCnt,iCnt,iCnt,iCnt);
    }
}


int main()
{
    DisplayASCII();

    return 0;
}