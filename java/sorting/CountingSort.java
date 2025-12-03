import java.util.Arrays;

public class CountingSort {
    public static int[] countingSort(int[] arr) {
        if(arr.length == 0) return arr;
        int max = Arrays.stream(arr).max().getAsInt();
        int[] count = new int[max+1];
        for(int num : arr) count[num]++;
        int index = 0;
        for(int i=0; i<=max; i++) {
            while(count[i] > 0) {
                arr[index++] = i;
                count[i]--;
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 2, 8, 3, 3, 1};
        System.out.println("Original: " + Arrays.toString(arr));
        countingSort(arr);
        System.out.println("Counting Sorted: " + Arrays.toString(arr));
    }
}

