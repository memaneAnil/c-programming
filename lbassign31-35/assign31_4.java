import java.util.Scanner;

class StringDemo
{
    public boolean CheckVowel(String s)
    {
        String str=s.toLowerCase();
        char arr[]=str.toCharArray();
        int length=str.length();
        boolean Flag=false;

        for(int iCnt=0;iCnt<length;iCnt++)
        {
            
            if((arr[iCnt]=='a')||(arr[iCnt]=='e')||(arr[iCnt]=='i')||(arr[iCnt]=='o')||(arr[iCnt]=='u'))
            {
                Flag=true;
                break;
            }
            
        }
        return Flag;
    }
}
class assign31_4
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        boolean bRet=obj.CheckVowel(str);

        if(bRet==true)
        {
            System.out.println("Contain Vowel");
        }
        else
        {
            System.out.println("Not Contain Vowel");
        }
        
    }
}