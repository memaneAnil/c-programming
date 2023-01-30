#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    0000    0000    0001
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT No,UINT ipos)
{
    if(ipos<1 || ipos>32)
    {
        printf("Invalid position,it should be between 1 to 32");
        return false;
    }
    UINT iMask=0x00000001;
    iMask=iMask<<(ipos-1);
    UINT Result=0;

    Result=No ^ iMask;

    return Result;
}
int main()
{
    UINT Value=0;
    int iRet=0;
    int ipos=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);

    printf("Please enter the number\n");
    scanf("%d",&ipos);

    iRet=OffBit(Value,ipos);

    printf("%d changed number is : %d\n",Value,iRet);
    
    return 0;

}