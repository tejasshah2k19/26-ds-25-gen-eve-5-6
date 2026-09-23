import java.util.LinkedList; 
public class LinkedListDemo2 {
    public static void main(String[] args) {
        
        LinkedList<Integer> list = new LinkedList<>(); 

        list.add(10);//add addLast -> insert at end 
        list.addLast(20);
        list.add(30);
        list.addFirst(40);
        list.add(2, 300);


        // System.out.println(list);//[ 40 10 300 20 30  ]
        System.out.println("Linked List => ");
        for (Integer x: list) {
            System.out.print(x+" ");
        }


        //remove 
        //3 

        //[ 40 10 300 20 30  ]
        list.remove();//removeFirst() => 40 
        list.removeLast(); //end item => 30 
        list.remove(2);//second index  => 20

        System.out.println("Linked List => ");
        for (Integer x: list) {
            System.out.print(x+" ");//10 300 
        }

        
        System.out.println("\ntotal items => " + list.size());
        

    }
}
/*
    take 7 numbers from user and add into linked list 
    1) print all 1 by 1 
    2) find out max from linked list 
    3) find out sum of all elements from linked list 
    4) list palindrome ? 
        list    10 20 30
        revList 30 20 10 
        not palindrome 
        
        list 10 20 30 20 10 
        rev 10 20 30 20 10
        palindrome 
        get(index) 
        
    5) Enter the n value from user and remove that nth item from the end 
        10 20 30 40 50 60 70  
        n = 2  // remove 2nd last item 
        10 20 30 40 50  70  

 */


        //6 =>  10 20 50 40 30 60 70 8 
        //=>    8  10 20 30 40 50 60 70 


//Rotate=> 

    //10 20 30 40 50 
    //1 
    //20 30 40 50 10

    //10 20 30 40 50 
    //2 
    //30 40 50 10 20 

//Sort 
    //50 62 20 19 4 
    //4  19 20 50 62 


//uniq list 
//10 20 30 40 20 50 10 30 60 
//apply 
//10 20 30 40 50 60 

//




