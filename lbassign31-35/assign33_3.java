import java.util.Scanner;

class Digit
{
    public int CountRange(int iNo)
    {
        int iDigit=0,iCount=0;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            if(iDigit>3 && iDigit<7)
            {
                iCount++;
            }

            iNo=iNo/10;
        }
        return iCount;
    }
}
class assign33_3
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number");
        int no=sobj.nextInt();

        Digit obj=new Digit();
        int iRet=obj.CountRange(no);

        System.out.println("Number of digits in between 3 & 7 are :"+iRet);
    }
}