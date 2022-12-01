//  2   4   6   8   10  12  14  16

#include<stdio.h>

void Display(int iRow)
{
    int i=0,j=2;
    
    for(i=1;i<=iRow;i++,j+=2)
    {
        printf("%d\t",j);
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