#include<stdio.h>


void Table(int iNo)
{
   int iCnt=0;
   if(iNo<0)
   {
        iNo=-iNo;
   }
   for(iCnt=1;iCnt<=10;iCnt++)
   {
        printf("%d\t",iNo*iCnt);
   }
   printf("\n");
}

int main()
{
    int iValue=0,iRet=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Table(iValue);
           
    return 0;

}