#include <stdio.h>

int main() {
    int experience, age;
    int salary;


    printf("Enter 1 if the person is experienced, otherwise enter 0: ");
    scanf("%d", &experience);
    printf("Enter the age of the person: ");
    scanf("%d", &age);


    if (experience == 1) {
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age < 40) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 100000;
        }
    } else {
        salary = 100000;
    }

    printf("The salary of the person is: N%d\n", salary);

    return 0;
}