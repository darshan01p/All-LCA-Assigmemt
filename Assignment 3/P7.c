#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {

        if (age >= 21) printf("Can drink.\n");

        else printf("Can vote, not drink.\n");

    }
    else printf("Not eligible.\n");
    return 0;
}
