#include<stdio.h>

int Max(int No)
{
    int iDigit=0;
    static int MaxDigit=0;

    if(No!=0)
    {
        iDigit=No%10;
        if(iDigit>MaxDigit)
        {
            MaxDigit=iDigit;
        }
        No=No/10;
        Max(No);
    }
    return MaxDigit;
}
int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=Max(Value);
    printf("Max digit is : %d\n",iRet);

    return 0;
}