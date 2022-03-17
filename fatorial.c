#include <stdio.h>
#include <math.h>

int potencias_2(int counter, int p, int a) {
    //a^1
    //a^2
    //a^4
    if (counter == 1) {
        return (int) pow(a, 1) % p;
    } else {
        counter *= 2;
        return ((int) pow(a, counter/2) % p * (int) pow(a, counter/2) % p);
    }
}
/*
   x = [1, 16]
Calcularemos sempre a^1.
Calculamos todas as potências de a^1 até a^b (último número que encontramos). 

Tentativa 1: função recursiva


Condição de parada:
Se o contador chegou ao último número, paramos e retornamos o valor total.
Corpo:
Caso o contador ainda não esteja no último número, precisamos calcular:

*/

int main() {
    int x[4] = {1, 2, 3, 4, 5};
    printf("%d", sizeof(x));
    return 0;
}