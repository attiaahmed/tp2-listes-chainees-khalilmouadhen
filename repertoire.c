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
    fiche fch;
    int test,i,j;
    do{
    test=0;
    i=0;
    printf("\nDonner votre Nom: ");
    scanf(" %s",&fch.nom[21]);
    while(test==0 && i!=25)
    {
        if (fch.nom[0]=='A'+i || fch.nom[0]=='a'+i)
            test=1;
        else
            i++;
    }
    }while (test!=1);
    do{
    test=0;
    i=0;
    printf("\nDonner votre Prénom: ");
    scanf(" %s",&fch.prenom[21] || fch.prenom[0]=='a'+i);
    while(test==0 && i!=25)
    {
        if (fch.prenom[0]=='A'+i)
            test=1;
        else
            i++;
    }
    }while (test!=1);

    do{
    test=0;
    i=0;
    printf("\nDonner votre tel: ");
    scanf("%s",&fch.tel[9]);
    for (j=0;j<9;j++)
    {
    while(test==0 && i!=25)
    {
        if (fch.tel[0]==i)
            test=1;
        else
            i++;
    }
    }
    if (fch.tel[9]!='\0')
        test=0;
    }while (test!=1);

    ajouterDansOnglet(fch.prenom[0],fch);

}
void majuscule(ficheptr lafiche) {
int i,x=0;
for (i=0;i<25;i++)
{
    if (lafiche.nom[0]=='A'+i)
    x=1;
}
if (x==0);
lafiche.nom[0]-=24;
else
    x=0;
for (i=0;i<25;i++)
{
    if (lafiche.prenom[0]=='A'+i)
    x=1;
}
if (x==0);
lafiche.prenom[0]-=24;
}
void ajouterDansOnglet(ongletptr longlet, ficheptr lafiche) {
int i,test=0;
onglet fich1;
while ('A'+i!=longlet)
{
    i++;
}

while (longlet[i].suivante!=NULL && test==0)
{
    if (longlet[i].lafiche.nom<lafiche.nom)
        longlet[i].lafiche=longlet[i].suivante;
    else
    {
    test=1;
    fich1.lafiche=lafiche;
    fich1.suivante=longlet[i].suivante;
    longlet[i].lafiche=&fich1;
    }

}

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
			choix3(ajouterFiche);
			break;
		case 4:
			choix4(afficheFiche);
			break;
		case 5:
			choix5(repertoireVide);
			break;
		default:
			printf("\nVérifier que le choix est dans [1,5]!");
		}
	} while (choix != 5);
}
void freeRepertoire(repertoire lerepertoire) {
int i;
for (i=0;i<26;i++)
    lerepertoire[i]=NULLL;
}
void choix1() {
	printf("\nChoix1");
}
void choix2(repertoire r) {
	afficheRepertoire(r);
}
void choix3(repertoire lerepertoire, ficheptr lafiche) {
	printf("\nChoix3");
    ajouterFiche(lerepertoire,lafiche);
}
void choix4() {
	printf("\nChoix4");
}
void choix5(r) {
	printf("\nAu revoir");
	freeRepertoire(r);
}



int main(void) {
	setbuf(stdin, NULL);
	setbuf(stdout, NULL);
	menu (NULL);
	return EXIT_SUCCESS;
}
