#include <stdio.h>
int a,b;
int main() {
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("A soma de %d e %d e %d.\n", a, b, a + b);
    printf("A subtracao de %d e %d e %d.\n", a, b, a - b);
    printf("A multiplicacao de %d e %d e %d.\n", a, b, a * b);
    printf("A divisao de %d e %d e %d.\n", a, b, a / b);
    return 0;
}