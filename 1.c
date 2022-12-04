// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

// Se nós listarmos todos os números naturais abaixo de  10 que são mútiplos de 3 ou 5, nós obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23.
// Encontre a soma de todos os múltiplos de 3 ou 5 abaixo de 1000.

#include <stdio.h>
#define FINAL 1000

int eMultiploDe3E5(int numero){
    if(numero % 3 == 0 || numero % 5 == 0)
        return 1;
    return 0;
}

int main(){
    int soma = 0;

    for(int i = 3; i < 1000; i++){
        if(eMultiploDe3E5(i))
            soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
