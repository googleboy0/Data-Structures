package JAVA.Sorting;

public class bubbleSort {

    public static void sorting(int arr[]){
        for(int i = 0; i < arr.length-1; i++){
            for(int j = 0; j < arr.length-i-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {5,4,7,1,9,8,6,2};
        sorting(arr);
        for(int i = 0; i < arr.length;i++) {
            System.out.print(arr[i]+" ");
        }
    }
    
}
