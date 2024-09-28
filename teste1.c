#include <stdio.h>

int main() {
    float base,hauteur,air,perimetre;
    printf("entre la base: ");
    scanf("%f",&base);
    printf("entre la hautaur: ");
    scanf("%f",&hauteur);
    
    air = (base * hauteur) / 2;
    perimetre = 3 * base;
    printf("formule pour l'air:%.2f \n",air);
    printf("formule pour perimetre: %.2f",perimetre);
    
}