import java.util.Scanner;

class Digit
{
    public int CountOdd(int iNo)
    {
        int iDigit=0,iOddCount=0;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            if(iDigit%2!=0)
            {
                iOddCount++;
            }

            iNo=iNo/10;
        }
        return iOddCount;
    }
}
class assign33_2
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number");
        int no=sobj.nextInt();

        Digit obj=new Digit();
        int iRet=obj.CountOdd(no);

        System.out.println("Number of Odd digits are :"+iRet);
    }
}