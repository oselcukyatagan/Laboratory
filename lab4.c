//
// Created by omerselcuk on 3/12/2024.
//

#include <stdio.h>

void addList(int arraySize){

    int array1[arraySize];
    int array2[arraySize];

    // Ask the user for three inputs
    printf("Enter numbers for array 1:\n");

    // Store the inputs in the array
    for (int i = 0; i < arraySize; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Ask the user for three inputs
    printf("Enter  numbers for array 2:\n");

    // Store the inputs in the array
    for (int i = 0; i < arraySize; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int arraySum[arraySize];
    for (int i = 0; i < arraySize; ++i) {
        arraySum[i] = array2[i] + array1[i];
    }

    // Display the inputs stored in the array
    for (int i = 0; i < arraySize; ++i) {
        printf("%d ", arraySum[i]);
    }
    printf("\n");

}

void frequencyFunction(){

    int n, i, j, count;

    printf("The size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter numbers \n");
    for (i = 0; i < n; i++) {
        printf("element %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("The frequency of all elements of an array :\n");
    for (i = 0; i < n; i++) {
        count = 1;
        if (array[i] != -1) {
            for (j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    count++;
                    array[j] = -1;
                }
            }
            printf("%d occurs %d times\n", array[i], count);
        }
    }


}

void sort() {

    int arraySize;

    printf("Input size of the array: ");
    scanf("%d", &arraySize);

    int array[arraySize];


    printf("Input %d elements in the array:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        printf("element %d : ", i);
        scanf("%d", &array[i]);
    }

    int i, j, storage;

    for (i = 0; i < arraySize - 1; i++) {
        for (j = 0; j < arraySize - i - 1; j++) {
            if (array[j] > array[j+1]) {
                storage = array[j];
                array[j] = array[j+1];
                array[j+1] = storage;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}

void delete(){

    int arraySize;

    printf("Input size of the array: ");
    scanf("%d", &arraySize);

    int array[arraySize];


    printf("Input %d elements in the array:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        printf("element %d : ", i);
        scanf("%d", &array[i]);
    }

    int position;

    printf("Write the position of the element that you want to delete: \n");
    scanf("%d",&position);

    for (int i = position; i < arraySize - 1; ++i) {
        array[i] = array[i + 1];
    }

    printf("New array: ");
    for (int i = 0; i < arraySize - 1; ++i) {
        printf("%d ", array[i]);
    }
}






int main() {
    // Define an array to store the inputs

     // addList(3);
    // frequencyFunction();
    // sort();
    delete();

    return 0;
}
