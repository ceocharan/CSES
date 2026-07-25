import java.util.*;
class ChessBoardAndQueens {
    static int i=0;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        char arr[][] = new char[8][8];
        for(int i=0;i<8;i++) {
           arr[i]=sc.nextLine().toCharArray();
        }        
        System.out.println(rec(0,arr));
    }

    static int rec(int i,char arr[][]) {
        if(i==8){
            return 1;
        }
        int res=0;
        for(int k=0;k<8;k++){
            if(arr[i][k]!='*'&& !left(i,k,arr) && !right(i,k,arr) && !up(i,k,arr) && !down(i, k, arr) && !leftD(i, k, arr) && !rightD(i, k, arr)){
                arr[i][k]='Q';
                res+=rec(i+1,arr);
                arr[i][k]='.';
            }
        }
        return res;
    }


    static boolean left(int i,int j,char arr[][]){
        for(int k=j-1;k>=0;k--){
            if(arr[i][k]=='Q'){
                return true;
            }
        }
        return false;
    }
    static boolean right(int i,int j,char arr[][]){
        for(int k=j+1;k<8;k++){
            if(arr[i][k]=='Q'){
                return true;
            }
        }
        return false;
    }
    static boolean up(int i,int j,char arr[][]){
        for(int l=i-1;l>=0;l--){
            if(arr[l][j]=='Q'){
                return true;
            }
        }
        return false;
    }

    static boolean down(int i,int j,char arr[][]){
        for(int l=i+1;l<8;l++){
            if(arr[l][j]=='Q'){
                return true;
            }
        }
        return false;
    }
    static boolean leftD(int i,int j,char arr[][]){
        while(i>=0 && j>=0) {
            if(arr[i][j]=='Q'){
                return true;
            }
            i--;
            j--;
        }
        return false;
    }

    static boolean rightD(int i,int j,char arr[][]){
        while(i>=0 && j<8){
            if(arr[i][j]=='Q'){
                return true;
            }
            i--;
            j++;
        }
        return false;
    }
}