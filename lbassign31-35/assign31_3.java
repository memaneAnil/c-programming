import java.util.Scanner;

class StringDemo
{
    public int SmallCapitalDiff(String s)
    {
        char arr[]=s.toCharArray();
        int length=s.length();
        int iSCount=0,iCCount=0;
        
        for(int iCnt=0;iCnt<length;iCnt++)
        {
            if((arr[iCnt]>='a')&&(arr[iCnt]<='z'))
            {
                iSCount++;
            }
            else if((arr[iCnt]>='A')&&(arr[iCnt]<='Z'))
            {
                iCCount++;
            }
        }
        return (iSCount-iCCount);
    }
}
class assign31_3
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        int iRet=obj.SmallCapitalDiff(str);

        System.out.println("Difference between Small & capital characters are :"+iRet);
    }
}