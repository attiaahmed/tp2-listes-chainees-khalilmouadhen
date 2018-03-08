/*
 ============================================================================
 Name        : TP2-ListesChaînées.c
 Author      : Groupe Ti106
 Version     :
 Copyright   : CC
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "repertoire.h"
int main(void) {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	menu (NULL);
	return EXIT_SUCCESS;
}

void afficheRepertoire(repertoire lerepertoire) {
}
void afficheOnglet(ongletptr longlet) {
}
void afficheFiche(ficheptr lafiche) {
}
void ajouterFiche(repertoire lerepertoire, ficheptr lafiche) {
}
void majuscule(ficheptr lafiche) {
}
void ajouterDansOnglet(ongletptr longlet, ficheptr lafiche) {
}
int avant(ficheptr fiche1, ficheptr fiche2) {
	return 0;
}
void repertoireVide(repertoire lerepertoire) {
}
void choix1() {
	printf("\nChoix1");
}
void choix2() {
	printf("\nChoix2");
}
void choix3() {
	printf("\nChoix3");
}
void menu(repertoire lerepertoire) {
	int choix;
	do {
		printf(
				"=============================Gestion de répertoire=============================\n");
		printf("\t\t1- choix1\n");
		printf("\t\t2- choix2\n");
		printf("\t\t3- choix3\n");
		printf("\t\t4- Quitter\n");
		printf(
				"===============================================================================\n");
		printf("\tEntrer votre choix(1-4):");
		scanf("%d", &choix);
		switch (choix) {
		case 1:
			choix1();
			break;
		case 2:
			choix2();
			break;
		case 3:
			choix3();
			break;
		case 4:
			printf("Au revoir");
			break;
		default:
			printf("Choix doit être dans [1,4]!");
			break;
		}
	} while (choix != 4);

}
void freeRepertoire(repertoire lerepertoire) {
}
