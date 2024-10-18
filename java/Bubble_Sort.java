//modified the program
import java.util.Scanner;

public class BubbleSort {
    
    // Method to sort the array using bubble sort
    public int[] sortArray(int[] nums) {
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = 0; j < nums.length - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    // Swap the elements
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
        return nums;
    }

    // Method to print the array
    public void printArray(int[] nums) {
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BubbleSort bubbleSort = new BubbleSort();

        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        System.out.println("Original array:");
        bubbleSort.printArray(nums);

        // Sort the array
        bubbleSort.sortArray(nums);

        System.out.println("Sorted array:");
        bubbleSort.printArray(nums);

        scanner.close(); // Close the scanner to avoid resource leak
    }
}
