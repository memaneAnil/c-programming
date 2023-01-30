#include<stdio.h>

int Small(int No)
{
    int iDigit=0;
    static int smallDigit=9;
     
    if(No!=0)
    {
        iDigit=No%10;
        
        if(iDigit<smallDigit)
        {
            smallDigit=iDigit;
        }
        No=No/10;
        Small(No);
        
    }
    return smallDigit;
}
int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=Small(Value);
    printf("small digit is : %d\n",iRet);

    return 0;
}