import java.util.Scanner;

public class Repetitions {
    public static void main(String[] args) { 
        Scanner sc=new Scanner(System.in);
        String st=sc.next();
        char prev=st.charAt(0);
        int index=1,count=1,result=1;
        while(index<st.length()){
            if(prev==st.charAt(index)){
                count++;
            }
            else{
                count=1;
                prev=st.charAt(index);
            }
            index++;
            result=Math.max(result,count);
        }
        System.out.println(result);
    }
}