/*
 ============================================================================
 Name        : Groupe Ti106
 Author      : Hmida HMIDA
 Version     :
 Copyright   : CC
 Description : Gestion de répertoire téléphonique
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "repertoire.h"
int main(void) {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	repertoire r1;
	repertoireVide(r1);
	ficheptr f1, f2, f3;
	f1 = malloc(sizeof(*f1));
	f2 = malloc(sizeof(*f1));
	f3 = malloc(sizeof(*f1));
	strcpy(f1->nom, "A");
	strcpy(f1->prenom, "A");
	strcpy(f1->tel, "1");
	strcpy(f2->nom, "B");
	strcpy(f2->prenom, "B");
	strcpy(f2->tel, "2");
	strcpy(f3->nom, "C");
	strcpy(f3->prenom, "C");
	strcpy(f3->tel, "3");
	ajouterFiche(r1, f1);
	ajouterFiche(r1, f2);
	ajouterFiche(r1, f3);
	menu(r1);
}
