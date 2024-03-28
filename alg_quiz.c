//
// Created by omerselcuk on 15.03.2024.
//
#include "stdio.h" // #was missing

int main(){ // { was missing
    int num;
    printf("Enter a number within the range 0 to 9: ");
    scanf("%d",&num); //& was missing.

    if(num < 0 || num > 9){ // or operator was wrong
        printf("The entered number is not in the range 0 to 9.");
        return 1;
    }

    int yuppy = 1; // int was missing.
    int steps[10]; // steps was written wrong.
    int i = 1;

    do {
        yuppy *= i;
        steps[i - 1] = yuppy;
        i++;
    } while ( i <= num);

    printf("Yuppy steps for %d are: ", num); // num was written as number

    for (int j = 0; j < num; ++j) {
        printf("%d ",steps[j]); // %f was written instead of %d.
    }
    printf("\n");

    return 1;

}