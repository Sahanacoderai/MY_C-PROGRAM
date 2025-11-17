#include <stdio.h>

int main() {
    int num;
    float value;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float value: ");
    scanf("%f", &value);

    printf("You entered integer: %d\n", num);
    printf("You entered float : %.2f\n", value);

    return 0;
}
