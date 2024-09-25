/*Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
*/
#include <stdio.h>

int main() {
    double a;
double b;
printf("a : ");
scanf("%lf",&a);

printf("b : ");
scanf("%lf",&b);
printf("a + b = %lf\n", a + b );
printf("a - b = %lf\n", a - b);
printf("a * b = %lf\n", a * b);

if(b!=0){
printf("a / b = %lf\n", a / b);
}
else{
 printf("impossible");
}

    return 0;
}