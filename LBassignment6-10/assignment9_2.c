#include<stdio.h>


int DollarToINR(int iNo)
{
     int INR=0;
     INR=iNo*70;
     return INR;
}

int main()
{
    int iValue=0,iRet=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("%d Dollar in INR is:%d\n",iValue,iRet);
           
    return 0;

}