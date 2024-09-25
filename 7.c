/*Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/
#include <stdio.h>

int main() {
double S;
double O;
double M;
double Mp;
 printf("donnez le nombre 1 :");
 scanf("%lf",&S);
 printf("donnez le nombre 2 :");
 scanf("%lf",&O);
 printf("donnez le nombre 3 :");
 scanf("%lf",&M);
 
 Mp=((2 * S)+(3 * O)+(5 * M))/10 ;
printf("le myenne ponderee est : %lf",Mp);

    return 0;
}