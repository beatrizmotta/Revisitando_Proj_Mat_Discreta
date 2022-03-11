#include <stdio.h>
#include <math.h>

void transforma_em_um(unsigned long *num) {
    *num = 1;
}
void transforma_em_zero(unsigned long *num) {
    *num = 0;
}

void preencher_uns(unsigned long tamanho, unsigned long array[]) {
    unsigned long i;
    for (i = 0; i < tamanho; i++) {
        transforma_em_um(&array[i]);
    }
}

void identificar_primos(unsigned long stop_point, unsigned long tamanho, unsigned long array[]) {
    unsigned long i;
    unsigned long j;

    for (j = 2; j <= stop_point; j++) {
        for (i = 0; i < tamanho; i++) {
            if (array[i] == 0) {
                break;
            }

            if (i % j == 0 && i != j) {
                transforma_em_zero(&array[i]);
            }

        }
    }

}

int main() {
    unsigned long num;
    scanf("%lu", &num);

    num++;

    unsigned long numbers[num];
    unsigned long stop_point = ceil(sqrt(num));

    unsigned long i;
    unsigned long j;

    preencher_uns(num, numbers);
    identificar_primos(stop_point, num, numbers);
    
    
    
    // -------- TESTE ---------  
    // for (i = 0; i < num; i++) {
    //     printf("%lu ", i);
    // }

    // printf("\n");

    // for (i = 0; i < num; i++) {
    //     printf("%lu ", numbers[i]);
    // }


    /*
    
    Nós precisamos fazer o loop parando no stoppoint,
    mas ao mesmo tempo, tendo acesso a todos os números
    no nosso alcance. 
    
    Isso foi feito. 

    Agora vamos ver como 
    
    */

    return 0;
}

