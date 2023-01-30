import java.util.Scanner;

class StringDemo
{
    public boolean strPallindrom(String s)
    {
        s=s.toLowerCase();
        char arr[]=s.toCharArray();
        int iEnd=s.length()-1;
        int iStart=0;
        
        while(iStart<iEnd)
        {   
            if(arr[iStart]!=arr[iEnd])
            {
                break;
            }
            
            iStart++;
            iEnd--;
        }
        
        if(iStart>iEnd)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class assign35_5
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        boolean bRet=obj.strPallindrom(str);

        if(bRet==true)
        {
            System.out.println("String is pallindrom");
        }
        else
        {
            System.out.println("String is not pallindrom");
        }
    }
}