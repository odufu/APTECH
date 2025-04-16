#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int calculateQuadraticEquation(){
    double a, b, c, d, x1, x2, x3, discriminant;

    //get the value of the coefficients of the quadratic equation


    //get x squared coefficient
    printf("Coeficient of X^2: \n");
    scanf("%lf", &a);

    //get x coeficient
    printf("Coeficient of X: \n");
    scanf("%lf", &b);

    //get the constant term
    printf("The constant term: \n");
    scanf("%lf", &c);




    //determine the discriminant
    discriminant= b*b - 4*a*c;

    //for double roots

    if (discriminant>0)
    {
        x1=(-b + sqrt(discriminant)) / (2*a);
        x2 =(-b - sqrt(discriminant)) / (2*a);
        printf("X has 2 distinct roots\n X1=%lf \n X2=%lf \n", x1, x2);
    }else if (discriminant==0)
    {
        x1=-b/2*a;
        printf("X has only one root \n X=%lf \n", x1);

    }else
    {
        printf("X has no Real roots \n ");
    }
    
    
    

return 0;
}

int main()
{
    calculateQuadraticEquation();
    return 0;
}

