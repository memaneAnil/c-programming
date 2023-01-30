import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
        int k=0;
        for(int i=0;i<9;i++,k++)
        {
            for(int j=0;j<str.length();j++)
            {
                if(j<=k)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
               
            }
            if(i>=4)
            {
                k=k-2;
            }
            System.out.println();
        }
    }
}
class assign39_5
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