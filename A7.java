public class A7 {
    
    public static void main(String[] args) {
        Integer []array1=new Integer[]{ 1, 2, 4, 5, 6 };
        int n=array1.length;

        System.out.println(array1[n-1]);
        for(int i=0;i<n-1;i++){
            System.out.println(array1[i]);
        }
    }
}
