#include<stdio.h>

void Display(int No)
{
    int iCnt=1;
    static char ch='a';

    if(iCnt<=No)
    {
        printf("%c\t",ch);
        ch++;
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