import java.util.Scanner;

class Digit
{
    public int CountEven(int iNo)
    {
        int iDigit=0,iEvenCount=0;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;

            if(iDigit%2==0)
            {
                iEvenCount++;
            }

            iNo=iNo/10;
        }
        return iEvenCount;
    }
}
class assign33_1
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the number");
        int no=sobj.nextInt();

        Digit obj=new Digit();
        int iRet=obj.CountEven(no);

        System.out.println("Number of Even digits are :"+iRet);
    }
}