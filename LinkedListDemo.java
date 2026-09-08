
import java.util.LinkedList;

public class LinkedListDemo {

    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();

        list.addLast(10);//head 
        list.addLast(20);//
        list.addLast(30);//
        list.addLast(40);//
        list.addLast(50);//[50 | NULL ]

        list.addFirst(500);
        System.out.println(list);//head -> last 

        System.out.println("**************************");
        for (Integer data : list) {
            System.out.println(data);
        }

        //500 10 20 30 40 50 
        list.remove(3);//3rd index 
        System.out.println("**************************");
        System.out.println(list);//head -> last 


        //num => 2 => end of list -> position  
        //10 20 30 40 50 
        //10 20 30 50 

        //10 20 30 40 50 
    
        //2 
        //5-2 => 3  
        //3
        //5-3 => 2 
        int totalElements = list.size(); 
        int position = 2; 
        int deleteIndex = totalElements - position; 
        list.remove(deleteIndex); 
        System.out.println(list);

    }

}
