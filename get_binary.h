#include <stdio.h>

unsigned long long get_binary_numbers(unsigned long long number, int binary[]) {
    unsigned long long i;
    for (i = 0; number > 0; i++) {
        binary[i] = number % 2;
        number = number / 2;
        // printf("%llu ", binary[i]);
        // printf("%llu\n", number);
    }
}

void invert(int array[], int array_invertida[], int tamanho) {
    int i;
    int j = 0; 
    for (i = tamanho-1; i >= 0; i--) {
        array_invertida[j] = array[i];
        j++;
    }
}

void transfer(int array[], int array_invertida[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        array_invertida[i] = array[i];
    }
}

unsigned long long get_size(int array[], unsigned long long tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (array[i] > 1) {
            break;
        }
    }
    // printf("Tamanho: %llu\n", i);
    return i;
}


