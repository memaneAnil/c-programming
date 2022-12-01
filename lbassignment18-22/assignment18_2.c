//5 #   4   #   3   #   2   #

#include<stdio.h>

void Display(int iRow)
{
    int i=0;
    
    for(i=iRow;i>=1;i--)
    {
        printf("%d\t#\t",i);   
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