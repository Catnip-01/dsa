#include <stdio.h>

int fibonacci (int n);

int main(){
    int loops;
    printf ("enter number of items you want: ");
    scanf("%d", &loops);
    printf("%d \n", fibonacci(loops));
    return 0;
}

int fibonacci (int n){
    int a = 0; int b = 1;
    for (int i = 0; i < n; i++){
    printf("%d ", b);
    int c;
    c = a + b;
    a = b;
    b = c;
    }
    return b;
}
