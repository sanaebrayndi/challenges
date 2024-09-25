//Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
#include <stdio.h>
int main(){
char nom[50];
char prenom[50];
char sexe[50];
char adresse[50];
int age;
printf("donnez votre nom:");
scanf("%s",&nom);


printf("donnez votre prenom:");
scanf("%s",&prenom);

printf("donnez votre sexe:");
scanf("%s",&sexe);

printf("donnez votre adresse:");
scanf("%s",&adresse);

printf("donnez votre age:");
scanf("%d",&age);


printf("votre nom est %s\n",nom);
printf("votre prenom est %s\n",prenom);
printf("votre sexe est %s\n",sexe);
printf("votre adresse est %s\n",adresse);
printf("votre age est %d\n",age);







}