import java.util.Scanner;

class Pattern
{
    public void Display(int iRows,int iCols)
    {
        char ch='A';
        for(int i=1;i<=iRows;i++)
        {
            for(int j=1;j<=iCols;j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
            ch++;
        }
    }
}
class assign36_3
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