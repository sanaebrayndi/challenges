/*Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/
#include <stdio.h>
 
int main() {
    
    // declaration des varaibles
    double C;
    printf("donnez l'etat de l'eau : ");
    scanf("%lf",&C);
    if(C < 0){
        printf("voila rah solide");
    }else if(C>=0 && C<100){
        printf("voila rah Liquide");
    }else{
       printf("voila rah Gaz"); 
    }
    

    return 0;
}



