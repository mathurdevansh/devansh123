#include <stdio.h>
#include<math.h>

int main(){
    int rows = 5; // Number of rows in the pattern
int coloumn=4;
    for (int i = 1; i <= rows;i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for printing stars
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }
return 0;
} 