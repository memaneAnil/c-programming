//  1    2   3   4
//  2    3   4   5
//  3    4   5   6
//  4    5   6   7


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int k=0;
    
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1,k=i;j<=iCol;j++,k++)
        {
            printf(" %d\t",k);
        }
        
        printf("\n");
    }
}
int main()
{
    int iRow=0,iCol=0;

    printf("Enter the number of rows\n");
    scanf("%d",&iRow);
    printf("Enter the number of columns\n");
    scanf("%d",&iCol);

    Display(iRow,iCol);

    return 0;
}