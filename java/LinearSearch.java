//code modified
import java.util.Scanner;

class Example1 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);

        // Ask user for the number of elements in the array
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        
        // Initialize the array
        int[] a = new int[n];

        // Get array elements from user
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        // Ask user for the key to search
        System.out.print("Enter the key to search for: ");
        int key = scanner.nextInt();
        
        // Linear search
        int i;
        for (i = 0; i < a.length; i++) {
            if (a[i] == key) {
                System.out.println(key + " is present at location " + (i + 1));
                break;
            }
        }

        if (i == a.length) {
            System.out.println(key + " doesn't exist in the array.");
        }

        // Close the scanner
        scanner.close();
    }
}
