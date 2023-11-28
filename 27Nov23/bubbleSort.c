#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 1, 4};
    int length = 5;
    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5 - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
    for (int i = 0; i < 5; i++){
        printf ("%d ", arr[i]);
    }
}
