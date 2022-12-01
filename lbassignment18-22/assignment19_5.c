// 1    1   1   1
// 2    2   2   2   
// 3    3   3   3
// 4    4   4   4

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
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