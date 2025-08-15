#include <stdio.h>

float nota1, nota2, nota3, nota4;
float media;

int main() {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);   
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media das notas e: %.2f\n", media);  

    if (media >= 7) {
        printf("Aprovado!\n");
    } else if (media >= 4) {
        printf("Recuperacao!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}
