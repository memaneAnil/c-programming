import java.util.Scanner;

class Pattern
{
    public void Display(int iRows,int iCols)
    {
        for(int i=iRows;i>=1;i--)
        {
            for(int j=1;j<=iCols;j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}
class assign36_4
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