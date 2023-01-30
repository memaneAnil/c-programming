#include<stdio.h>

int Factorial(int No)
{
    static int iCnt=1;
    static int iMult=1;

    if(iCnt<=No)
    {
        iMult=iMult*iCnt;
        iCnt++;
        Factorial(No);
    }

    return iMult;
}

int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=Factorial(Value);
    printf("Factorial is : %d\n",iRet);

    return 0;
}