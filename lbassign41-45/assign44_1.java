
import java.util.Scanner;

class MyArray
{  
    public void ArrayReplace(char arr1[])
    {
        int iCnt=0;
       
        while(iCnt<arr1.length)
        {
            if(arr1[iCnt]>='A'&&arr1[iCnt]<='Z')
            {
                arr1[iCnt]=Character.toLowerCase(arr1[iCnt]);
            }
            System.out.println("Array elements are :"+arr1[iCnt]);
            iCnt++;
        } 
    }
}
class assign44_1
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

        mobj.ArrayReplace(arr1);
    }
}