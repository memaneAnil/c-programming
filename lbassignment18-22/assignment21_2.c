// 2    4   6   8   10
// 1    3   5   7   9
// 2    4   6   8   10
// 1    3   5   7   9
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int k=0,l=0;

    
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1,k=2,l=1;j<=iCol;j++,k+=2,l+=2)
        {
            if(i%2!=0)
            {
                printf("%d\t",k);
            }
            else
            {
                printf("%d\t",l);
            }
            
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