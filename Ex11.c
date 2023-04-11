#include <stdio.h>

int main() {
    int popA = 90000, popB = 50000;
    float crescA = 0.009, crescB = 0.015;
    int anos = 0;
    
    while (popA >= popB) {
        popA += popA * crescA;
        popB += popB * crescB;
        anos++;
    }
    
    printf("A cidade B terá mais habitantes que a cidade A em %d anos.\n", anos);
    
    return 0;
}
