#ifndef FCT_H_INCLUDED
#define FCT_H_INCLUDED
void Color(int couleurDuTexte,int couleurDeFond);

void menu();

void choix();

void plateau(int a,char T[24],char T2[24]);

void position(int J,int pos ,char T[24],char T1[24]);

int QUEL_JOUEUR(int J);

void afficher_joueur(int J);

int cond_deplacer(char y ,char z ,char T[24] ,char T1[24]);

void deplacer(char y, char z, char T[24], char T1[24]);

int QUEL_INDICE(char y,char T[24]);

int cond_pion(int J,char y,char T[24],char T1[24]);

int cond_capturer(char w);

void capturer(char w,char T[24],char T1[24]);

void moulin(char T[24]);

void regles();

int nbrPionJ2(char T1[24]);

int nbrPionJ1(char T1[24]);

int cond_depla_libre(char z,char T1[24],char T[24]);

void rejouer(char T1[24], char T[24]);

char emplacement_machineF(char T[24],char T1[24]);

char pion_a_depl_MF(char T[24],char T1[24]);

char destination_MF(char y,char T[24], char T1[24]);

void MACHINE_FACILE(int a,char T[24],char T1[24]);

void capturer_MF(char T[24],char T1[24]);

void PionJoueurs(char T1[24],char T[24]);

int Jeu_Blocker1(char T[24],char T1[24]);

int Jeu_Blocker2(char T[24],char T1[24]);

int cond_blockage(char y,char T[24] ,char T1[24]);

int nbr_pion_alignerM(char Tp[3],char T[24],char T1[24]);

int nbr_pion_alignerJ(char Tp[3],char T[24],char T1[24]);

char emplacement_vide(char Tp[3],char T[24],char T1[24]);

void MACHINE_MOYENNE(int a,char T[24],char T1[24]);

char attaquer(char Ta[24],char Tb[24]);

void capturer_MM(char Ta[24],char Tb[24]);

void joueur_joueur(int a,int q,char T[24],char T1[24]);

#endif // FCT_H_INCLUDED
