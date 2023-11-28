#include <stdio.h>

int main(){
    double n;
    printf ("enter the number whose factorial is to be calculated: ");
    scanf ("%lf", &n);
    double number = n;
    double fact = 1;
    while (n){
        fact *= n;
        n--;
    }
    printf ("factorial of %lf is : %.lf\n", number, fact);
    return 0;
}
