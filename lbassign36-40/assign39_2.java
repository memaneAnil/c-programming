import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
        for(int i=str.length();i>0;i--)
        {
            for(int j=0;j<str.length();j++)
            {
                if(i<=j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(str.charAt(j)+"\t");
                }
            }
            System.out.println();
        }
    }
}
class assign39_2
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