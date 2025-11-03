/*
Name:Brian Masakhwe 
Reg No:PA106/G/28765/25
*/
#include <stdio.h>

int main() {
int i,j;
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        
    }

    return 0;
}