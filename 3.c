// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>
#define VALOR 600851475143

int main(){
    long int valorAtual = VALOR, ultimoPrimo = 2, i, j;

    for(i=ultimoPrimo; i <= valorAtual; i++){

        //Verifica se i é primo
        int ePrimo = 1;
        for(j = i; j >= 2; j--){
            if(i%j == 0 && j!=i){
                ePrimo = 0;
                break;
            }
        }

        if(ePrimo && valorAtual % i == 0){
            ultimoPrimo = i;
            valorAtual /= i;
        }
    }

    printf("%d\n", ultimoPrimo);

    return 0;
}
