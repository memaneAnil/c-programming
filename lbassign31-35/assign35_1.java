import java.util.Scanner;

class StringDemo
{
    public String StrConcatX(String str1,String str2,int iNo)
    {
        char arr[]=str2.toCharArray();
        
        for(int iCnt=0;iCnt<arr.length;iCnt++)
        {
            if(iCnt<iNo)
            {
               str1=str1+arr[iCnt];
            }
            else
            {
                break;
            }
        }
        return str1;
    }
}
class assign35_1
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
        String s=obj.StrConcatX(str1,str2,iNo);

        System.out.println(str1+" Concated string is : "+s);
    }
}