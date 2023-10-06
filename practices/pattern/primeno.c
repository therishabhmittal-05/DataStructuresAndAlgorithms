#include <stdio.h>

int isPrime(int n, int i);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("%d is not a prime number.", n);
    }
    else if (isPrime(n, n/2) == 1) {
        printf("%d is a prime number.", n);
    }
    else {
        printf("%d is not a prime number.", n);
    }

    return 0;
}

int isPrime(int n, int i) {
    if (i == 1) {
        return 1;
    }
    else {
        if (n % i == 0) {
            return 0;
        }
        else {
            return isPrime(n, i-1);
        }
    }
}
