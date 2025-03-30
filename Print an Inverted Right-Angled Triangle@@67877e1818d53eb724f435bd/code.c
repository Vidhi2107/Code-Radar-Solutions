#include<stdio.h>
void printTriangle(int n) {
    for (int i = n; i > 0; i--) { // Loop for rows
        for (int j = 0; j < i; j++) { // Loop for stars in each row
            printf("*\t");
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    printTriangle(n);
    
    return 0;
}