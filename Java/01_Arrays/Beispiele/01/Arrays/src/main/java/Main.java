import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int[] numbers = new int[10];

        // -------------------------------------------------------------------------------------------------------------
        // Random fill
        System.out.println("\n### Random fill ###");
        Random rand = new Random();

        for(int i = 0; i < numbers.length; i++){
            numbers[i] = rand.nextInt(100);
        }

        // output
        for(int i = 0; i < numbers.length; i++){
            System.out.print(numbers[i] +  " "); // without break
        }
        System.out.println(" "); // manual break

        // -------------------------------------------------------------------------------------------------------------
        // Bubble Sort ascending
        System.out.println("\n### Bubble Sort ###");
        for(int i = 0; i < numbers.length; i++){
            for(int j = 0; j < numbers.length; j++){
                if(numbers[i] < numbers[j]){
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }

        // Output
        for(int i = 0; i < numbers.length; i++){
            System.out.print(numbers[i] +  " "); // without break
        }
        System.out.println(" "); // manual break

        // -------------------------------------------------------------------------------------------------------------
        // Add
        System.out.println("\n### Add ###");
        int[] old = numbers;
        numbers = new int[old.length + 1];

        for(int i = 0; i < old.length; i++){
            numbers[i] = old[i];
        }

        numbers[old.length] = rand.nextInt(100);


        // Output
        for(int i = 0; i < numbers.length; i++){
            System.out.print(numbers[i] +  " "); // without break
        }
        System.out.println(" "); // manual break

        // -------------------------------------------------------------------------------------------------------------
        // Delete
        System.out.println("\n### Delete ###");
        int indexToBeDeleted = rand.nextInt(numbers.length); // Random index, needs to be in the array.length
        int[] old2 = numbers;
        numbers = new int[old2.length - 1];

        for(int i = 0; i < indexToBeDeleted; i++){
            numbers[i] = old2[i];
        }

        for(int i = indexToBeDeleted; i < numbers.length; i++){
            numbers[i] = old2[i + 1];
        }

        // Output
        for(int i = 0; i < numbers.length; i++){
            System.out.print(numbers[i] +  " "); // without break
        }
        System.out.println(" "); // manual break

        // -------------------------------------------------------------------------------------------------------------
        // Combine 2 Arrays
        System.out.println("\n### Combine 2 Arrays ###");
        int[] firstArray = new int[10];
        int[] secondArray = new int[10];

        for(int i = 0; i < 10; i++){
            firstArray[i] = i;
            secondArray[i] = i + 10;
        }

        // Output
        for(int i = 0; i < firstArray.length; i++){
            System.out.print(firstArray[i] +  " "); // without break
        }
        System.out.println(" "); // manual break
        for(int i = 0; i < secondArray.length; i++){
            System.out.print(secondArray[i] +  " "); // without break
        }
        System.out.println(" "); // manual break

        // Combine the two Arrays
        int[] combinedArray = new int[20];
        for(int i = 0; i < 10; i++){
            combinedArray[i] = firstArray[i];
        }
        for(int i = 0; i < 10; i++){
            combinedArray[i + 10] = secondArray[i];
        }

        // Output
        for(int i = 0; i < combinedArray.length; i++){
            System.out.print(combinedArray[i] +  " ");
        }
        System.out.println(" ");
    }
}
