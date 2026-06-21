import java.util.Scanner;
 
class MissingNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int res=0;
        for(int i=0;i<n-1;i++){
            res^=(i+1);
            res^=sc.nextInt();
        }
        res^=n;
        System.out.println(res);

    }
}
