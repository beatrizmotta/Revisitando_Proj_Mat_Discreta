#include <stdio.h>
#include <math.h>

void clean_zeros(int array[], int array_nova[], int tamanho, int counter1, int counter2) {

    if (counter2 == tamanho) {
        return;
    } else {
        if (array[counter1] != 0) {
            array_nova[counter2] = array[counter1];
            counter2++;
        }
        counter1++;
        clean_zeros(array, array_nova, tamanho, counter1, counter2);
    }

}

int main() {
    // Define o valor limite
    int test_size = 524;
    int square = ceil(sqrt(test_size-1));
    int numbers[test_size];

    // Preenche a array com 1s  
    int i, j;
    for (i = 0; i < test_size; i++) {
        numbers[i] = 1;
    }

    // Determina quais dos números são primos
    for (j = 2; j < square; j++) {
        for (i = 0; i < test_size; i++) {
            if (i % j == 0 && i != j) {
                numbers[i] = 0;
            }
        }
    }

    // Substitui os 1s pelos números primos  
    for (i = 0; i < test_size; i++) {
        if (numbers[i] == 1) {
            numbers[i] = i;
        }
    }
    // A parte da contagem dos 1s, descobre quantos números primos tem e cria
    // um array 

    int qt_of_primes = 0;
    for (i = 0; i < test_size; i++) {
        if (numbers[i] != 0) {
            qt_of_primes++;
        }
    }
    int primes[qt_of_primes];

    
    clean_zeros(numbers, primes, qt_of_primes, 0, 0);
    printf("O tanto de primos: %d\n", qt_of_primes);
    

    // Preenche quais são os primos 

    for (i = 0; i < qt_of_primes; i++) {
        printf("%d ", primes[i]);
    }





    return 0;
}
