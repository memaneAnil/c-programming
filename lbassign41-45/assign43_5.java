
import java.util.Scanner;

class MyArray
{
    
    public void Percentage(float arr1[])
    {
        int iCnt=0;
       
        while(iCnt<arr1.length)
        {
            if(arr1[iCnt]>=70&&arr1[iCnt]<100)
            {
                System.out.println("First class with distinction : "+arr1[iCnt]+"%");
            }
            else if(arr1[iCnt]>=60&& arr1[iCnt]<70)
            {
                System.out.println("First class : "+arr1[iCnt]+"%");
            }
            else if(arr1[iCnt]>=50&& arr1[iCnt]<60)
            {
                System.out.println("Second class : "+arr1[iCnt]+"%");
            }
            else if(arr1[iCnt]>=35&& arr1[iCnt]<50)
            {
                System.out.println("Pass class : "+arr1[iCnt]+"%");
            }
            else
            {
                System.out.println("Fail : "+arr1[iCnt]+"%");
            }
            iCnt++;
        }
    }
}
class assign43_5
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        float arr1[]=new float[iSize1];
        
        System.out.println("Enter the marks :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextFloat();
        }

        MyArray mobj=new MyArray();

        mobj.Percentage(arr1);
        
    }
}