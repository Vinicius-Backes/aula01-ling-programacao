#include <stdio.h>
char nome[50], curso [50];
int idade;
int main() {
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    
    printf("Digite o seu curso: ");
    scanf("%s", curso);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Boas vindas %s ao curso de %s!\n, voce nasceu no ano %d.\n", nome, curso, 2025 - idade);  
    return 0;
}
;