#include <stdio.h>
int temp_c;
float distancia_m;
int peso_kg;
int main() {
    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temp_c);
    printf("Digite a distancia em metros: ");
    scanf("%f", &distancia_m);
    printf("Digite o peso em quilogramas: ");
    scanf("%d", &peso_kg);
    printf("A temperatura em Fahrenheit e %.2d.\n", (temp_c * 9/5) + 32);
    printf("A distancia em quilometros e %.2f.\n", distancia_m / 1000);
    printf("O peso em libras e %.2f.\n", peso_kg * 2.20462);
    return 0;
}