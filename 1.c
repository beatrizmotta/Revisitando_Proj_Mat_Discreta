#include <stdio.h>
int primo(unsigned long long);

int main() {
    unsigned long long a;
    int result;
    while (1)
    {
        // Código para ver se o número é primo
        scanf("%llu", &a);
        result = primo(a);
        result == 1 ? printf("\n%llu eh primo", a) : printf("\n%llu eh composto", a);
    }
    
}

int primo(unsigned long long number) {
    int i;
    int isPrimo;
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrimo = 0;
            break;
        } else {
            isPrimo = 1; 
        }
    }
    
    return isPrimo;
}