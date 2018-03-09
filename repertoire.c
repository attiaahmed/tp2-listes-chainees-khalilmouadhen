/*
 * repertoire.c
 *
 *  Created on: 9 mars 2018
 *      Author: Hmida HMIDA
 */
#include<stdio.h>
#include<stdlib.h>
#include "repertoire.h"
void afficheRepertoire(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++) {
		printf("\n%c", 'A' + i);
		afficheOnglet(lerepertoire[i]);
	}
}
void afficheOnglet(ongletptr longlet) {
	if (longlet == NULL) {
		printf("\n****VIDE****");
	} else {
		while (longlet != NULL) {
			afficheFiche(longlet->lafiche);
			longlet = longlet->suivante;
		}
	}
}
void afficheFiche(ficheptr lafiche) {
	if (lafiche == NULL) {
		printf("\nFiche vide!");
	} else {
		printf("\nNom: %s, Prénom: %s, Téléphone: %s", lafiche->nom,
				lafiche->prenom, lafiche->tel);
	}
}
void ajouterFiche(repertoire lerepertoire, ficheptr lafiche) {
}
void majuscule(ficheptr lafiche) {
}
void ajouterDansOnglet(ongletptr *longlet, ficheptr lafiche) {
}
int avant(ficheptr fiche1, ficheptr fiche2) {
	return 0;
}
void repertoireVide(repertoire lerepertoire) {
	int i;
	for (i = 0; i < 26; i++)
		lerepertoire[i] = NULL;
}
void menu(repertoire lerepertoire) {

	int choix;
	do {
		printf(
				"\n================================Gestion de Répertoire================================");
		printf(
				"\n=     1- Saisie du répertoire                                                       =");
		printf(
				"\n=     2- Affichage du répertoire                                                    =");
		printf(
				"\n=     3- Ajout d'une fiche                                                          =");
		printf(
				"\n=     4- Recherche de contact                                                       =");
		printf(
				"\n=     5- Quitter                                                                    =");
		printf(
				"\n=====================================================================================");
		printf("\n\t\tEntrer votre choix (1-5): ");
		scanf("%d", &choix);
		switch (choix) {
		case 1:
			choix1();
			break;
		case 2:
			choix2(lerepertoire);
			break;
		case 3:
			choix3();
			break;
		case 4:
			choix4();
			break;
		case 5:
			choix5();
			break;
		default:
			printf("\nVérifier que le choix est dans [1,5]!");
		}
	} while (choix != 5);
}
void freeRepertoire(repertoire lerepertoire) {
}
void choix1() {
	printf("\nChoix1");
}
void choix2(repertoire r) {
	afficheRepertoire(r);
}
void choix3() {
	printf("\nChoix3");
}
void choix4() {
	printf("\nChoix4");
}
void choix5() {
	printf("\nAu revoir");
}
