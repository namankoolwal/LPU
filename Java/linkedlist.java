import java.util.*;

public class linkedlist {
    public static void main(String[] args)
    {
        LinkedList<String> list = new LinkedList<String>();
        list.add("naman");
        list.add("MCA");
        list.add("LPU");
        list.add("java");
        list.addFirst("alwar");
        list.addLast("programming");
        System.out.println(list);
        System.out.println(list.getFirst());

    }
}
