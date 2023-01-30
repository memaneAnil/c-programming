#include<stdio.h>

int DigitProduct(int No)
{
    static int iDigit=0;
    static int iMult=1;

    if(No!=0)
    {
        iDigit=No%10;
        iMult=iMult*iDigit;
        No=No/10;
        DigitProduct(No);
    }

    return iMult;
}

int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=DigitProduct(Value);
    printf("Addition of digit is : %d\n",iRet);

    return 0;
}