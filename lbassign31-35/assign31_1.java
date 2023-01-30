import java.util.Scanner;

class StringDemo
{
    public int SmallCount(String s)
    {
        char arr[]=s.toCharArray();
        int length=s.length();
        int iCount=0;
        
        for(int iCnt=0;iCnt<length;iCnt++)
        {
            if((arr[iCnt]>='A')&&(arr[iCnt]<='Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class assign31_1
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        int iRet=obj.SmallCount(str);

        System.out.println("Number of Capital characters are :"+iRet);
    }
}
