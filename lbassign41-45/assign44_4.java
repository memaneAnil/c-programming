
import java.util.Scanner;

class MyArray
{  
    public int Difference(char arr1[])
    {
        int iCnt=0,iCapitalCnt=0,iSmallCnt=0;
       
        while(iCnt<arr1.length)
        {
            if(arr1[iCnt]>='A'&& arr1[iCnt]<='Z')
            {
               iCapitalCnt++;
            }
            else if(arr1[iCnt]>='a'&& arr1[iCnt]<='z')
            {
                iSmallCnt++;
            }
            iCnt++;
        } 
        return (iCapitalCnt-iSmallCnt);
    }
}
class assign44_4
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        char arr1[]=new char[iSize1];
        
        System.out.println("Enter the characters :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.next().charAt(0);
        }

        MyArray mobj=new MyArray();

        int iRet=mobj.Difference(arr1);
        System.out.println("Difference of Capital & small is :"+iRet);
    }
}