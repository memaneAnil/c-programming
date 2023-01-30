#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//1111  1111    1111    1111    1111    1111    1011    1111
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT No)
{
    UINT iMask=0xFFFFFFBF;
    UINT Result=0;

    Result=No & iMask;

    return Result;
    
}
int main()
{
    UINT Value=0;
    UINT iRet=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);
    iRet=OffBit(Value);

    printf("%d changed number is : %d\n",Value,iRet);
    
    return 0;

}