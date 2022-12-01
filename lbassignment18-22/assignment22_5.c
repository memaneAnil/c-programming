// $    *   *   * 
// *    $  *    #
// *    *   $   #
// *    #   #   $
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0,k=0;
   
    for(i=1;i<=iRow;i++)
    { 
        for(j=1,k=1;j<=iCol;j++,k++)
        {
            if(i==1||i==iRow)
            {
                printf("%d\t",k);
            }
            else
            {
                if(j>1&&j<iCol)
                {
                     printf("*\t");
                }
                else
                {
                    printf("%d\t",k);
                }
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