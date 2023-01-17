#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include <time.h>
/**
 * Exercice : Affichage d'un menu à l'utilisateur
 * Proposer à l'utilisateur un menu à 4 entrées 1, 2, 3 et 4 pour sortir du programme.
 * En fonction de l'option choisie, afficher un message différent.
*/

/**
 * Dans l'option 2, on souhaite ajouter un décompte de temps pour faire patienter l'utilisateur jusqu'à son déjeuner.
 * Comment réaliser un décompte de 5 à 0 ?
 * Pour réaliser des répétitions qui sont bornées, on utilise une boucle FOR
 * for(index initialisé ; condition à atteindre pour mettre fin à la répétition ; pas de la boucle)
*/

/**int main(){
    bool fin=false;
    printf("Bonjour, veuillez entrer une option : \n");
    while(fin!=true){
        int option; //variable pour récupérer l'option choisie par l'utilisateur au clavier
        printf("1.   J'ai soif \n");
        printf("2.   J'ai faim \n");
        printf("3.   Je veux un dessert \n");
        printf("4.   J'ai assez \n");
        //Récupérer le choix au clavier
        scanf("%d", &option);
        //Tester l'option et afficher le texte qui convient
        switch(option){
            case 1 :
                printf("Merci d'avoir choisi l'option boisson");
                break;
            case 2 : 
                for(int index = 5; index >= 0; index--){
                    printf("\n%d", index);
                    }
                printf("Merci d'avoir choisi l'option déjeuner");
                break;
            case 3 :
                printf("Merci d'avoir choisi l'option dessert");
                break;
            case 4 :
                printf("Merci, aurevoir.");
                return 0;
                break;
            default :
                printf("Cette option n'existe pas");
                break;
            }
        printf("\nVoulez-vous autre chose?\n");
        if(option==4){
            fin=true;
        }
    }
    return 0;
    }
*/

/**
 * reprendre l'exercice du nombre magique et intégrer une boucle afin de permettre à l'utilisateur de recommencer 
 * tant qu'il n'a pas trouvé le nombre. Intégrer un compteur de tentatives pour indiquer à la fin, le nombre de tentatives 
 * utilisées pour atteindre le nombre magique.
*/
int main(){
    srand(time(NULL));
    int NbAleatoire = rand()%11;
    int NbChoisis;
    int NbTentative=0;
    bool fin=false;
    printf("%d\n", NbAleatoire);
    printf("Essaie de deviner le nombre entre 0 et 10 au quel je pense, pour ça saisie un nombre :\n");
    scanf("%d", &NbChoisis);
    do {
    NbTentative++;
    if(NbAleatoire==NbChoisis){
        fin=true;
    }else{
    printf("Non ce n'est pas ça ré-essaie : \n");
    scanf("%d", &NbChoisis);
    }
    }while(fin==false);
    printf("Bravo, tu as reussi à le trouver en %d tentatives", NbTentative);
    return 0;
}