/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1
 * to 10 without any remainder. What is the smallest positive number that is
 * evenly divisible by all of the numbers from 1 to 20?
 */

/*
 * 2520 é o menor número que pode ser dividido por cada um dos números inteiros
 * de 1 a 10 sem deixar nenhuma sobra. Qual o menor número positivo divisível
 * por cada um dos inteiros de 1 a 20?
 */

#include <stdio.h>
#define VALOR_FINAL 20

int main() {

  int resultado = 0, numero, i;

  for (numero = 1; resultado == 0; numero++) {
    for (i = VALOR_FINAL; i >= 1; i--) {
      if (numero % i != 0)
        break;

      if (i == 1)
        resultado = numero;
    }
  }

  printf("%d\n", resultado);

  return 0;
}
