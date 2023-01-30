#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//1000  0000    0000    0000    0000    0000    0000    0001
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UINT No)
{
    UINT iMask=0x80000001;
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
        printf("first & last bit is on\n");
    }
    else
    {
        printf("first & last bit is off\n");
    }

    return 0;

}
