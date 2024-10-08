public class bubblesort {

    public static void bubble(int arr[]){
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            for(int j = 0 ; j < n - i -1 ; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        // for (int i = 0; i < arr.length; i++) {
        //     System.out.println(arr[i]);
        // }
        
    }
}
