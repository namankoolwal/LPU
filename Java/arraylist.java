import java.util.*;
public class arraylist {
    public static void main(String args[]){
        ArrayList<String> list = new ArrayList<String>();
        list.add("name");
        list.add("class");
        list.add("roll no");
        list.add("class");
        list.remove("class");
        // list.remove(2);
            
        System.out.println(list);
        System.out.println(list.size());
        for (int i = 0;i<list.size();i++)
        {
            System.out.println("["+i+"]=" + list.get(i));
        }
        Collections.sort(list);
        System.out.println("after sorting");
         for (int i = 0;i<list.size();i++)
        {
            System.out.println("["+i+"]=" + list.get(i));
        }
    }
}



// ***************************************************************************************************************************************************


// import java.util.*;
// class arraylist
// {
// public static void main(String args[])
// {
// ArrayList<Integer> a=new ArrayList<Integer>();
// a.add(10);
// a.add(20);
// a.add(30);
// a.add(70);
// a.add(100);
// a.add(66);
// System.out.println("Before Sorting");
// for(int i=0;i<a.size();i++)
// {
// System.out.println(a.get(i));
// }
// Collections.sort(a);
// System.out.println("After Sorting");
// System.out.println("Sorted Array");
// for(int i=0;i<a.size();i++)
// {
// System.out.println(a.get(i));
// }
// }
// }




