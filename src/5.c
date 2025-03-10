#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are old enough to vote.");
    } else {
        printf("Sorry, you are not old enough to vote yet.");
    }

    return 0;
}
