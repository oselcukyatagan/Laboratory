//
// Created by omerselcuk on 27.03.2024.
//
#include "stdio.h"

int charCounter(char userString[100]){


    int count = 0;
    char _char;
    printf("Write the character: \n");
    scanf(" %c", &_char);

    for (int i = 0; i < 100; ++i) {
        if(userString[i] == _char)
            count++;
    }

    printf("There are %d %c's in the given string. \n", count, _char);
    return 1;

}

void printPatterns(int numRow, int numColumn, char pattern){
    for (int i = 0; i < numRow; ++i) {
        for (int j = 0; j < numColumn; ++j) {
            printf("%c",pattern);
        }
        printf("\n");
    }
}

int gcd(int num1, int num2){
    return 1;
}

int main(){

    char userString[100] = "Selamlar";
   // charCounter(userString);
   char pattern = '#';
    // printPatterns(3,5, pattern);
    gcd(12,4);
    return 0;
}