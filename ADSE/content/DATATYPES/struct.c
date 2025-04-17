#include<stdio.h>
struct Person
{
    char name [20];
    int age;
    float height;
};

int main()
{
    struct Person person1={"Gabriel Matinely", 23, 1.75};
    struct Person person2={"Declan Rice", 25, 1.75};
    struct Person person3={"Bukayo Saka", 23, 1.75};

    printf("My name is: %s, I am %d years old, and i am %.2f tall\n", person1.name, person1.age, person1.height);
    return 0;
}

