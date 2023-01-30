
import java.util.Scanner;

class MyArray
{
    public boolean CheckStr(String str1,String str2)
    {
        int iCnt=0;
        String s=null;
        String s1=null;
        StringBuffer s3=null;
        String s4=null;
        boolean flag=true;
        
        while(iCnt<(str1.length()))
        {
            if(str1.charAt(iCnt)==str2.charAt(0))
            {
                s3=new StringBuffer(str1.substring(0,iCnt+1));
                s3=s3.reverse();
                s3=s3.append(new StringBuffer(str1.substring(iCnt+1,str1.length())));
                
                s=str1.substring(iCnt,str1.length());
                s1=str1.substring(0,iCnt);
                s=s.concat(s1);
            }
            iCnt++;
        }
        //s3=s3.reverse();
        //System.out.println(s3);
        s4=new String(s3);
        //System.out.println(str2+"   "+s4);
        if(str2.equalsIgnoreCase(s)||s4.equalsIgnoreCase(str2))
        {
            return flag;
        }
        else
        {
            flag=false;
            return flag;
        }
    }    
}
class assign45_1
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the first String");
        String s1=sobj.nextLine();

        System.out.println("Enter the second String");
        String s2=sobj.nextLine();

        MyArray mobj=new MyArray();

        boolean bRet=mobj.CheckStr(s1,s2);

        if(bRet==true)
        {
            System.out.println(s1 +" first string is rotation of second string "+ s2);
        }
        else
        {
            System.out.println(s1 +" first string is not rotation of second string "+ s2);
        }
    }
}