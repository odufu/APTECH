#include<stdio.h>
#include<string.h>

union MyIdentity{
 int idNumber;
 char name[20];
 long long int phone;
};



int main(){
    union MyIdentity joel;
    joel.idNumber=343;
    printf("My Id Number is: %d\n", joel.idNumber);
    printf("My Phone Number is: %d\n", joel.phone);
    printf("My Name is: %s\n\n", joel.name);
    
    joel.phone=8085040146;
    printf("My Id Number is: %d\n", joel.idNumber);
    printf("My Phone Number is: %d\n", joel.phone);
    printf("My Name is: %s\n\n", joel.name);


    strcpy(joel.name, "Joel Odufu");
    printf("My Id Number is: %d\n", joel.idNumber);
    printf("My Phone Number is: %d\n", joel.phone);
    printf("My Name is: %s\n", joel.name);

    
    return 0;
}
