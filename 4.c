// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

// Um número palíndromo se lê da mesma forma em qualquer direção. O maior palíndromo produzido do produto de dois números de 2 algarismos é 9009 = 91 × 99.
// Encontre o maior palíndromo produzido do produto de dois números de 3 algarismos.


#include <stdio.h>
#define MAIOR_VALOR 999

int inverteInteiro(int numero){
    int resultado = 0;

    for(numero; numero > 0; numero /= 10){
        int numeroAuxiliar = numero / 10;
        int unidade = numero - (numeroAuxiliar * 10);
        resultado = resultado * 10 + unidade;
    }

    return resultado;
}

int ePalidromo(int numero){
    return numero == inverteInteiro(numero);
}

int main(){
    int numero1, numero2, resultado = 1;

    for(numero1 = MAIOR_VALOR; numero1 >= 1; numero1--){
        for(numero2 = MAIOR_VALOR; numero2 >= numero1; numero2--){
            int numeroAnalisado = numero1 * numero2;
            
            if(numeroAnalisado < resultado)
                break;

            if(ePalidromo(numeroAnalisado)){
                resultado = numeroAnalisado;
                break;
            }
        }
    }

    printf("%d\n", resultado);

    return 0;
}
