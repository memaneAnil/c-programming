
import java.util.*;

class MyArray
{
    public boolean CheckStr(String str1)
    {
        StringBuffer sb=new StringBuffer(str1);
        int iCnt1=0,iCnt2=0;
        

        for(int i=0;i<sb.length();i++)
        {
            if(sb.charAt(i)=='(')
            {
                iCnt1++;
            }
            else if(sb.charAt(i)==')')
            {
                iCnt2++;
            }
        }
        return(iCnt1==iCnt2);
        
    }   
}
class assign45_5
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String s1=sobj.nextLine();

        MyArray mobj=new MyArray();

        boolean bRet=mobj.CheckStr(s1);

        if(bRet==true)
        {
            System.out.println(s1 +" Balance parenthsised ");
        }
        else
        {
            System.out.println(s1 +" Not balance parenthsised ");
        }
    }
}