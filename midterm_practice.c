//
// Created by omerselcuk on 28.03.2024.
//
#include "stdio.h"

void pyramid(int height){
    for (int i = 0; i < height; ++i) {

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

void rightTriangle(int height){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height; ++j) {
            printf("%d",i);
            if(i == j)
                break;
        }
        printf("\n");
    }
}

int max(){

    int listSize;

    printf("How many numbers are there: \n");
    scanf("%d", &listSize);

    int userList[listSize];

    for (int i = 0; i < listSize; ++i) {
        printf("Write the number %d: \n", i + 1);
        scanf("%d", &userList[i]);
    }

    for (int i = 0; i < listSize; ++i) {
        printf("%d ",userList[i]);
    }

    int max = userList[0];

    for (int i = 1; i < listSize; ++i) {
        if(userList[i] > max)
            max = userList[i];
    }
    printf("Max is %d \n", max);
}


int main(){
   // pyramid(6);
   // rightTriangle(6);
    max();
}