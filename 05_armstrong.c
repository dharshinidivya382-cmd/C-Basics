#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number\n", original);
    else
        printf("%d is Not an Armstrong Number\n", original);

    return 0;
}
