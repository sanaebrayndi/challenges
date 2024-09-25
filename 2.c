/*Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.
Formule :
K = C + 273.15*/
#include <stdio.h>
int main(){
    double K,C;
    printf("veuillez entrer une temperature en celcieus");
    scanf("%.1f",&C);
    K = C + 273.15;
    printf("la temperature en kelvin est %.1f",K);


}