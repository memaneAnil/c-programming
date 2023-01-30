#include<stdio.h>
#include<stdbool.h>

//0000  0000    0000    0000    0000    0000    0000    0000

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleRange(UINT No,UINT Start,UINT End)
{
    UINT Mask=0;
    UINT Mask1=0xFFFFFFFF;
    UINT Mask2=0xFFFFFFFF;
    UINT Result=0;
    
    Mask1=Mask1<<(Start-1);
    Mask2=Mask2>>(32-End);

    Mask=Mask1 & Mask2;
    
    Result=No ^ Mask;

    return Result;
}
int main()
{
    UINT Value=0;
    UINT iRet=0;
    UINT ipos1=0,ipos2=0;

    printf("Please enter the number\n");
    scanf("%d",&Value);

    printf("Please enter the start position\n");
    scanf("%d",&ipos1);

    printf("Please enter the end position\n");
    scanf("%d",&ipos2);

    iRet=ToggleRange(Value,ipos1,ipos2);

    printf("changed number : %d\n",iRet);

    return 0;

}