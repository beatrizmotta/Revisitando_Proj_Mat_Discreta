#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "test.h"

int main() {
    srand(time(NULL));
    int a = rand() % 20;
    
    printar();
    printf("%d", a);
    return 0;
}