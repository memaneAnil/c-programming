import java.util.Scanner;

class Digit
{
    public int CountDiff(int iNo)
    {
        int iDigit=0;
        int iEvenCount=0,iOddCount=0;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            if(iDigit%2==0)
            {
                iEvenCount=iEvenCount+iDigit;
            }
            else
            {
                iOddCount=iOddCount+iDigit;
            }

            iNo=iNo/10;
        }
        return (iEvenCount-iOddCount);
    }
}
class assign33_5
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number");
        int no=sobj.nextInt();

        Digit obj=new Digit();
        int iRet=obj.CountDiff(no);

        System.out.println("Difference of summation of even & odd digits are :"+iRet);
    }
}