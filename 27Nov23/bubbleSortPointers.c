#include <stdio.h>

void main(){
    int n;
    printf ("enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    // for (int i = 0; i < n; i++){
    // int temp;
    // printf ("enter array element: ");
    // scanf ("%d", &temp);
    //     *(*arr + i) = temp;
    // }
    for (int * i = arr; i < (arr + n); i++){
        int temp;
        printf ("enter array element: ");
        scanf ("%d", &temp);
        *(arr + n) = temp;

    }
    for (int i = *arr; i < n; i++){
        printf ("%d ", i);
    }
    
}
