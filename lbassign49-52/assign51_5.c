#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//1111  0000    0000    0000    0000    0000    0000    1111
typedef unsigned long int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT No)
{
    
    UINT iMask=0xF000000F;
    
    UINT Result=0;

    Result=No ^ iMask;

    return Result;
}
int main()
{
    UINT Value=0;
    UINT iRet=0;
    
    printf("Please enter the number\n");
    scanf("%ld",&Value);

    iRet=ToggleBit(Value);

    printf("%ld changed number is : %ld\n",Value,iRet);
    
    return 0;

}