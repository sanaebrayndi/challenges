/*Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s).
Formule :
m/s = km/h * 0.27778*/
#include <stdio.h>

int main() {
    double KH;
    double MS;

    printf("donner la vitesse en kilometre :");

    scanf("%lf",&KH);

    MS = KH * 0.27778;
    printf("la vitesse en metre par second : %.2f",MS);

    return 0;
}