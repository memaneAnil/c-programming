#include<stdio.h>

int Reverse(int No)
{
    int iDigit=0;
    static int rev=0;
     
    if(No!=0)
    {
        iDigit=No%10;
        rev=iDigit+rev*10;
        //printf("%d",rev);
        No=No/10;
        Reverse(No);
        
    }
    return rev;
}
int main()
{
    int Value=0;
    int iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=Reverse(Value);
    printf("%d reverse is : %d\n",Value,iRet);

    return 0;
}