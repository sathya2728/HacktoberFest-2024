import java.util.InputMismatchException;
import java.util.Scanner;

public class LinkedList {
    public static class ListNode {
        int data;
        ListNode next;

        public ListNode(int data) {
            this.data = data;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ListNode head = null;
        ListNode tail = null;

        System.out.println("Enter integers to create a linked list. Enter -1 to stop.");

        int userInput;
        while (true) {
            System.out.print("Enter an integer: ");
            try {
                userInput = scanner.nextInt();
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter an integer.");
                scanner.next(); // Clear the invalid input
                continue; // Prompt for input again
            }

            if (userInput == -1) {
                break;
            }

            ListNode newNode = new ListNode(userInput);

            if (head == null) {
                head = newNode;
                tail = newNode;
            } else {
                tail.next = newNode;
                tail = newNode;
            }
        }

        System.out.println("Enter the value of n:");
        int n = -1;
        while (n < 0) {
            try {
                n = scanner.nextInt();
                if (n < 0) {
                    System.out.println("Please enter a non-negative integer.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a non-negative integer.");
                scanner.next(); // Clear the invalid input
            }
        }

        ListNode head1 = removeNthFromEnd(head, n);
        printLinkedList(head1);

        scanner.close();
    }

    public static void printLinkedList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode fast = dummy;
        ListNode slow = dummy;

        // Move the fast pointer n nodes ahead.
        for (int i = 0; i <= n; i++) {
            fast = fast.next;
        }

        // Move both pointers until the fast pointer reaches the end.
        while (fast != null) {
            fast = fast.next;
            slow = slow.next;
        }

        // Remove the nth node from the end by adjusting the pointers.
        slow.next = slow.next.next;

        return dummy.next; 
    }
}
