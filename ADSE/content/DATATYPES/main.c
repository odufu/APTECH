#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculateQuadraticEquation() {
    double a, b, c, solution1, solution2;

    printf("Enter the coefficients of X^2: \n");
    scanf("%lf", &a);

    printf("Enter the coefficients of X: \n");
    scanf("%lf", &b);

    printf("Enter the Constant Term: \n");
    scanf("%lf", &c);

    printf("The Params are: a=%.2f, b=%.2f, c=%.2f\n", a, b, c);

    double discriminant = b * b - (4 * a * c);

    if (discriminant > 0) {
        solution1 = (-b + sqrt(discriminant)) / (2 * a);
        solution2 = (-b - sqrt(discriminant)) / (2 * a); // Fix assignment
        printf("The equation has two solutions. X1= %.2f, X2= %.2f\n", solution1, solution2); // Fix printf
    } else if (discriminant == 0) {
        printf("The equation has only one solution. X= %.2f\n", -b / (2 * a));
    } else {
        printf("The equation has no real solutions.\n");
    }
}

int main() {
    calculateQuadraticEquation();
    return 0;
}