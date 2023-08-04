/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
 * that the 6th prime is 13. What is the 10 001st prime number?
 */

/*
 * Listando os seis primeiros números primos: 2, 3, 5, 7, 11 e 13, nós podemos
 * ver que o sexto primo é 13. Qual é o 10.001º número primo?
 */

#include <stdio.h>
#define POSICAO 10001

int main() {

  int primos[POSICAO], numero = 1, resultado = -1, i, ePrimo;
  primos[0] = '\0';

  do {
    numero++;

    ePrimo = 1;
    for (i = 0; primos[i] != '\0'; i++) {
      if (numero % primos[i] == 0) {
        ePrimo = 0;
        break;
      }
    }

    if (ePrimo) {
      primos[i] = numero;

      if (i == POSICAO - 1) {
        resultado = numero;
      } else {
        primos[++i] = '\0';
      }
    }

  } while (resultado == -1);

  printf("%d\n", resultado);

  return 0;
}
