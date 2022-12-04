// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>
#define FINAL 10

int isMultipleOf3And5(int number){
    if(number % 3 == 0 || number % 5 == 0)
        return 1;
    return 0;
}

int main(){
    int sum = 0;

    for(int i = 3; i < 1000; i++){
        if(isMultipleOf3And5(i))
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
