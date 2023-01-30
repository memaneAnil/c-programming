import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
        for(int i=0;i<str.length();i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}
class assign38_3
{
    public static void main(String arr[])
    {
        Pattern pobj=new Pattern();
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the String");
        String s=sobj.nextLine();

        pobj.Display(s);
    }
}