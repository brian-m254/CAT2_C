// programme to write a 2D array and use a nested for loop to print the elements of the array
/*
NAme:Brian Masakhwe 
Reg No:PA106/G/28765
*/

#include <stdio.h>

int main() {
    int scores[2][2] = { {65, 92}, {84, 72} };
    
    int i,j;

    printf("the elements  are:\n");

    for (i= 0; i< 2; i++) {
        for (j= 0; j< 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}