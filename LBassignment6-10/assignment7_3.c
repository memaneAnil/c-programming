#include<stdio.h>

void Display(int iNo)
{
    int iTemp=0;
    int iCnt1=0;
   
    for(iTemp=-iNo;iTemp<=iNo;iTemp++)
    {
        printf("%d\t",iTemp);
        
    }
    printf("\n");
}

int main()
{
    int iValue;

    printf("Please enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}