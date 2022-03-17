#define BIG unsigned long long
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "get_binary.h"


int ler_uns(int array[], int tamanho) {
    int i;
    int ones = 0; 
    for (i = 0; i < tamanho; i++) {
        if (array[i] == 1) {
            ones++;
        }
    }
    return ones;
}

/*

    Função recursiva para formar a^117 a partir dos seus antecessores. 



*/

void elevando(int num[], BIG restos[], int tamanho, int c1, int c2) {
    if (c2 == tamanho) {
        return;
    } else {
        if (num[c1] == 1) {
            restos[c2] = (int) pow(2, c1);
            c2++;
        }
        c1++;
        elevando(num, restos, tamanho, c1, c2);
    }
}

int achar_potencias(int counter, int iteracoes, int valor_limite) {
    if (counter == valor_limite) {
        return iteracoes+1;
    } else {
        iteracoes++;
        counter *= 2;
        achar_potencias(counter, iteracoes, valor_limite);
    }

}









int main() {

    BIG numero;
    int k;
    printf("P: ");
    scanf("%llu", &numero);
    printf("k: ");
    scanf("%d", &k);


    int vetor_de_binarios[1000];

    get_binary_numbers(numero, vetor_de_binarios);
    BIG size_numero = get_size(vetor_de_binarios, numero);

    int numero_em_binario[size_numero];
    transfer(vetor_de_binarios, numero_em_binario, size_numero);

    int i;
    
    // for (i = 0; i < size_numero; i++) {
    //     printf("%d", numero_em_binario[i]);
    // }
    // printf("\n");

    int qt_one = ler_uns(numero_em_binario, size_numero);
    BIG potencias_de_dois[qt_one];

    elevando(numero_em_binario, potencias_de_dois, qt_one, 0, 0);

    int pot = achar_potencias(1, 0, potencias_de_dois[qt_one-1]);

    BIG potencias_extendidas[pot];
    BIG produto = 1;

    int a;
    BIG result_a;

    int isPrimo = 1;


    for (i = 0; i < k; i++) {
        srand(time(NULL));
        a = rand() % 20;
        result_a = a % numero;
        printf("a: %d\n", a);
    

        potencias_extendidas[0] = a % numero;
        
        for (i = 1; i < pot; i++) {
            potencias_extendidas[i] = (potencias_extendidas[i-1] * potencias_extendidas[i-1]) % numero;
        }

        for (i = 0; i < pot; i++) {
            printf("%llu ", potencias_extendidas[i]);
            produto *= potencias_extendidas[i];
        }

        printf("produto sem mod: %llu\n", produto);
        produto = produto %  numero;

        printf("%llu\n", result_a);
        printf("%llu\n", produto);

        if (result_a != produto) {
            isPrimo = 0;
            break;
        }
    }



    // isPrimo ? printf("%llu eh primo", numero) : printf("%llu eh composto", numero);






















    return 0;
}