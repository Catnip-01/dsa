#include <stdio.h>

void main(){
    int n;
    printf ("enter the size of matrix: ");
    scanf ("%d", &n);
    int m1[n][n];
    int m2[n][n];
    printf("enter the numbers : \n");

    for (int i = 0; i < n; i++){
        printf ("enter %dth row: \n", i + 1);
        
        for (int j = 0; j < n; j++){
            int temp;
            
            scanf("%d", &temp);
            m1[i][j] = temp;
        }
        
    }
    for (int i = 0; i < n; i++){
        printf ("enter %dth row: \n", i + 1);
        for (int j = 0; j < n; j++){
            int temp;
            // printf("enter the number : ");
            scanf("%d", &temp);
            m2[i][j] = temp;
        }
        
    }

    printf("added matrix is : \n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf ("%d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
        
    }
}
