public class A2 {
    static void max(int []array,int size){
        int max=0;
        for(int i=0;i<array.length;i++){
            if(max<array[i]){
                max=array[i];
            }
        }
        System.out.println(max);
        //return max;
    }

    static void min(int []array,int size){
        int min=array[0];
        for(int i=0;i<array.length;i++){
            if(array[i]<min){
                min=array[i];
            }
        }
        System.out.println(min);
        //return min;
    }

    public static void main(String []args){
        int []array={23, 92, 56, 39, 93};
        int size=array.length;
        max(array,size);
        min(array,size);
    }
}
