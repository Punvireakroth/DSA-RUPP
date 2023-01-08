/*
Name: Pun VireakRoth
ITE M3
Array insertion
 */

import java.util.Arrays;
import java.util.Scanner;

class Insert {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("How many array element you want to create? ");
        int n = input.nextInt();
        // new array plus one additional blank slut
        // We do this since we can't update array size after it constructed
        int[] myArr = new int[n + 1];
        System.out.println("Input each element: ");
        // insert new element user put in
        for (int i = 0; i < n; i++) {
            myArr[i] = input.nextInt();
        }
        System.out.println("Which index you want to insert? 0 - " + (myArr.length - 1));
        int index = input.nextInt();
        System.out.println("What element's value in that index? ");
        int preferElement = input.nextInt();
        // push element's index 1 forward
        for (int i = (n - 1); i >= (index - 1); i--) {
            myArr[i + 1] = myArr[i];
        }
        // put the new element to myArr
        myArr[index - 1] = preferElement;

        // output
        System.out.println("After inserted");
        System.out.println(Arrays.toString(myArr));
    }
}