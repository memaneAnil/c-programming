#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT CheckBit(UINT No,UINT ipos1,UINT ipos2)
{
    UINT iMask1=0x00000001;
    UINT iMask2=0x00000001;
    
    UINT Result1=0;
    UINT Result2=0;

    iMask1=iMask1<<(ipos1-1);
    iMask2=iMask2<<(ipos2-1);

    printf("%d\n",iMask1);
    printf("%d\n",iMask2);
    Result1=No & iMask1;
    Result2=No & iMask2;

    printf("%d\n",Result1);
    printf("%d\n",Result2);
   
    if(Result1==iMask1||Result2==iMask2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

   
}
int main()
{
    UINT Value=0;
    bool bRet=0;
    UINT ipos1=0,ipos2=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);

    printf("Please enter the 1st position\n");
    scanf("%d",&ipos1);
    printf("Please enter the 2nd position\n");
    scanf("%d",&ipos2);

    bRet=CheckBit(Value,ipos1,ipos2);

    if(bRet==1)
    {
        printf("Given position bit is on\n");
    }
    else
    {
        printf("Given position bit is off\n");
    }


    return 0;

}//UINT iMask3=0x00000800;UINT Result3=0;//||Result3==iMask3