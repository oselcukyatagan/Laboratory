//
// Created by omerselcuk on 25.02.2024.
//

#include <stdio.h>

void noteChecker() {

    int m1, m2, m3;


    printf("The value for m1: ");
    if (scanf("%d", &m1) == 0) {
        printf("The input m1 is not an integer. \n");
        return;
    }

    printf("The value for m2: ");
    if (scanf("%d", &m2) == 0) {
        printf("The input m2 is not an integer. \n");
        return;
    }

    printf("The value for m3: ");
    if (scanf("%d", &m3) == 0) {
        printf("The input m3 is not an integer. \n");
        return;
    }
    if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("PASS");
    } else {
        printf("FAIL");
    }
}

void evenOrOdd() {
    int a, b, c;
    int product;

    printf("The integer value for a: ");
    if (scanf("%d", &a) == 0) {
        printf("The input a is not an integer. \n");
        return;
        }

    printf("The integer value for a: ");
    if (scanf("%d", &b) == 0) {
        printf("The input b is not an integer. \n");
        return;
    }

    printf("The integer value for a: ");
    if (scanf("%d", &c) == 0) {
        printf("The input c is not an integer. \n");
        return;
    }


    product = a * b * c;

    if(product % 2 == 0){
        printf("The product is even.");
    }
    else{
        printf("The product is odd.");
    }
}

void letterGrade(){

    int labGrade, midterm1, midterm2, finalGrade;
    double _courseGrade;

    printf("Enter laboratory, midterm1, midterm2 and final grades: \n");
    scanf("%d %d %d %d", &labGrade, &midterm1, &midterm2, &finalGrade);

    _courseGrade = 0.2 * labGrade + 0.2 * midterm1 + 0.2 * midterm2 + 0.4 * finalGrade;
    int courseGrade = (int)_courseGrade;

    printf("The course grade is: %d \n", courseGrade);

    if(courseGrade <= 59)
        printf("Fail.");
    else if (courseGrade <= 69)
        printf("D");
    else if (courseGrade <= 79)
        printf("C");
    else if (courseGrade <= 89)
        printf("B");
    else
        printf("A");

}

int main(){

        // noteChecker();
        // evenOrOdd();
         letterGrade();
        return 1;
}

