#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    0000    0100    0000
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT No)
{
    UINT iMask=0x00000040;
    UINT Result=0;

    Result=No ^ iMask;

    return Result;
    

}
int main()
{
    UINT Value=0;
    UINT iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=ToggleBit(Value);

    printf("%d changed number is : %d\n",Value,iRet);
    
    return 0;

}