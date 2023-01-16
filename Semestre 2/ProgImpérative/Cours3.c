#include<stdio.h>
#include <stdbool.h>
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

int main(){
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