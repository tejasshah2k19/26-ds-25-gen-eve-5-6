
import java.util.Scanner;
import java.util.Stack;

public class StackDemo {

    public static void main(String[] args) {

        Scanner scr = new Scanner(System.in);
        Stack<Character> s = new Stack<>();

        System.out.println("Enter string");
        String str = scr.next();//{}{}{} 

        //0  1 2  3 4  5
        //{  } {  } {  }

        for(int i=0;i<str.length();i++){  
            s.push(str.charAt(i));
        }

        System.out.println(s);// {}{}{} 
         
         
    }




















    public static void oldMain(String[] args) {

        Stack<Integer> s = new Stack<>();

        s.push(10);
        s.push(20);

        System.out.println(s.size());//2 

        System.out.println(s.pop());//remove {20} 

        System.out.println(s.size());//1 

        System.out.println(s.isEmpty());//boolean : true / false 

        System.out.println(s.peek());//top of the stack -> 10 

        // string 
        // enter the string 
        // {}{}
        // }{}{
    }
}
