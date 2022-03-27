import java.util.*;
public class A6 {

    static void union1(Integer []array1,Integer []array2,int m,int n){
        int i=0,j=0;
        while(i<m && j<n){
            if(array1[i]<array2[j]){
                System.out.println(array1[i++]);
             

            }
            else if(array1[i]>array2[j]){
                System.out.println(array2[j++]);
             
            }
            else{
                System.out.println(array2[j++]);
                i++;
                
            }
        }
        while(i<m){
            System.out.println(array1[i++]);
          
        }

        while(j<m){
            System.out.println(array2[j++]);
            
        }

    }

    static void intersection1(Integer []array1,Integer []array2,int m,int n){
        int i=0,j=0;
        while(i<m && j<n){
            if(array1[i]<array2[j]){
                //System.out.println(array1[i]);
                i++;

            }
            else if(array1[i]>array2[j]){
               // System.out.println(array2[j]);
                j++;
            }
            else{
                System.out.println(array2[j]);
                i++;
                j++;
            }
        }
    }




    public static void main(String[] args) {
        Integer []array1=new Integer[]{ 1, 2, 4, 5, 6 };
        Integer  []array2=new Integer[]{ 2, 3, 5, 7 };
       Arrays.sort(array1);
       Arrays.sort(array2);
       int m=array1.length;
       int n=array2.length;
       union1(array1, array2,m,n);
       intersection1(array1, array2, m, n);

    }
}
