
import java.util.*;

class MyArray
{
    public void CheckStr(String str1,char ch)
    {
        StringBuffer sb=new StringBuffer(str1);
        for(int i=0;i<sb.length();i++)
        {
            if(ch==(sb.charAt(i)))
            {
                sb=sb.deleteCharAt(i);
            }
        }
        System.out.println(sb);
    }   
}
class assign45_4
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String s1=sobj.nextLine();

        System.out.println("Enter the character");
        char ch=sobj.next().charAt(0);


        MyArray mobj=new MyArray();

        mobj.CheckStr(s1,ch);
    }
}