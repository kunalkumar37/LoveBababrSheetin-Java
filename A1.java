import java.io.*;
class A1{
    static void reversearray(int arr[],int start,int end){
        int temp;
        while(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }

    static void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            System.out.println(arr[i]);
        }
    }
    public static void main(String []args){
        int arr[]={1,2,3,4,5,67,8};
        int size=arr.length;
        reversearray(arr,0,size-1);
        printarray(arr,size);
    }

}