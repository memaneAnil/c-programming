
import java.util.*;

class MyArray
{
    public void CheckStr(String str1)
    {
        ArrayList<String> l=new ArrayList<>();
        int iCnt=0;
        int i=0;

        while(iCnt<str1.length())
        {
            
            if(str1.charAt(iCnt)==' ')
            {
                l.add(str1.substring(i,iCnt));
                i=iCnt;
            }
            
            iCnt++;
        }
        l.add(str1.substring(str1.lastIndexOf(" "),str1.length()));
        
        int counter=0;
        String s1=null;
        String s2=null;

        Map h=new HashMap();

        while(l.size()!=0)
        {
            s1=((String)l.get(0)).trim();
            for(int j=l.size()-1;j>=0;j--)
            {
                s2=((String)l.get(j).trim());
                if(s1.equalsIgnoreCase(s2))
                {
                    counter++;
                    l.remove(l.get(j));
                }
            }

            System.out.println(s1+ " : "+counter);
            h.put(s1,counter);
            counter=0;
        }
        System.out.println(h);
        int iMax=0;
        //Set hs=h.keySet();
        for(Object k:h.keySet())
        {
            if(iMax<(int)h.get(k))
            {
                iMax=(int)h.get(k);
                System.out.println(k+" : "+iMax);
            }
           
        }
        
    }
}
class assign45_3
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String");
        String s1=sobj.nextLine();

        MyArray mobj=new MyArray();

        mobj.CheckStr(s1);
    }
}