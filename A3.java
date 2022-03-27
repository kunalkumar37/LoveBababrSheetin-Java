import java.util.Arrays;
// import java.util.*;

public class A3 {

     static void kthmaxmin(Integer []array,int k,int n){
        Arrays.sort(array);
        
        System.out.println("kth max"+array[n-k]);
        System.out.println("kth min"+array[k-1]);

    }

    public static void main(String[] args){
        Integer []array=new Integer[]{23, 92, 56, 39, 93};
        int n=array.length;
       // Scanner sc1= new Scanner(System.in); 
        int k=2;
        kthmaxmin(array, k, n);
    }
}
