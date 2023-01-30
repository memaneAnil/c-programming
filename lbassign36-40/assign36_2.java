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
                if(i%2==0)
                {
                    System.out.print(Character.toLowerCase(ch)+"\t");
                }
                else
                {
                    System.out.print(ch+"\t");
                }
                ch++;
            }
            System.out.println();
            ch='A';
        }
    }
}
class assign36_2
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