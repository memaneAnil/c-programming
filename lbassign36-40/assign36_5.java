import java.util.Scanner;

class Pattern
{
    public void Display(int iRows,int iCols)
    {
        int k=0;
        for(int i=1;i<=iRows;i++)
        {
            for(int j=1;j<=iCols;j++)
            {
                System.out.print((k++%9+1)+"\t");
            }
            System.out.println();
        }
    }
}
class assign36_5
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