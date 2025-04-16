#include<stdio.h>
int main(){
    float sum=0.0;
    float temperature[4]={23.5,25.0,22.8,24.1};
    int i=0;
    while (i<=3)
    {
        printf("Temp %d = %.2f\n",i+1,temperature[i]);
        sum+=temperature[i];
        i++;
    };
    printf("The Average temeperature = %.2f\n",sum/4);
}