import java.util.Scanner;

class Pattern
{
    public void Display(int iRows,int iCols)
    {
        int k=0,j=0;
        for(int i=1;i<=iRows;i++)
        {
            for(j=iCols;j>=1;j--)
            {
                if((i==1)||(i==iRows)||(j==1)||(j==iCols))
                {
                    System.out.print("*\t");
                }
                else if(i==j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("\t");
                }              
            }
            System.out.println();
        }
    }
}
class assign40_3
{
    public static void main(String arr[])
    {
        Pattern pobj=new Pattern();
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number of rows");
        int row=sobj.nextInt();

        System.out.println("Please enter the number of columns");
        int col=sobj.nextInt();


        pobj.Display(row,col);
    }
}