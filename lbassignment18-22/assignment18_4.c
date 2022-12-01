//  #    1     *       #       2       *       #      3    *      #     4    *

#include<stdio.h>

void Display(int iRow)
{
    int i=0;
    
    for(i=1;i<=iRow;i++)
    {
        printf("#\t%d\t*\t",i);
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