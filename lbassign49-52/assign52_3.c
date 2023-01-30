#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    1001    0000    0000
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT CheckBit(UINT No)
{
    UINT iMask1=0x00000900;
    UINT iMask2=0x00000100;
    
    UINT Result1=0;
    UINT Result2=0;
        
    Result1=No & iMask1;
    Result2=No & iMask2;

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

    printf("Please enter the number\n");
    scanf("%d",&Value);
    bRet=CheckBit(Value);

    if(bRet==1)
    {
        printf("9th or 12th bit is on\n");
    }
    else
    {
        printf("9th or 12th bit is off\n");
    }


    return 0;

}//UINT iMask3=0x00000800;UINT Result3=0;//||Result3==iMask3