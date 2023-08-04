/*
* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
* Find the sum of all the primes below two million.
*/

/*
* A soma dos primos abaixo de 10 é 2 + 3 + 5 + 7 = 17.
* Encontre a soma de todos os primos abaixo de dois milhões.
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 2000000

int main(){
  unsigned int primos[LIMIT];
  long soma = 0;

  for(long i = 2; i < LIMIT; i++)
    primos[i] = 1;
  
  for(long i = 2; i < LIMIT; i++){
    if(!primos[i])
      continue;
    
    soma += i;

    for(long j = i; i * j < LIMIT; j++){
      primos[i * j] = 0;
    }
  }

  printf("%ld\n", soma);

  return 0;
}

