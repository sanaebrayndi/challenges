/*Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
Formule :
Moyenne géométrique = (a * b * c)^(1/3)*/
#include <stdio.h>
#include <math.h>
int main(){
double a;
double b;
double c;
double Mg;

printf("donnez le nombre a :");
scanf("%lf",&a);
printf("donnez le nombre b :");
scanf("%lf",&b);
printf("donnez le nombre c :");
scanf("%lf",&c);

Mg = pow((a * b * c),1/3);
printf("voila le Mg : %lf",Mg);

return 0;
}