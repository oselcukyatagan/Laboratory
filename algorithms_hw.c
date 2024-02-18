//
// Created by omerselcuk on 18.02.2024.
//
#include "stdio.h"
#include "math.h"

int power(int base, int _power){
    int sum = 1;
    for (int i = 0; i < _power; ++i) {
        sum *= base;
    }
    return sum;
}

double find_distance(int p1_x, int p1_y, int p2_x, int p2_y){
    int x_diff = p1_x - p2_x;
    int y_diff = p1_y - p2_y;

    double result = sqrt(power(x_diff,2) + power(y_diff,2));

    return result;

}

double pacman_area(int radius, double angle){
    double pi = 3.14;
    double result = pi * power(radius, 2) * (angle / 360.0);

    return result;
}

double pacman_perimeter(int radius, double angle){
    double pi = 3.14;
    double result = 2 * pi * radius * (angle / 360.0);

    return result;
}

double solve_formula(int x, int a, int b){
    double result = 2 * sqrt(power(a * x + b, 3)) / (3*a);

    return result;
}

 int main () {

    printf("The distance between two points are: %lf \n", find_distance(1,2,5,5));
    printf("The area of the pacman is: %lf \n", pacman_area(3,320.0));
    printf("The perimeter pf the pacman is: %lf \n", pacman_perimeter(2,360.0));
    printf("The result of the formula is: %lf \n", solve_formula(1,2,3));

}
