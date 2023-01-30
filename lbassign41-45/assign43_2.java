
import java.util.Scanner;

class MyArray
{
    
    public void ReverseArray(int arr1[])
    {
        int digit=0,iCnt=0,iSum=0;
       
        while(iCnt<arr1.length)
        {
            while(arr1[iCnt]!=0)
            {
                digit=arr1[iCnt]%10;
                iSum=iSum+digit;
                arr1[iCnt]=arr1[iCnt]/10; 
            }
            arr1[iCnt]=iSum;
            System.out.print("Addition of element digit : "+arr1[iCnt]);
            iCnt++;
            iSum=0;
        }
        
    }
}
class assign43_2
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        int arr1[]=new int[iSize1];
        
        System.out.println("Enter the elements of array :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        mobj.ReverseArray(arr1);
    }
}