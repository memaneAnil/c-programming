import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
        int k=str.length();
        for(int i=0;i<9;i++,k--)
        {
           
            
            for(int j=0;j<k;j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            if(i>=4)
            {
                k=i-1;
            }
            System.out.println();
        }
    }
}
class assign38_4
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