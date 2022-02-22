#include <stdlib.h>
#include "nim_ihm.h"
#include "m_distributions.h"

int main(int argc, char *argv[])
{
	
	//Initialisation du générateur de nombres aléatoires 
	//(pour utiliser les foinctions de m_distributions.h
	md_srand_interne();

	//On demande à initialiser l'écran de jeu avec 0 lignes et 0 colonnes
	//Si une erreur se produit, le programme est interrompu.
	if (!ihm_init_ecran(0, 0)) {
		system("pause");
		return EXIT_FAILURE;
	}
	
	//L'initialisation a fonctionné (sinon on aurait quitté le programme)
	//On affiche donc un message. Notez l'utilisation de ihm_printf. Il ne faut
	//pas utiliser printf dans ce projet (ni scanf). 
	ihm_printf("Votre coquille du projet fonctionne convenablement. \n");
	
	//Équivalent à system("pause"), mais dans le contexte de notre interface usager.
	ihm_pause();


	return EXIT_SUCCESS;
}


/*
//MAIN DE TESTS POUR VOUS FAMILIARISER AVEC LES DIVERSES FONCTIONS DU MODULE nim_ihm
//Pour l'utiliser, vous devez commenter le main ci-dessus. Une fois que vous avez 
//terminé avec ce main et avez compris comment utiliser les fonctions de nim_ihm, vous 
//pouvez supprimer ce main et décommenter celui ci-dessus. 
int main(void)
{
	int nb_lignes, //Nombre de lignes du plateau
		nb_colonnes, //Nombre de colonnes du plateau
		choix_colonne; //Colonne choisie par l’usager

	//Itinitalise l'écran du jeu. Dimensions du plateau encore inconnues (0,0).
	if (!ihm_init_ecran(0, 0)) {
		system("pause");
		return EXIT_FAILURE;
	}

	ihm_printf("Combien de colonnes ? ");
	ihm_scanf("%d", &nb_colonnes);
	ihm_printf("Combien de lignes ? ");
	ihm_scanf("%d", &nb_lignes);

	ihm_printf("Je redimentionne a %d lignes et %d cols.\n",
		nb_lignes, nb_colonnes);
	ihm_printf("Pressez une touche.\n\n");
	ihm_pause();
	ihm_changer_taille_plateau(nb_lignes, nb_colonnes);

	ihm_printf("Pressez une touche pour que j'efface l'ecran.\n\n");
	ihm_pause();
	ihm_effacer_ecran();

	ihm_printf("Ecran efface. Maintenant choissez une colonne. \n\n");
	choix_colonne = ihm_choisir_colonne();

	ihm_printf("Vous avez choisi %d, j'y ajoute 2 pieces.\n", choix_colonne);
	ihm_ajouter_piece(0, choix_colonne);
	ihm_ajouter_piece(1, choix_colonne);

	ihm_pause();
	return EXIT_SUCCESS;
}
*/