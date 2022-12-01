// A    B   C   D   E

#include<stdio.h>

void Display(int iRow)
{
    int i=0;
    char ch='A';

    for(i=1;i<=iRow;i++,ch++)
    {
        printf("%c\t",ch);   
    }
    printf("\n");
}
int main()
{
    int iRow=0,iCol=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iRow);
    
    Display(iRow);

    return 0;
}