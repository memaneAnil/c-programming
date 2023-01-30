#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0100    0000    0000    0000
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UINT No)
{
    UINT iMask=0x00004000;
    UINT Result=0;

    Result=No & iMask;

    if(Result==iMask)
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
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is off\n");
    }

    return 0;

}