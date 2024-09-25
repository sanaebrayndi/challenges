/*Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
Formule :
Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/
#include <stdio.h>
#include <math.h>
int main (){

double x1;
double y1;
double z1;
double x2;
double y2;
double z2;
double D;
printf("donnez le nombre x1 :");
scanf("%lf",&x1);
printf("donnez le nombre y1 :");
scanf("%lf",&y1);
printf("donnez le nombre z1 :");
scanf("%lf",&z1);
printf("donnez le nombre x2 :");
scanf("%lf",&x2);
printf("donnez le nombre y2 :");
scanf("%lf",&y2);
printf("donnez le nombre z2 :");
scanf("%lf",&z2);
D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
printf("la distance est : %lf",D);

return 0;





}