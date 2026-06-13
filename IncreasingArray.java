import java.util.Scanner;

class IncreasingArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long prev=sc.nextInt();
        long res=0,v=0;
        for(int i=1;i<n;i++){
            v=sc.nextInt();
            if(prev>v){
                res+=prev-v;
            }
            else{
                prev=v;
            }
        }
        System.out.println(res);

    }
}