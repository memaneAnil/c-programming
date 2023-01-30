import java.util.Scanner;

class Digit
{
    public int Multiply(int iNo)
    {
        int iDigit=0,iMult=1;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            if(iDigit!=0)
            {
                iMult=iMult*iDigit;
            }
            
            iNo=iNo/10;
        }
        return iMult;
    }
}
class assign33_4
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number");
        int no=sobj.nextInt();

        Digit obj=new Digit();
        int iRet=obj.Multiply(no);

        System.out.println("Multification of digit are :"+iRet);
    }
}