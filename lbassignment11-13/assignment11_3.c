#include<stdio.h>

int RangeSum(int iNo1,int iNo2)
{
    int iCnt=0;
    int add=0;
    if(iNo1>iNo2||iNo1<0||iNo2<0)
    {
        printf("invalid range\n");
        return 1;
    }
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        add=add+iCnt;
    }
   return add;
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the end point\n");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet!=1)
    {
        printf("Addition is :%d\n",iRet);
    }
    
    
    
    return 0;
}