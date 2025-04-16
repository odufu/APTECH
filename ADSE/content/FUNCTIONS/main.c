#include <stdio.h>
#include <math.h>

int calculateQuadraticEquation(double a, double b, double c)
{
    double root1, root2;
    // calculate discriminant
    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        /* code */
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;

        printf("The Solutions are: X = %f and %f", root1, root2);
        return 0;
    }
    else if (discriminant == 0)
    {
        /* code */

        root1 = (-b) / 2 * a;
        printf("The solution is: X = %f", root1);
        return 0;

    }
    else
    {
        /* code */
        double realPart = -b / (2 * a);
        double imarginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The solutions are x= %.2f + %.2fi and x= %.2f - %.2fi ", realPart, imarginaryPart, realPart, imarginaryPart);
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    calculateQuadraticEquation(1,1,4);
    return 0;
}

