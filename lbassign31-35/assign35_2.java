import java.util.Scanner;

class StringDemo
{
    public boolean StrConcatX(String str1,String str2)
    {
        str1=str1.toLowerCase();
        str2=str2.toLowerCase();
        char arr1[]=str1.toCharArray();
        char arr2[]=str2.toCharArray();
        int iCounter=0;
        int iCnt=0;

        for(iCnt=0;iCnt<arr1.length && iCnt<arr2.length;iCnt++)
        {
            if(arr1[iCnt]==arr2[iCnt])
            {
                iCounter++;
            }
            else
            {
                break;
            }
        }
        if(iCnt==iCounter && iCnt==arr1.length && iCnt==arr2.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class assign35_2
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter First string");
        String str1=sobj.nextLine();

        System.out.println("Please enter second string");
        String str2=sobj.nextLine();

        StringDemo obj=new StringDemo();
        boolean bRet=obj.StrConcatX(str1,str2);

        if(bRet==true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }

    }
}