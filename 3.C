/*Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
Formule :
Yards = Km * 1093.61*/
#include <stdio.h>

int main() {
    double km;
    double Y;
    printf("donnez un nomber : ");
    scanf("%lf",&km);
    Y=km*1093,62;
    printf("voila : %.lf",Y);

    return 0;
}