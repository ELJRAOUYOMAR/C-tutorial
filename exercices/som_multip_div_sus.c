#include <stdio.h>

int main() {
    float nbre1, nbre2, *pointer1, *pointer2;
    pointer1 = &nbre1;
    pointer2 = &nbre2;

    printf("Tap the nbre1 : ");
    scanf("%f", pointer1);
    printf("Tap the nbre2 : ");
    scanf("%f", pointer2);

    printf("The sum of %.2f and %.2f is %.2f\n", *pointer1, *pointer2, *pointer1 + *pointer2);
    printf("The subtraction of %.2f and %.2f is %.2f\n", *pointer1, *pointer2, *pointer1 - *pointer2);
    printf("The multiplication of %.2f and %.2f is %.2f\n", *pointer1, *pointer2, *pointer1 * *pointer2);
    printf("The division of %.2f and %.2f is %.2f\n", *pointer1, *pointer2, *pointer1 / *pointer2);

    return 0;
}
