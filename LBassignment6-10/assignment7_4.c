#include<stdio.h>

void OddDisplay(int iNo)
{
    
    int iCnt=0;
   
    for(iCnt=1;iCnt<=iNo;iCnt+=2)
    {
        printf("%d\t",iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iValue;

    printf("Please enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;

}