/* 
* A Pythagorean triplet is a set of three natural numbers, a < b < c , for which, a² + b² = c².
* For example, 3² + 4² = 9 + 16 = 25 = 5².
* There exists exactly one Pythagorean triplet for which a + b + c = 1000 . Find the product abc.
*/

/* 
* Um terno pitagórico é um conjunto de três números naturais, a < b < c, ao qual, a² + b² = c².
* Por exemplo, 3² + 4² = 9 + 16 = 25 = 5².
* Existe exatamente um terno pitagórico em que a + b + c = 1000 . Encontre o produto abc.
*/

#include<stdio.h>

int testar(int a, int b, int c){
  if(a == b){
    c += a;
    a = 0;
    return testar(a, b + 1, c - 1);
  }

  if((a * a) + (b * b) == (c * c))
    return a * b * c;
  
  return testar(a + 1, b, c - 1);
}

int main() {
  int a = 0, b = 0, c = 1000;

  printf("%d\n", testar(a, b, c));

  return 0;
}
