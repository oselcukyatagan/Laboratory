//
// Created by omerselcuk on 2.03.2024.
//

#include <stdio.h>

int sumInputs(int arraySize){

    int inputArray[arraySize]; // Initialize the array
    int sum = 0;

    for (int i = 0; i < arraySize; ++i) { // Store inputs in the array
        scanf("%d", &inputArray[i]);
        sum += inputArray[i];
    }

    for (int i = 0; i < arraySize; ++i) { // Clear the array
        inputArray[i] = 0;
    }

    return sum;

}

int sumUntilNegative() {

    int number;
    int sum = 0;

    for (int i = 0; i < 100; ++i) {
        scanf("%d", &number);
        if(number < 0)
            break;
        sum += number;
        number = 0;
    }
    return sum;
}


void minMax(int arraySize){

    int inputArray[arraySize]; // Initialize the array
    int min, max;

    for (int i = 0; i < arraySize; ++i) { // Store inputs in the array
        scanf("%d", &inputArray[i]);
    }

    for (int i = 0; i < arraySize; ++i) { // Print the array
        printf("%d   ", inputArray[i]);
    }

    for (int i = 0; i < arraySize; ++i) {
        min = inputArray[1];
        if(inputArray[i] < inputArray[i+1])
            min = inputArray[i];
    }




    printf("\n %d %d",min,max);

    for (int i = 0; i < arraySize; ++i) { // Clear the array
        inputArray[i] = 0;
    }

}

void rightTriangle(int size){
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            printf("%d", i);
            if(i == j) {
                printf("\n");
                break;
            }
        }
    }
}

void pyramid(int height) {

    for (int i = 1; i <= height; ++i) {

        for (int space = 0; space < height - i; ++space) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        for (int space = 0; space < height - i - 1; ++space) {
            printf(" ");
        }
        printf("\n");



    }

}


int main(){

   // printf("%d",sumInputs(10));
   // printf("%d", sumUntilNegative());
   // minMax(3);
   // rightTriangle(4);
   // pyramid(6);

    return 1;

}
