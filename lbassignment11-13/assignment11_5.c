#include<stdio.h>

void DisplayRangeRev(int iNo1,int iNo2)
{
    int iCnt=0;
    if(iNo1>iNo2)
    {
        printf("invalid range\n");
        return;
    }
    for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the end point\n");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);
    
    
    return 0;
}