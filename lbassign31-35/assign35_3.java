import java.util.Scanner;

class StringDemo
{
    public boolean StrNcmpX(String str1,String str2,int iNo)
    {
        char arr1[]=str1.toCharArray();
        char arr2[]=str2.toCharArray();
        int iCounter=0;
        int iCnt=0;

        for(iCnt=0;iCnt<arr1.length && iCnt<arr2.length;iCnt++)
        {
            if(arr1[iCnt]==arr2[iCnt] && iCnt<iNo)
            {
                iCounter++;
            }
            else
            {
                break;
            }
        }
        if(iNo==iCounter)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class assign35_3
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter First string");
        String str1=sobj.nextLine();

        System.out.println("Please enter second string");
        String str2=sobj.nextLine();

        System.out.println("Enter number ");
        int iNo=sobj.nextInt();

        StringDemo obj=new StringDemo();
        boolean bRet=obj.StrNcmpX(str1,str2,iNo);

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