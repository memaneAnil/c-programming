#include<stdio.h>

void Display(int No)
{
    int iCnt=1;

    if(iCnt<=No)
    {
        printf("%d\t",No);
        No--;
        Display(No);
    }
    
}
int main()
{
    int Value=0;
    printf("Please enter the number\n");
    scanf("%d",&Value);
    Display(Value);
    printf("\n");
    return 0;
}