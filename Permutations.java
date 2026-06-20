import java.util.Scanner;

class Permutations {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        StringBuilder sb=new StringBuilder();
        if(n==1){
            System.out.println(1+"");
        }
        else if(n<=3){
            System.out.println("NO SOLUTION");
        }
        else{
            for(long i=2;i<=n;i+=2){
                sb.append(i+" ");
            }   
            for(long i=1;i<=n;i+=2){
                sb.append(i+" ");
            }
            System.out.println(sb);
        }
    }
}