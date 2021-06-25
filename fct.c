#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "fct.h"
int joueur=0,J1=0,J2=0;
int T2[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
char Tj[9]="zzzzzzzzz";
char Tm[9]="zzzzzzzzz";

// la fonction qui permet le coloriage
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


void menu()// la fonction qui permet d'afficher le menu
{
    system("cls");
    char titre[]="\t\t\t\t\t\t ___________________________________________________________________\n\t\t\t\t\t\t|      _                    __  __                   _   _          |\n\t\t\t\t\t\t|     | |   ___    _   _   |  \\/  |   ___    _   _  | | (_)  _ __   |\n\t\t\t\t\t\t|  _  | |  / _ \\  | | | |  | |\\/| |  / _ \\  | | | | | | | | | '_ \\  |\n\t\t\t\t\t\t| | |_| | |  __/  | |_| |  | |  | | | (_) | | |_| | | | | | | | | | |\n\t\t\t\t\t\t|  \\___/   \\___|   \\__,_|  |_|  |_|  \\___/   \\__,_| |_| |_| |_| |_| |\n\t\t\t\t\t\t-___________________________________________________________________-";;
    Color(14,0);
    printf("%s\t\t\t\n\n\n",titre);
    Color(9,0);
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ## 1.Joueur VS Joueur    ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ## 2.Joueur VS Machine   ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ##  3.Regles             ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ##  4.Exit               ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n\n\n");
    Color(15,0);
}

void choix()//la fonction qui nous permet de choisir un choix pour jouer
{
     char x,y,z,w;
     int a,n,pos,i,pos1,b,q;
     char T[24]="abcdefghijklmnopqrstuvwx";
     char T1[24]="abcdefghijklmnopqrstuvwx";
     F:
     srand(time(NULL));
     q=rand()%2;
     joueur=q;
     J1=0;
     J2=0;
     rejouer(T1,T);
     menu();
     printf("veuillez entrer votre choix:");
     scanf("%d",&a);
     if(a==1) //-------------------------------------------------------JOUEUR VS JOUEUR----------------------------------
    {
            joueur_joueur(a,q,T,T1);
            goto F;
    }
    if (a==2)//--------------------------------------------------------JOUEUR VS MACHINE---------------------------------
    {
    system("cls");//nous permet d'fficher une autre interface
    Color(12,0);
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t     _           __     __     ____           __  __   \n\t\t\t\t\t\t\t  U |\"| u        \\ \\   /\"/u   / __\"| u      U|\' \\/ \'|u \n\t\t\t\t\t\t\t _ \\| |/          \\ \\ / //   <\\___ \\/       \\| |\\/| |/ \n\t\t\t\t\t\t\t| |_| |_,-.       /\\ V /_,-.  u___) |        | |  | |  \n\t\t\t\t\t\t\t \\___/-(_/       U  \\_/-(_/   |____/>>       |_|  |_|    \n\t\t\t\t\t\t\t  _//              //          )(  (__)     <<,-,,-.   \n\t\t\t\t\t\t\t (__)             (__)        (__)           (./  \\.)  \n");
    Color(6,0);
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");               //c'est le menu de joueur VS machine pour choisir un niveau de jeu
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ##   1.FACILE            ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ##   2.MOYENNE           ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t _______________________ \n");
    printf("\t\t\t\t\t\t\t\t\t#                       #\n");
    printf("\t\t\t\t\t\t\t\t       ##  3.DIFFICILE          ##\n");
    printf("\t\t\t\t\t\t\t\t\t#_______________________#\n");
    printf("\n\n");
    Color(15,0);
    printf("entrer votre choix: ");
    scanf("%d",&b);
    if(b==1)//-----------------------------NIVEAU FACILE-------------------
    {
       MACHINE_FACILE(a,T,T1);
       goto F;
    }


    if(b==2)//-----------------------------NIVEAU MOYEN-----------------------------
    {
        MACHINE_MOYENNE(a,T,T1);
        goto F;
    }

    if(b==3)//---------------------------NIVEAU DIFFICILE-----------------------------
    {
        //difficile
    }
    }


    if (a==3)//----------------------------LES Regles--------------------------------------
    {
        system("cls");
        regles();
        printf("\n\ntapez ~e~ si vous voulez revenir au menu :) ");
        getch();
        goto F;

    }
    if (a==4)//---------------------------FINIR LE JEU-------------------------------------
    {
         system("cls");
         Color(6,0);
         printf("\n\n");
         printf("\t\t\t\t\t\t\t\t\t _________________________ \n");
         printf("\t\t\t\t\t\t\t\t\t#                         #\n");
         printf("\t\t\t\t\t\t\t\t       ## tapez un caractere qlq  ##\n");
         printf("\t\t\t\t\t\t\t\t\t#_________________________#\n");
         printf("\n\n");
         exit(EXIT_SUCCESS);
    }

}


void plateau(int a,char T[24],char T1[24])//la fonction qui nous permet d'afficher la grille
{

char str[]="\t\t\t\t\t\t ___________________________________________________________________\n\t\t\t\t\t\t|      _                    __  __                   _   _          |\n\t\t\t\t\t\t|     | |   ___    _   _   |  \\/  |   ___    _   _  | | (_)  _ __   |\n\t\t\t\t\t\t|  _  | |  / _ \\  | | | |  | |\\/| |  / _ \\  | | | | | | | | | '_ \\  |\n\t\t\t\t\t\t| | |_| | |  __/  | |_| |  | |  | | | (_) | | |_| | | | | | | | | | |\n\t\t\t\t\t\t|  \\___/   \\___|   \\__,_|  |_|  |_|  \\___/   \\__,_| |_| |_| |_| |_| |\n\t\t\t\t\t\t-___________________________________________________________________-\n";
char str1[]="\t\t\t\t\t\t\t     _           __     __     ____              _        \n\t\t\t\t\t\t\t  U |\"| u        \\ \\   /\"/u   / __\"| u        U |\"| u   \n\t\t\t\t\t\t\t _ \\| |/          \\ \\ / //   <\\___ \\/        _ \\| |/    \n\t\t\t\t\t\t\t| |_| |_,-.       /\\ V /_,-.  u___) |       | |_| |_,-. \n\t\t\t\t\t\t\t \\___/-(_/       U  \\_/-(_/   |____/>>       \\___/-(_/  \n\t\t\t\t\t\t\t  _//              //          )(  (__)       _//       \n\t\t\t\t\t\t\t (__)             (__)        (__)           (__)       \n";
char str2[]="\t\t\t\t\t\t\t     _           __     __     ____           __  __   \n\t\t\t\t\t\t\t  U |\"| u        \\ \\   /\"/u   / __\"| u      U|\' \\/ \'|u \n\t\t\t\t\t\t\t _ \\| |/          \\ \\ / //   <\\___ \\/       \\| |\\/| |/ \n\t\t\t\t\t\t\t| |_| |_,-.       /\\ V /_,-.  u___) |        | |  | |  \n\t\t\t\t\t\t\t \\___/-(_/       U  \\_/-(_/   |____/>>       |_|  |_|    \n\t\t\t\t\t\t\t  _//              //          )(  (__)     <<,-,,-.   \n\t\t\t\t\t\t\t (__)             (__)        (__)           (./  \\.)  \n";
Color(6,0);
printf("%s",str);
if(a==1) {Color(11,0);printf("\n\n");printf("%s",str1);Color(15,0);}
if(a==2) {Color(11,0);printf("\n\n");printf("%s",str2);Color(15,0);}
afficher_joueur(joueur);
Color(15,0);
printf("\n\n\t\t\t\t\t\t    ");position(joueur,0,T,T1);printf("---------------------------");position(joueur,1,T,T1);printf("--------------------------");position(joueur,2,T,T1);printf(" ");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t     |        ");position(joueur,3,T,T1);printf("-----------------");position(joueur,4,T,T1);printf("-----------------");position(joueur,5,T,T1);printf("       |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |      ");position(joueur,6,T,T1);printf("---------");position(joueur,7,T,T1);printf("--------");position(joueur,8,T,T1);printf("       |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t    ");position(joueur,9,T,T1);printf("-------");position(joueur,10,T,T1);printf("-----");position(joueur,11,T,T1);printf("                    ");position(joueur,12,T,T1);printf("------");position(joueur,13,T,T1);printf("------");position(joueur,14,T,T1);
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");Color(9,9);printf("\t  ");Color(9,0);printf(" Joueur1 : ");Color(9,0);printf(" %d Points",J1);Color(15,0);
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");if(a==1){Color(4,4);printf("\t  ");Color(4,0);printf(" Joueur2 : ");Color(4,0);printf(" %d Points",J2);Color(15,0);}if(a==2){Color(4,4);printf("\t  ");Color(4,0);printf(" Machine : ");Color(4,0);printf(" %d Points",J2);Color(15,0);}
printf("\n\t\t\t\t\t\t     |         |       |                      |        |        |");
printf("\n\t\t\t\t\t\t     |         |      ");position(joueur,15,T,T1);printf("---------");position(joueur,16,T,T1);printf("--------");position(joueur,17,T,T1);printf("       |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |         |                   |                   |        |");
printf("\n\t\t\t\t\t\t     |        ");position(joueur,18,T,T1);printf("-----------------");position(joueur,19,T,T1);printf("-----------------");position(joueur,20,T,T1);printf("       |");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t     |                             |                            |");
printf("\n\t\t\t\t\t\t    ");position(joueur,21,T,T1);printf("---------------------------");position(joueur,22,T,T1);printf("--------------------------");position(joueur,23,T,T1);



}


void joueur_joueur(int a,int q,char T[24],char T1[24])
{
     char x,y,z,w;
     int n,pos,i,pos1;
       p:
            if (joueur < 18+q)//-----------------------la phase d'emplacement des pions------------------------------------
            {
                 system("cls");
                 plateau(a,T,T1);
                 p1:
                 printf("\n\tentrer une position svp : ");//l'utilisateur doit enterer la position de son pion
                 scanf("%s",&x);
                 n = QUEL_JOUEUR(joueur);
                 pos = QUEL_INDICE(x,T);

                 if (T1[pos]==x && n==1)
                    {
                        T1[pos]='+';
                    }
                 else if (T1[pos]==x && n==2)
                    {
                        T1[pos]='-';
                    }
                 else if  (T1[pos]=='+' || T1[pos]=='-')
                    {
                        printf("\nchoisis une position disponible svp!");
                        goto p1;
                    }
                 moulin(T1);
                 for(i=0;i<16;i++)
                 {
                     if (T2[i]==1)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                         J1+=1;
                         T2[i]=3;
                         p5:
                         printf("\nchoisez un pion de votre adversaire: ");
                         scanf("%s",&w);
                         pos1=QUEL_INDICE(w,T);
                         if (T1[pos1]=='-' && cond_capturer(w)==0)
                         {
                             capturer(w,T,T1);
                             a=1;
                         }
                         else
                         {
                             printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                             goto p5;
                         }
                     }
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(4,0); printf("\nBRAVOO!! Le joueur 2 a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         p6:
                         printf("\nchoisez un pion de votre adversaire: ");
                         scanf("%s",&w);
                         pos1 = QUEL_INDICE(w,T);
                         if (T1[pos1]=='+' && cond_capturer(w)==0)
                         {
                             capturer(w,T,T1);
                             a=1;
                         }
                         else
                         {
                             printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                             goto p6;
                         }
                     }
                 }

                joueur+=1;

            }
            if (joueur>17+q && nbrPionJ1(T1)>3 && QUEL_JOUEUR(joueur)==1)//------------------la phase de deplacement normal pour J1--------------------------------
            {
                system("cls");
                plateau(a,T,T1);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                p2:
                if(Jeu_Blocker1(T,T1)==0)
                {
                    goto block1;
                }
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto p2;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     L:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto p2;
                     else
                        {
                           if (cond_deplacer(y,z,T,T1)==0)
                              {
                                  printf("\nil est impossible! SVP choisez une autre destination ! ");
                                  goto L;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;//cette incrementation permet de jouer a tour de role
                        }
                      moulin(T1);
                      for(i=0;i<16;i++)
                        {
                           if (T2[i]==1)
                            {
                                system("cls");
                                plateau(a,T,T1);
                                Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                                J1+=1;
                                T2[i]=3;
                                p3:
                                printf("\nchoisez un pion de votre adversaire: ");
                                scanf("%s",&w);
                                pos1=QUEL_INDICE(w,T);
                                if (T1[pos1]=='-' && cond_capturer(w)==0)
                                 {
                                    capturer(w,T,T1);
                                    a=1;
                                 }
                               else
                                 {
                                    printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                    goto p3;
                                 }
                            }
                        }
                  }

            }

            if (joueur>17+q && nbrPionJ2(T1)>3 && QUEL_JOUEUR(joueur)==2)//------------------la phase de deplacement normal pour J2--------------------------
            {
                system("cls");
                plateau(a,T,T1);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                p22:
                if(Jeu_Blocker2(T,T1)==0)
                {
                    goto block2;
                }
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto p22;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     L1:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto p22;
                     else
                        {
                           if (cond_deplacer(y,z,T,T1)==0)
                              {
                                  printf("\nil est impossible! SVP choisez une autre destination ! ");
                                  goto L1;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                      moulin(T1);
                      for(i=0;i<16;i++)
                        {
                            if (T2[i]==2)
                            {
                               system("cls");
                               plateau(a,T,T1);
                               Color(4,0); printf("\nBRAVOO!! Le joueur 2 a un moulin :)"); Color(15,0);
                               J2+=1;
                               T2[i]=3;
                               p4:
                               printf("\nchoisez un pion de votre adversaire: ");
                               scanf("%s",&w);
                               pos1 = QUEL_INDICE(w,T);
                               if (T1[pos1]=='+' && cond_capturer(w)==0)
                                {
                                   capturer(w,T,T1);
                                   a=1;
                                }
                              else
                                {
                                   printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                   goto p4;
                                }
                             }
                        }
                  }
            }
            if (joueur>17+q && nbrPionJ1(T1)==3 && QUEL_JOUEUR(joueur)==1)//--------------------la phase de deplacement libre J1------------------------
            {

                system("cls");
                plateau(a,T,T1);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                p20:
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto p20;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     L2:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto p20;
                     else
                        {
                           if (cond_depla_libre(z,T1,T)==1)
                              {
                                  printf("\ncette destination n'est pas libre ! SVP choisez une autre destination ! ");
                                  goto L2;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                     moulin(T1);
                     for(i=0;i<16;i++)
                        {
                            if (T2[i]==1)
                            {
                               system("cls");
                               plateau(a,T,T1);
                               Color(4,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                               J2+=1;
                               T2[i]=3;
                               p7:
                               printf("\nchoisez un pion de votre adversaire: ");
                               scanf("%s",&w);
                               pos1 = QUEL_INDICE(w,T);
                               if (T1[pos1]=='-' && cond_capturer(w)==0)
                                {
                                   capturer(w,T,T1);
                                   a=1;
                                }
                              else
                                {
                                   printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                   goto p7;
                                }
                             }
                         }
                  }
            }
                  if (joueur>17+q && nbrPionJ2(T1)==3 && QUEL_JOUEUR(joueur)==2)//---------------------la phase de deplacement libre J2-----------------------
                  {

                      system("cls");
                      plateau(a,T,T1);
                      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                      p21:
                      printf("\nchoisir le pion a deplacer: ");
                      scanf("%s",&y);
                      if(cond_pion(joueur,y,T,T1)==1)
                      {
                         printf("\nchoisez votre pion svp!");
                         goto p21;
                      }
                      else if(cond_pion(joueur,y,T,T1)==0)
                      {
                         system("cls");
                         plateau(a,T,T1);
                         printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                         L3:
                         printf("\nchoisir la destination du pion: ");
                         scanf("%s",&z);
                         if(z=='z') goto p21;
                         else
                         {
                            if (cond_depla_libre(z,T1,T)==1)
                              {
                                  printf("\ncette destination n'est pas libre ! SVP choisez une autre destination ! ");
                                  goto L3;
                              }
                            else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                          }
                       moulin(T1);
                       for(i=0;i<16;i++)
                        {
                            if (T2[i]==2)
                            {
                               system("cls");
                               plateau(a,T,T1);
                               Color(4,0); printf("\nBRAVOO!! Le joueur 2 a un moulin :)"); Color(15,0);
                               J2+=1;
                               T2[i]=3;
                               p8:
                               printf("\nchoisez un pion de votre adversaire: ");
                               scanf("%s",&w);
                               pos1 = QUEL_INDICE(w,T);
                               if (T1[pos1]=='+' && cond_capturer(w)==0)
                                {
                                   capturer(w,T,T1);
                                   a=1;
                                }
                               else
                                {
                                   printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                   goto p8;
                                }
                             }
                         }
                      }
                   }
                   if ((joueur>17+q && nbrPionJ2(T1)==2))//---------------------la phase: J1 est le gagnant -----------------------
                  {
                      block2:

                      system("cls");
                      Color(9,0);
                    printf("\t\t\t\t\t\t                              /                               \n");
                      printf("\t\t\t\t\t\t                          /////////                           \n");
                      printf("\t\t\t\t\t\t                         ////////*//                          \n");
                      printf("\t\t\t\t\t\t                      ///////////////                        \n");
                      printf("\t\t\t\t\t\t                     /////*/////////////                      \n");
                      printf("\t\t\t\t\t\t                  /////////////////////////                   \n");
                      Color(14,0); printf(" _                                ");printf("\t                      /////////////////////////////////               \n");
                      Color(14,0); printf("| |__    _ __   __ _  __   __  ___   ");printf("\t               .//////////,,//////////////////////////////////        \n");
                      Color(14,0); printf("| '_ \\  | '__| / _` | \\ \\ / / / _ \\  ");printf("\t         */////////////// ,&#&&& ,///////// &   &&& ///////////////  \n");
                      Color(14,0); printf("| |_) | | |   | (_| |  \\ V / | (_) | ");printf("\t         *//////////////  &&( &&&&  //////  &&&&&&&&&  //////////////   ");Color(14,0);printf("      _     __  \n");Color(9,0);
                      Color(14,0); printf("|_.__/  |_|    \\__,_|   \\_/   \\___/ ");printf("\t          //////////////   &&&&&&&   /////   @&&&&&&   //////////////   ");Color(14,0);printf("     | |   /_ | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t    ////////////,   .       ///////           /////////////     ");Color(14,0);printf("     | |    | |\n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t      ////////////,       //////////       *///////////       ");Color(14,0);printf("   _   | |    | | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t       ///////////////////////////////////////////////          ");Color(14,0);printf("| |__| |    | | \n");Color(9,0);
                      printf("\t\t\t\t\t\t        /////////////////*///////////////////////////           ");Color(14,0);printf(" \\____/     |_|\n");Color(9,0);
                      printf("\t\t\t\t\t\t         ///////////////////////////////////////////          \n");
                      printf("\t\t\t\t\t\t          /////////*//////          //////////*,///           \n");
                      printf("\t\t\t\t\t\t          //////////////////      ////////////////            \n");
                      printf("\t\t\t\t\t\t          *//////////////////    /////////////////            \n");
                      printf("\t\t\t\t\t\t          ////////////////////  //////////////////            \n");
                      printf("\t\t\t\t\t\t          ///////////,////////////////////////////            \n");
                      printf("\t\t\t\t\t\t          /////////,///////////////////////////////           \n");
                      printf("\t\t\t\t\t\t           /////////                    //////////            ");
                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto F;
                  }
                   if ((joueur>17+q && nbrPionJ1(T1)==2))                    //---------------------la phase: J2 est le gagnant -----------------------
                  {
                      block1:
                      system("cls");
                      Color(4,0);
                      printf("\t\t\t\t\t\t                              /                               \n");
                      printf("\t\t\t\t\t\t                          /////////                           \n");
                      printf("\t\t\t\t\t\t                         ////////*//                          \n");
                      printf("\t\t\t\t\t\t                      ///////////////                        \n");
                      printf("\t\t\t\t\t\t                     /////*/////////////                      \n");
                      printf("\t\t\t\t\t\t                  /////////////////////////                   \n");
                      Color(14,0); printf(" _                                ");printf("\t                      /////////////////////////////////               \n");
                      Color(14,0); printf("| |__    _ __   __ _  __   __  ___   ");printf("\t               .//////////,,//////////////////////////////////        \n");
                      Color(14,0); printf("| '_ \\  | '__| / _` | \\ \\ / / / _ \\  ");printf("\t         */////////////// ,&#&&& ,///////// &   &&& ///////////////  \n");
                      Color(14,0); printf("| |_) | | |   | (_| |  \\ V / | (_) | ");printf("\t         *//////////////  &&( &&&&  //////  &&&&&&&&&  //////////////   ");Color(14,0);printf("      _   ___  \n");Color(4,0);
                      Color(14,0); printf("|_.__/  |_|    \\__,_|   \\_/   \\___/ ");printf("\t          //////////////   &&&&&&&   /////   @&&&&&&   //////////////   ");Color(14,0);printf("     | | |__ \\ \n");Color(4,0);
                      Color(14,0);printf("\t\t\t\t\t\t    ////////////,   .       ///////           /////////////     ");Color(14,0);printf("     | |    ) |\n");Color(4,0);
                      Color(14,0);printf("\t\t\t\t\t\t      ////////////,       //////////       *///////////       ");Color(14,0);printf("   _   | |   / / \n");Color(4,0);
                      Color(14,0);printf("\t\t\t\t\t\t       ///////////////////////////////////////////////          ");Color(14,0);printf("| |__| |  / /_ \n");Color(4,0);
                      printf("\t\t\t\t\t\t        /////////////////*///////////////////////////           ");Color(14,0);printf(" \\____/  |____|\n");Color(4,0);
                      printf("\t\t\t\t\t\t         ///////////////////////////////////////////          \n");
                      printf("\t\t\t\t\t\t          /////////*//////          //////////*,///           \n");
                      printf("\t\t\t\t\t\t          //////////////////      ////////////////            \n");
                      printf("\t\t\t\t\t\t          *//////////////////    /////////////////            \n");
                      printf("\t\t\t\t\t\t          ////////////////////  //////////////////            \n");
                      printf("\t\t\t\t\t\t          ///////////,////////////////////////////            \n");
                      printf("\t\t\t\t\t\t          /////////,///////////////////////////////           \n");
                      printf("\t\t\t\t\t\t           /////////                    //////////            ");
                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto F;
                  }

                   goto p;
                   F:
                       printf("by");
}



void position(int J,int pos ,char T[24],char T1[24])
{
       if (T1[pos]==T[pos])
        {
            printf(" %c ",T[pos]);
        }

        if (T1[pos]=='+')
        {
            Color(15,9); printf(" %c ",T[pos]); Color(15,0);
        }
        if (T1[pos]=='-')
        {
             Color(15,4); printf(" %c ",T[pos]); Color(15,0);
        }

}


int QUEL_JOUEUR(int J)//donne quel joueur est en train de jouer
{
    int n,a;
    n=J%2;
    if (n==0) a=1;
    else  a=2;
    return a;
}

void afficher_joueur(int J)
{
    int n;
    n = QUEL_JOUEUR(J);
    if (n==1)
    { Color(9,0); printf("\t\t\t\t\t\t le joueur 1 a vous de jouer!"); Color(15,0); }
    else { Color(4,0); printf("\t\t\t\t\t\t le joueur 2 a vous de jouer!"); Color(15,0); }
}


int cond_deplacer(char y ,char z ,char T[24] ,char T1[24])//permet de verifier la possibilite de deplacement
{
    char T0[2]="jb";
    char T2[3]="aec";
    char T3[2]="bo";
    char T4[2]="ke";
    char T5[4]="dbhf";
    char T6[2]="en";
    char T7[2]="lh";
    char T8[3]="gei";
    char T9[2]="hm";
    char T10[3]="vak";
    char T11[4]="jdsl";
    char T12[3]="kgp";
    char T13[3]="irn";
    char T14[4]="mfuo";
    char T15[3]="cxn";
    char T16[2]="lq";
    char T17[3]="ptr";
    char T18[2]="qm";
    char T19 [2]="kt";
    char T20[4]="sqwu";
    char T21[2]="tn";
    char T22[2]="jw";
    char T23[3]="vtx";
    char T24[2]="wo";
    int c=0,pos=0,i;
    pos=QUEL_INDICE(z,T);
    if(y=='a')
    {
        for (i=0;i<2;i++)
        {
            if(z==T0[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;//si on a c=1 alors on peut deplacer si on a c=0 alors on peut pas
        }
    }
    else if(y=='b')
    {
        for (i=0;i<3;i++)
        {
            if(z==T2[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='c')
    {
        for (i=0;i<2;i++)
        {
            if(z==T3[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='d')
    {
        for (i=0;i<2;i++)
        {
            if(z==T4[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='e')
    {
        for (i=0;i<4;i++)
        {
            if(z==T5[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='f')
    {
        for (i=0;i<2;i++)
        {
            if(z==T6[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='g')
    {
        for (i=0;i<2;i++)
        {
            if(z==T7[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='h')
    {
        for (i=0;i<3;i++)
        {
            if(z==T8[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='i')
    {
        for (i=0;i<2;i++)
        {
            if(z==T9[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='j')
    {
        for (i=0;i<3;i++)
        {
            if(z==T10[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='k')
    {
        for (i=0;i<4;i++)
        {
            if(z==T11[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='l')
    {
        for (i=0;i<3;i++)
        {
            if(z==T12[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='m')
    {
        for (i=0;i<3;i++)
        {
            if(z==T13[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='n')
    {
        for (i=0;i<4;i++)
        {
            if(z==T14[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='o')
    {
        for (i=0;i<3;i++)
        {
            if(z==T15[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='p')
    {
        for (i=0;i<2;i++)
        {
            if(z==T16[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='q')
    {
        for (i=0;i<3;i++)
        {
            if(z==T17[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='r')
    {
        for (i=0;i<2;i++)
        {
            if(z==T18[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='s')
    {
        for (i=0;i<2;i++)
        {
            if(z==T19[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='t')
    {
        for (i=0;i<4;i++)
        {
            if(z==T20[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='u')
    {
        for (i=0;i<2;i++)
        {
            if(z==T21[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='v')
    {
        for (i=0;i<2;i++)
        {
            if(z==T22[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='w')
    {
        for (i=0;i<3;i++)
        {
            if(z==T23[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if (y=='x')
    {
        for (i=0;i<2;i++)
        {
            if(z==T24[i] && T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
    return c;
}


void deplacer(char y, char z, char T[24], char T1[24])
{
    int i,j;
    i=QUEL_INDICE(y,T);//l'indice de pion à deplacer
    j=QUEL_INDICE(z,T);//l'indice de destination de ce pion
    T1[i]=y;
    if(QUEL_JOUEUR(joueur)==1) T1[j]='+';
    else T1[j]='-';
}

int QUEL_INDICE(char y,char T[24])
{
   int pos=0,i;
   for(i=0;i<24;i++)
   {
       if(T[i]==y) pos=i;
   }
   return pos;
}

int cond_pion(int J,char y,char T[24],char T1[24]) // permet de verifier la possibilité de deplacer le pion désigné
{
    int pos,c,n;
    pos = QUEL_INDICE(y,T);
    n = QUEL_JOUEUR(J);
    if((T1[pos]=='+' && n==1) || (T1[pos]=='-' && n==2)) c=0;
    else c=1;
    return c ;

}

int cond_depla_libre(char z,char T1[24],char T[24]) //permet de verifier est ce que la destination(char z) est libre ou non
{
    int pos , c;
    pos=QUEL_INDICE(z,T);
    if (T1[pos]=='+' || T1[pos]=='-') c=1; // destination n'est pas libre
    else c=0; // destination est libre
    return c;
}

void moulin(char T[24])//permet le remplissage de T2 qui contient les moulins(1>>moulin pour J1  et  2>>moulin pour J2  et 0>>pas de moulin
{
    if (T[0]== '+' && T[1]== '+' && T[2]== '+' && T2[0]== 0) T2[0]=1;
    if (T[0]== '-' && T[1]== '-' && T[2]== '-' && T2[0]== 0) T2[0]=2;
    if (T[0]== 'a' || T[1]== 'b' || T[2]== 'c') T2[0]=0;

    if (T[2]== '+' && T[14]== '+' && T[23]== '+' && T2[1]== 0) T2[1]=1;
    if (T[2]== '-' && T[14]== '-' && T[23]== '-' && T2[1]== 0) T2[1]=2;
    if (T[2]== 'c' || T[14]== 'o' || T[23]== 'x') T2[1]=0;

    if (T[23]== '+' && T[22]== '+' && T[21]== '+' && T2[2]== 0) T2[2]=1;
    if (T[23]== '-' && T[22]== '-' && T[21]== '-' && T2[2]== 0) T2[2]=2;
    if(T[23]== 'x' || T[22]== 'w' || T[21]== 'v') T2[2]=0;

    if (T[21]== '+' && T[9]== '+' && T[0]== '+' && T2[3]== 0) T2[3]=1;
    if (T[21]== '-' && T[9]== '-' && T[0]== '-' && T2[3]== 0) T2[3]=2;
    if (T[21]== 'v' || T[9]== 'j' || T[0]== 'a') T2[3]=0;

    if (T[3]== '+' && T[4]== '+' && T[5]== '+' && T2[4]== 0) T2[4]=1;
    if (T[3]== '-' && T[4]== '-' && T[5]== '-' && T2[4]== 0) T2[4]=2;
    if (T[3]== 'd' || T[4]== 'e' || T[5]== 'f') T2[4]=0;

    if (T[5]== '+' && T[13]== '+' && T[20]== '+' && T2[5]== 0) T2[5]=1;
    if (T[5]== '-' && T[13]== '-' && T[20]== '-' && T2[5]== 0) T2[5]=2;
    if (T[5]== 'f' || T[13]== 'n' || T[20]== 'u') T2[5]=0;

    if (T[20]== '+' && T[19]== '+' && T[18]== '+' && T2[6]== 0) T2[6]=1;
    if (T[20]== '-' && T[19]== '-' && T[18]== '-' && T2[6]== 0) T2[6]=2;
    if (T[20]== 'u' || T[19]== 't' || T[18]== 's') T2[6]=0;

    if (T[18]== '+' && T[10]== '+' && T[3]== '+' && T2[7]== 0) T2[7]=1;
    if (T[18]== '-' && T[10]== '-' && T[3]== '-' && T2[7]== 0) T2[7]=2;
    if (T[18]== 's' || T[10]== 'k' || T[3]== 'd') T2[7]=0;

    if (T[6]== '+' && T[7]== '+' && T[8]== '+' && T2[8]== 0) T2[8]=1;
    if (T[6]== '-' && T[7]== '-' && T[8]== '-' && T2[8]== 0) T2[8]=2;
    if (T[6]== 'g' || T[7]== 'h' || T[8]== 'i') T2[8]=0;

    if (T[8]== '+' && T[12]== '+' && T[17]== '+' && T2[9]== 0) T2[9]=1;
    if (T[8]== '-' && T[12]== '-' && T[17]== '-' && T2[9]== 0) T2[9]=2;
    if (T[8]== 'i' || T[12]== 'm' || T[17]== 'r') T2[9]=0;

    if (T[17]== '+' && T[16]== '+' && T[15]== '+' && T2[10]== 0) T2[10]=1;
    if (T[17]== '-' && T[16]== '-' && T[15]== '-' && T2[10]== 0) T2[10]=2;
    if (T[17]== 'r' || T[16]== 'q' || T[15]== 'p') T2[10]=0;

    if (T[15]== '+' && T[11]== '+' && T[6]== '+' && T2[11]== 0) T2[11]=1;
    if (T[15]== '-' && T[11]== '-' && T[6]== '-' && T2[11]== 0) T2[11]=2;
    if (T[15]== 'p' || T[11]== 'l' || T[6]== 'g') T2[11]=0;

    if (T[1]== '+' && T[4]== '+' && T[7]== '+' && T2[12]== 0) T2[12]=1;
    if (T[1]== '-' && T[4]== '-' && T[7]== '-' && T2[12]== 0) T2[12]=2;
    if (T[1]== 'b' || T[4]== 'e' || T[7]== 'h') T2[12]=0;

    if (T[14]== '+' && T[13]== '+' && T[12]== '+' && T2[13]== 0) T2[13]=1;
    if (T[14]== '-' && T[13]== '-' && T[12]== '-' && T2[13]== 0) T2[13]=2;
    if (T[14]== 'o' || T[13]== 'n' || T[12]== 'm') T2[13]=0;

    if (T[22]== '+' && T[19]== '+' && T[16]== '+' && T2[14]== 0) T2[14]=1;
    if (T[22]== '-' && T[19]== '-' && T[16]== '-' && T2[14]== 0) T2[14]=2;
    if (T[22]== 'w' || T[19]== 't' || T[16]== 'q') T2[14]=0;

    if (T[9]== '+' && T[10]== '+' && T[11]== '+' && T2[15]== 0) T2[15]=1;
    if (T[9]== '-' && T[10]== '-' && T[11]== '-' && T2[15]== 0) T2[15]=2;
    if (T[9]== 'j' || T[10]== 'k' || T[11]== 'l') T2[15]=0;
}


void capturer(char w,char T[24],char T1[24])
{
    int pos;
    pos=QUEL_INDICE(w,T);
    T1[pos]=w;
}

int cond_capturer(char w)//permet de virefier si le pion qu'on veut capturer(w) n'est dans un moulin
{
    int c=0;
    if (w=='a')
    {
        if(T2[0]==3 || T2[3]==3) c=1;
    }
    if (w=='b')
    {
        if(T2[0]==3 || T2[12]==3) c=1;
    }
    if (w=='c')
    {
        if(T2[0]==3 || T2[1]==3) c=1;
    }
    if (w=='d')
    {
        if(T2[4]==3 || T2[7]==3) c=1;
    }
    if (w=='e')
    {
        if(T2[4]==3 || T2[12]==3) c=1;
    }
    if (w=='f')
    {
        if(T2[4]==3 || T2[5]==3) c=1;
    }
    if (w=='g')
    {
        if(T2[8]==3 || T2[11]==3) c=1;
    }
    if (w=='h')
    {
        if(T2[8]==3 || T2[12]==3) c=1;
    }
    if (w=='i')
    {
        if(T2[8]==3 || T2[9]==3) c=1;
    }
    if (w=='j')
    {
        if(T2[15]==3 || T2[3]==3) c=1;
    }
    if (w=='k')
    {
        if(T2[7]==3 || T2[15]==3) c=1;
    }
    if (w=='l')
    {
        if(T2[11]==3 || T2[15]==3) c=1;
    }
    if (w=='m')
    {
        if(T2[9]==3 || T2[13]==3) c=1;
    }
    if (w=='n')
    {
        if(T2[5]==3 || T2[13]==3) c=1;
    }
    if (w=='o')
    {
        if(T2[1]==3 || T2[13]==3) c=1;
    }
    if (w=='p')
    {
        if(T2[10]==3 || T2[11]==3) c=1;
    }
    if (w=='q')
    {
        if(T2[10]==3 || T2[14]==3) c=1;
    }
    if (w=='r')
    {
        if(T2[9]==3 || T2[10]==3) c=1;
    }
    if (w=='s')
    {
        if(T2[6]==3 || T2[7]==3) c=1;
    }
    if (w=='t')
    {
        if(T2[14]==3 || T2[6]==3) c=1;
    }
    if (w=='u')
    {
        if(T2[6]==3 || T2[5]==3) c=1;
    }
    if (w=='v')
    {
        if(T2[3]==3 || T2[2]==3) c=1;
    }
    if (w=='w')
    {
        if(T2[2]==3 || T2[14]==3) c=1;
    }
    if (w=='x')
    {
        if(T2[1]==3 || T2[2]==3) c=1;
    }
    return c;
}

void regles()
{
system("cls");
char str[]="\t\t\t\t\t\t _______________________________\n\t\t\t\t\t\t|  _____            _           |\n\t\t\t\t\t\t| |  __ \\          | |          |\n\t\t\t\t\t\t| | |__) |___  __ _| | ___  ___ |\n\t\t\t\t\t\t| |  _  // _ \\/ _` | |/ _ \\/ __||\n\t\t\t\t\t\t| | | \\ \\  __/ (_| | |  __/\\__ \\|\n\t\t\t\t\t\t| |_|  \\_\\___|\\__, |_|\\___||___/|\n\t\t\t\t\t\t|              __/ |            |\n\t\t\t\t\t\t|             |___/             |\n\t\t\t\t\t\t|_______________________________|";
Color(14,0);
printf("%s\n\n\n\n",str);
Color(9,0);
printf("\n\n\n     _________________________\n    |                         |\n    |  LE DEROULEMENT DU JEU  |\n    |_________________________|\n");
Color(15,0);
printf("\nLe jeu se deroule en deux phases :");
Color(4,0);
printf("\n\n\nPhase 1 - La pose\n-----------------");
Color(15,0);
printf("\nLes joueurs jouent a tour de role.\nChaque joueur place un pion.\nLe but est aligner trois pions en suivant une ligne.\nLorsqu un alignement est forme sur une ligne, les pions de cet alignement sont proteges.\nLe joueur peut alors capturer un pion adverse qui se trouve sur le plateau\n(sauf ceux presents dans un alignement de trois pions).\nLorsque tous les pions sont en places, la seconde phase commence.");
Color(4,0);
printf("\n\n\nPhase 2 - Le mouvement\n----------------------");
Color(15,0);
printf("\nA tour de role, chaque joueur deplace un pion en suivant les lignes vers une case libre.\nQuand un joueur parvient a former un nouvel alignement, il prend un pion du adversaire\na condition que ce pion ne fasse pas partie dans un moulin.");
Color(9,0);
printf("\n\n\n\t    ___________\n\t   |           |\n\t   |  Le But   |\n\t   |___________|\n");
Color(15,0);
printf("\nFaire des alignements de trois pions pour pouvoir capturer les pions du joueur adversse et le bloquer.\nLe jeu est arrete si un joueur a deux pions seulement ou ne peut plus en bouger.");

}

int nbrPionJ1(char T1[24])//permet de calculer le bnr de pions dans le palteau J1
{
    int i,nbr=0;
    for(i=0;i<24;i++)
    {
        if(T1[i]=='+') nbr+=1;
    }
    return nbr ;
}

int nbrPionJ2(char T1[24])//permet de calculer le bnr de pions dans le palteau J2
{
    int i;
    int nbr=0;
    for(i=0;i<24;i++)
    {
        if(T1[i]=='-') nbr+=1;
    }
    return nbr ;
}

void rejouer(char T1[24],char T[24])//permet de remettre les valeurs initiales de T1 pour rejouer une autre fois
{
    int i;
    for(i=0;i<24;i++)
    {
       T1[i]=T[i];
    }
}



int cond_blockage(char y,char T[24] ,char T1[24])//permet de verifier la possibilite de deplacer un pion sans designer la destination
{
    char T0[2]="jb";
    char T2[3]="aec";
    char T3[2]="bo";
    char T4[2]="ke";
    char T5[4]="dbhf";
    char T6[2]="en";
    char T7[2]="lh";
    char T8[3]="gei";
    char T9[2]="hm";
    char T10[3]="vak";
    char T11[4]="jdsl";
    char T12[3]="kgp";
    char T13[3]="irn";
    char T14[4]="mfuo";
    char T15[3]="cxn";
    char T16[2]="lq";
    char T17[3]="ptr";
    char T18[2]="qm";
    char T19 [2]="kt";
    char T20[4]="sqwu";
    char T21[2]="tn";
    char T22[2]="jw";
    char T23[3]="vtx";
    char T24[2]="wo";
    int c=0,pos,i;
    if(y=='a')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T0[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;//si on a c=1 alors on peut deplacer si on a c=0 alors on peut pas
        }
    }
    else if(y=='b')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T2[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='c')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T3[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='d')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T4[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='e')
    {
        for (i=0;i<4;i++)
        {
            pos=QUEL_INDICE(T5[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='f')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T6[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='g')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T7[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='h')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T8[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='i')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T9[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='j')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T10[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='k')
    {
        for (i=0;i<4;i++)
        {
            pos=QUEL_INDICE(T11[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='l')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T12[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='m')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T13[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='n')
    {
        for (i=0;i<4;i++)
        {
            pos=QUEL_INDICE(T14[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='o')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T15[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='p')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T16[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='q')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T17[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='r')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T18[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='s')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T19[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='t')
    {
        for (i=0;i<4;i++)
        {
            pos=QUEL_INDICE(T20[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='u')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T21[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='v')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T22[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if(y=='w')
    {
        for (i=0;i<3;i++)
        {
            pos=QUEL_INDICE(T23[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
      else if (y=='x')
    {
        for (i=0;i<2;i++)
        {
            pos=QUEL_INDICE(T24[i],T);
            if(T1[pos]!='+' && T1[pos]!='-')  c = 1;
        }
    }
    return c;
}

int Jeu_Blocker1(char T[24],char T1[24])
{
    int i,c=0;
    for(i=0;i<24;i++)
    {
        if(T1[i]=='+')
        {
            if(cond_blockage(T[i],T,T1)==1)
                {c=1;break;}
        }
    }
    return c;
}


int Jeu_Blocker2(char T[24],char T1[24])
{
    int i,c=0;
    for(i=0;i<24;i++)
    {
        if(T1[i]=='-')
        {
            if(cond_blockage(T[i],T,T1)==1)
                {c=1;break;}
        }
    }
    return c;
}



void PionJoueurs(char T1[24],char T[24])
{
    int i,j,l=0,m=0;
    for(i=0;i<9;i++)
    {
        Tj[i]=='z';
        Tm[i]=='z';
    }
    for(j=0;j<24;j++)
    {
        if(T1[j]=='+')
        {
            Tj[l]=T[j];
            l++;
        }
        if(T1[j]=='-')
        {
            Tm[m]=T[j];
            m++;
        }
    }
}


char emplacement_machineF(char T[24],char T1[24])//c'est l'emplacement des  pion pour la machine facile
{
    int i;
    char x;
    for(i=0;i<24;i++)
    {
        if(T1[i]!='+' && T1[i]!='-')
        {
            x=T[i];
            break;
        }
    }
    return x;
}

char pion_a_depl_MF(char T[24],char T1[24])//permet de choisir pour la machine facile le pion à deplacer
{
    char y='z';
    int i;
    for (i=0;i<9;i++)
    {
        if(Tm[i]!='z')
        {
            if(cond_blockage(Tm[i],T,T1)==1)
            {
                y=Tm[i];
                break;
            }
        }
    }
    return y;
}


char destination_MF(char y,char T[24], char T1[24])//permet de choisir pour la machine facile la destination de deplacement
{
    char z;
    int i,j=0;
    p:
    for (i=j;i<24;i++)
    {
        if(T1[i]!='-' && T1[i]!='+')
        {
            z=T[i];
            break;
        }
    }
    if (cond_deplacer(y,z,T,T1)==0)
    {
         j=i+1;
         goto p;
    }
    else return z;
}

void capturer_MF(char T[24],char T1[24])
{
    int i;
    for(i=0;i<9;i++)
    {
       if(Tj[i]!='z' && cond_capturer(Tj[i])==0)
       {
          capturer(Tj[i],T,T1);
          break;
       }
    }
}




void MACHINE_FACILE(int a,char T[24],char T1[24])//la phase qui vous permet de jouer contre une machine facile
{
    char x,y,z,w;
    int i,q,pos,n,pos1;
    srand(time(NULL));
    q=rand()%2;
    joueur=q;
    Y1:
      if (joueur < 18+q)//-----------------------la phase d'emplacement des pions------------------------------------
      {
            system("cls");
            plateau(a,T,T1);
            n = QUEL_JOUEUR(joueur);
            if(n==1)//-------------------------pour le joueur-------------------
            {
                Y2:
                printf("\n\tentrer une position svp : ");//l'utilisateur doit enterer la position de son pion
                scanf("%s",&x);
                pos = QUEL_INDICE(x,T);
                if(T1[pos]=='+' || T1[pos]=='-')
                {
                    printf("\nchoisez une position desponible svp");
                    goto Y2;
                }
                else
                {
                    T1[pos]='+';
                    joueur+=1;
                }
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==1)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                         J1+=1;
                         T2[i]=3;
                         Y6:
                         printf("\nchoisez un pion de votre adversaire: ");
                         scanf("%s",&w);
                         pos1=QUEL_INDICE(w,T);
                         if (T1[pos1]=='-' && cond_capturer(w)==0)
                         {
                             capturer(w,T,T1);
                             PionJoueurs(T1,T);
                         }
                         else
                         {
                             printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                             goto Y6;
                         }
                     }
                }
            }
            if(n==2)//--------------------------pour la machine--------------------------------
            {
                x=emplacement_machineF(T,T1);
                pos = QUEL_INDICE(x,T);
                T1[pos]='-';
                joueur+=1;
                Sleep(1000);
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MF(T,T1);
                         PionJoueurs(T1,T);
                     }
                }
            }



      }
      if (joueur>17+q && nbrPionJ1(T1)>3 && QUEL_JOUEUR(joueur)==1)//------------------la phase de deplacement normal pour J1--------------------------------
      {
                system("cls");
                plateau(a,T,T1);
                if(Jeu_Blocker1(T,T1)==0)
                {
                    goto blockJ;
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                Y3:
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto Y3;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     Y4:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto Y3;
                     else
                        {
                           if (cond_deplacer(y,z,T,T1)==0)
                              {
                                  printf("\nil est impossible! SVP choisez une autre destination ! ");
                                  goto Y4;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                      moulin(T1);
                      for(i=0;i<16;i++)
                        {
                           if (T2[i]==1)
                            {
                                system("cls");
                                plateau(a,T,T1);
                                Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                                J1+=1;
                                T2[i]=3;
                                Y5:
                                printf("\nchoisez un pion de votre adversaire: ");
                                scanf("%s",&w);
                                pos1=QUEL_INDICE(w,T);
                                if (T1[pos1]=='-' && cond_capturer(w)==0)
                                 {
                                    capturer(w,T,T1);
                                 }
                               else
                                 {
                                    printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                    goto Y5;
                                 }
                            }
                        }
                  }
       }
        if (joueur>17+q && nbrPionJ2(T1)>3 && QUEL_JOUEUR(joueur)==2)//------------------la phase de deplacement normal pour la machine--------------------------------
      {
                system("cls");
                plateau(a,T,T1);
                PionJoueurs(T1,T);
                if(Jeu_Blocker2(T,T1)==0)
                {
                    goto blockM;
                }
                y=pion_a_depl_MF(T,T1);
                z=destination_MF(y,T,T1);
                deplacer(y,z,T,T1);
                joueur+=1;
                Sleep(1000);
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MF(T,T1);
                         PionJoueurs(T1,T);
                     }
                }



    }
    if (joueur>17+q && nbrPionJ1(T1)==3 && QUEL_JOUEUR(joueur)==1)//--------------------la phase de deplacement libre J1------------------------
            {

                system("cls");
                plateau(a,T,T1);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                Y11:
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto Y11;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     Y10:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto Y11;
                     else
                        {
                           if (cond_depla_libre(z,T1,T)==1)
                              {
                                  printf("\ncette destination n'est pas libre ! SVP choisez une autre destination ! ");
                                  goto Y10;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                     moulin(T1);
                     for(i=0;i<16;i++)
                        {
                            if (T2[i]==1)
                            {
                               system("cls");
                               plateau(a,T,T1);
                               Color(4,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                               J2+=1;
                               T2[i]=3;
                               Y9:
                               printf("\nchoisez un pion de votre adversaire: ");
                               scanf("%s",&w);
                               pos1 = QUEL_INDICE(w,T);
                               if (T1[pos1]=='-' && cond_capturer(w)==0)
                                {
                                   capturer(w,T,T1);
                                   a=1;
                                }
                              else
                                {
                                   printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                   goto Y9;
                                }
                             }
                         }
                  }
                  //joueur++;
            }
            if (joueur>17+q && nbrPionJ2(T1)==3 && QUEL_JOUEUR(joueur)==2)//--------------------la phase de deplacement libre M------------------------
            {

                system("cls");
                plateau(a,T,T1);
                PionJoueurs(T1,T);
                srand(time(NULL));
                y=Tm[rand()%3];
                Y8:
                srand(time(NULL));
                z=T[rand()%24];
                if (cond_depla_libre(z,T1,T)==1) goto Y8;
                else
                {
                    deplacer(y,z,T,T1);
                    joueur+=1;
                    Sleep(500);
                    PionJoueurs(T1,T);
                }
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MF(T,T1);
                         PionJoueurs(T1,T);
                     }
                }


            }
            if ((joueur>17+q && nbrPionJ2(T1)==2))//---------------------la phase: J1 est le gagnant -----------------------
                  {
                      blockM:

                      system("cls");
                      Color(9,0);
                      printf("\t\t\t\t\t\t                              /                               \n");
                      printf("\t\t\t\t\t\t                          /////////                           \n");
                      printf("\t\t\t\t\t\t                         ////////*//                          \n");
                      printf("\t\t\t\t\t\t                      ///////////////                        \n");
                      printf("\t\t\t\t\t\t                     /////*/////////////                      \n");
                      printf("\t\t\t\t\t\t                  /////////////////////////                   \n");
                      Color(14,0); printf(" _                                ");printf("\t                      /////////////////////////////////               \n");
                      Color(14,0); printf("| |__    _ __   __ _  __   __  ___   ");printf("\t               .//////////,,//////////////////////////////////        \n");
                      Color(14,0); printf("| '_ \\  | '__| / _` | \\ \\ / / / _ \\  ");printf("\t         */////////////// ,&#&&& ,///////// &   &&& ///////////////  \n");
                      Color(14,0); printf("| |_) | | |   | (_| |  \\ V / | (_) | ");printf("\t         *//////////////  &&( &&&&  //////  &&&&&&&&&  //////////////   ");Color(14,0);printf("      _     __  \n");Color(9,0);
                      Color(14,0); printf("|_.__/  |_|    \\__,_|   \\_/   \\___/ ");printf("\t          //////////////   &&&&&&&   /////   @&&&&&&   //////////////   ");Color(14,0);printf("     | |   /_ | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t    ////////////,   .       ///////           /////////////     ");Color(14,0);printf("     | |    | |\n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t      ////////////,       //////////       *///////////       ");Color(14,0);printf("   _   | |    | | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t       ///////////////////////////////////////////////          ");Color(14,0);printf("| |__| |    | | \n");Color(9,0);
                      printf("\t\t\t\t\t\t        /////////////////*///////////////////////////           ");Color(14,0);printf(" \\____/     |_|\n");Color(9,0);
                      printf("\t\t\t\t\t\t         ///////////////////////////////////////////          \n");
                      printf("\t\t\t\t\t\t          /////////*//////          //////////*,///           \n");
                      printf("\t\t\t\t\t\t          //////////////////      ////////////////            \n");
                      printf("\t\t\t\t\t\t          *//////////////////    /////////////////            \n");
                      printf("\t\t\t\t\t\t          ////////////////////  //////////////////            \n");
                      printf("\t\t\t\t\t\t          ///////////,////////////////////////////            \n");
                      printf("\t\t\t\t\t\t          /////////,///////////////////////////////           \n");
                      printf("\t\t\t\t\t\t           /////////                    //////////            ");
                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto F1;
                  }
                   if ((joueur>17+q && nbrPionJ1(T1)==2))                    //---------------------la phase: Machine est la gagnante -----------------------
                  {
                      blockJ:
                      system("cls");
                      Color(9,0);
                      printf("\t\t\t\t                                    ..,,,..                                    \n");
                      printf("\t\t\t\t                           *///////**********////////.                          \n");
                      printf("\t\t\t\t                      */////****,... ..........,******////.                     \n");
                      printf("\t\t\t\t                   ////****...........................****////                  \n");
                      printf("\t\t\t\t                ///****. ................................,***///*               \n");
                      printf("\t\t\t\t             .//****........................................,***///             \n");
                      printf("\t\t\t\t            //****.............................................***///           \n");
                      printf("\t\t\t\t          ///***................................................,***//,         \n");
                      Color(14,0);printf("\t\t\t\t         //****,.,,,........................................,,,..,***///        \n");
                      printf("\t\t\t\t        //****,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,***///       \n");
                      printf("\t\t\t\t       //****,,,,,,,,,,,,,,      ,,,,,,,,,,,,,,,      ,,,,,,,,,,,,,,***///      \n");
                      printf("\t\t\t\t      //****,,,,,,,,,,,,,*        ,***********,        ,,,,,,,,,,,,,****//      \n");
                      printf("\t\t\t\t      //******************        *************        ******************//     \n");
                      printf("\t\t\t\t     ./*********************   ******************    ********************//     \n");
                      printf("\t\t\t\t     ./******************************************************************//     \n");
                      printf("\t\t\t\t     .//*****************************************************************//     \n");
                      Color(9,0);printf("\t\t\t\t      //**************************             **************************//     \n");
                      printf("\t\t\t\t      //**********************     **********/     *********************//      \n");
                      printf("\t\t\t\t       //******************    *******************   ******************//*      \n");
                      printf("\t\t\t\t        //***************   *************************  ***************///       \n");
                      printf("\t\t\t\t         //*************  *****************************  ************//*        \n");
                      printf("\t\t\t\t          *//******************************************************//.         \n");
                      printf("\t\t\t\t            ///***************************************************//*           \n");
                      printf("\t\t\t\t              ///**********************************************////             \n");
                      printf("\t\t\t\t                *///*****************************************///.               \n");
                      printf("\t\t\t\t                   *///**********************************////,                  \n");
                      printf("\t\t\t\t                       /////*************************////*                      \n");
                      printf("\t\t\t\t                            *//////////**/*/////////,                           \n");


                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto F1;
                  }

    goto Y1;
    F1:
    printf("by");

       }


int nbr_pion_alignerM(char Tp[3],char T[24],char T1[24])//cette fonction permet de donner le nbr de pions dans un alignement de la machine (Tp presente le tableau des positionnements des pions alignés)
{
    int nbr=0,i,pos;
    for(i=0;i<3;i++)
    {
        pos = QUEL_INDICE(Tp[i],T);
        if(T1[pos]=='-') nbr++;
    }
    return nbr;
}

int nbr_pion_alignerJ(char Tp[3],char T[24],char T1[24])//cette fonction permet de donner le nbr de pions dans un alignement du joueur (Tp presente le tableau des positionnements des pions alignés)
{
    int nbr=0,i,pos;
    for(i=0;i<3;i++)
    {
        pos = QUEL_INDICE(Tp[i],T);
        if(T1[pos]=='+') nbr++;
    }
    return nbr;
}


char emplacement_vide(char Tp[3],char T[24],char T1[24])//si on a p='z' alors la position n'est pas vide sinon la position est vide
{
    int i,pos;
    char p='z';
    for(i=0;i<3;i++)
    {
        pos = QUEL_INDICE(Tp[i],T);
        if(T1[pos]!='+' && T1[pos]!='-')
        {
            p=Tp[i];
            break;
        }
    }
    return p;
}

char defense(char Ta[24],char Tb[24])//cette fct permet de donner la position correct (machine) pour défendre (Ta c'est notre T et Tb c'est notre T1)
{
    char p='z';
    char T0[3]="abc";char T1[3]="def";char T3[3]="ghi";char T4[3]="jkl";
    char T5[3]="mno";char T6[3]="pqr";char T7[3]="stu";char T8[3]="vwx";
    char T9[3]="ajv";char T10[3]="dks";char T11[3]="glp";char T12[3]="beh";
    char T13[3]="qtw";char T14[3]="imr";char T15[3]="fnu";char T16[3]="cox";
    if(p=='z' && nbr_pion_alignerJ(T0,Ta,Tb) ==2) p = emplacement_vide(T0,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T1,Ta,Tb) ==2) p = emplacement_vide(T1,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T3,Ta,Tb) ==2) p = emplacement_vide(T3,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T4,Ta,Tb) ==2) p = emplacement_vide(T4,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T5,Ta,Tb) ==2) p = emplacement_vide(T5,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T6,Ta,Tb) ==2) p = emplacement_vide(T6,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T7,Ta,Tb) ==2) p = emplacement_vide(T7,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T8,Ta,Tb) ==2) p = emplacement_vide(T8,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T9,Ta,Tb) ==2) p = emplacement_vide(T9,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T10,Ta,Tb) ==2) p = emplacement_vide(T10,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T11,Ta,Tb) ==2) p = emplacement_vide(T11,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T12,Ta,Tb) ==2) p = emplacement_vide(T12,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T13,Ta,Tb) ==2) p = emplacement_vide(T13,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T14,Ta,Tb) ==2) p = emplacement_vide(T14,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T15,Ta,Tb) ==2) p = emplacement_vide(T15,Ta,Tb);
    if(p=='z' && nbr_pion_alignerJ(T16,Ta,Tb) ==2) p = emplacement_vide(T16,Ta,Tb);
    return p;

}

char attaquer(char Ta[24],char Tb[24])
{
    char p='z';
    char T0[3]="abc";char T1[3]="def";char T3[3]="ghi";char T4[3]="jkl";
    char T5[3]="mno";char T6[3]="pqr";char T7[3]="stu";char T8[3]="vwx";
    char T9[3]="ajv";char T10[3]="dks";char T11[3]="glp";char T12[3]="beh";
    char T13[3]="qtw";char T14[3]="imr";char T15[3]="fnu";char T16[3]="cox";
    if(p=='z' && nbr_pion_alignerM(T0,Ta,Tb) ==2) p = emplacement_vide(T0,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T1,Ta,Tb) ==2) p = emplacement_vide(T1,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T3,Ta,Tb) ==2) p = emplacement_vide(T3,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T4,Ta,Tb) ==2) p = emplacement_vide(T4,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T5,Ta,Tb) ==2) p = emplacement_vide(T5,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T6,Ta,Tb) ==2) p = emplacement_vide(T6,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T7,Ta,Tb) ==2) p = emplacement_vide(T7,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T8,Ta,Tb) ==2) p = emplacement_vide(T8,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T9,Ta,Tb) ==2) p = emplacement_vide(T9,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T10,Ta,Tb) ==2) p = emplacement_vide(T10,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T11,Ta,Tb) ==2) p = emplacement_vide(T11,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T12,Ta,Tb) ==2) p = emplacement_vide(T12,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T13,Ta,Tb) ==2) p = emplacement_vide(T13,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T14,Ta,Tb) ==2) p = emplacement_vide(T14,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T15,Ta,Tb) ==2) p = emplacement_vide(T15,Ta,Tb);
    if(p=='z' && nbr_pion_alignerM(T16,Ta,Tb) ==2) p = emplacement_vide(T16,Ta,Tb);
    return p;
}


void capturer_MM(char Ta[24],char Tb[24])
{
    char T0[3]="abc";char T1[3]="def";char T3[3]="ghi";char T4[3]="jkl";
    char T5[3]="mno";char T6[3]="pqr";char T7[3]="stu";char T8[3]="vwx";
    char T9[3]="ajv";char T10[3]="dks";char T11[3]="glp";char T12[3]="beh";
    char T13[3]="qtw";char T14[3]="imr";char T15[3]="fnu";char T16[3]="cox";
    int pos,i;
    char y,c='z';
    int j=0;
    if(nbr_pion_alignerJ(T0,Ta,Tb)==2 && j==0 && emplacement_vide(T0,Ta,Tb)!='z')//on a ajouté emplacement_vide pour etre sur que la troisieme position ne contient pas un pion de la machine
    {
        y=emplacement_vide(T0,Ta,Tb);
        pos=QUEL_INDICE(y,T0);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T0[pos] && cond_capturer(T0[i])==0) {c=T0[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T1,Ta,Tb)==2 && j==0 && emplacement_vide(T1,Ta,Tb)!='z')
    {
        y=emplacement_vide(T1,Ta,Tb);
        pos=QUEL_INDICE(y,T1);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T1[pos] && cond_capturer(T1[i])==0) {c=T1[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T3,Ta,Tb)==2 && j==0 && emplacement_vide(T3,Ta,Tb)!='z')
    {
        y=emplacement_vide(T3,Ta,Tb);
        pos=QUEL_INDICE(y,T3);
        for(i=0;i<3;i++)
        {
            if(T3[i]!=T3[pos] && cond_capturer(T3[i])==0) {c=T3[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T4,Ta,Tb)==2 && j==0 && emplacement_vide(T4,Ta,Tb)!='z')
    {
        y=emplacement_vide(T4,Ta,Tb);
        pos=QUEL_INDICE(y,T4);
        for(i=0;i<3;i++)
        {
            if(T4[i]!=T4[pos] && cond_capturer(T4[i])==0) {c=T4[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T5,Ta,Tb)==2 && j==0 && emplacement_vide(T5,Ta,Tb)!='z')
    {
        y=emplacement_vide(T5,Ta,Tb);
        pos=QUEL_INDICE(y,T5);
        for(i=0;i<3;i++)
        {
            if(T5[i]!=T5[pos] && cond_capturer(T5[i])==0) {c=T5[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T6,Ta,Tb)==2 && j==0 && emplacement_vide(T6,Ta,Tb)!='z')
    {
        y=emplacement_vide(T6,Ta,Tb);
        pos=QUEL_INDICE(y,T6);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T6[pos] && cond_capturer(T6[i])==0) {c=T6[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T7,Ta,Tb)==2 && j==0 && emplacement_vide(T7,Ta,Tb)!='z')
    {
        y=emplacement_vide(T7,Ta,Tb);
        pos=QUEL_INDICE(y,T7);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T7[pos] && cond_capturer(T7[i])==0) {c=T7[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T8,Ta,Tb)==2 && j==0 && emplacement_vide(T8,Ta,Tb)!='z')
    {
        y=emplacement_vide(T8,Ta,Tb);
        pos=QUEL_INDICE(y,T8);
        for(i=0;i<3;i++)
        {
            if(T8[i]!=T8[pos] && cond_capturer(T8[i])==0) {c=T8[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T9,Ta,Tb)==2 && j==0 && emplacement_vide(T9,Ta,Tb)!='z')
    {
        y=emplacement_vide(T9,Ta,Tb);
        pos=QUEL_INDICE(y,T9);
        for(i=0;i<3;i++)
        {
            if(T9[i]!=T9[pos] && cond_capturer(T9[i])==0) {c=T9[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T10,Ta,Tb)==2 && j==0 && emplacement_vide(T10,Ta,Tb)!='z')
    {
        y=emplacement_vide(T10,Ta,Tb);
        pos=QUEL_INDICE(y,T10);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T10[pos] && cond_capturer(T10[i])==0) {c=T10[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T11,Ta,Tb)==2 && j==0 && emplacement_vide(T11,Ta,Tb)!='z')
    {
        y=emplacement_vide(T11,Ta,Tb);
        pos=QUEL_INDICE(y,T11);
        for(i=0;i<3;i++)
        {
            if(T11[i]!=T11[pos] && cond_capturer(T11[i])==0) {c=T11[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T12,Ta,Tb)==2 && j==0 && emplacement_vide(T12,Ta,Tb)!='z')
    {
        y=emplacement_vide(T12,Ta,Tb);
        pos=QUEL_INDICE(y,T12);
        for(i=0;i<3;i++)
        {
            if(T12[i]!=T12[pos] && cond_capturer(T12[i])==0) {c=T12[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T13,Ta,Tb)==2 && j==0 && emplacement_vide(T13,Ta,Tb)!='z')
    {
        y=emplacement_vide(T13,Ta,Tb);
        pos=QUEL_INDICE(y,T13);
        for(i=0;i<3;i++)
        {
            if(T13[i]!=T13[pos] && cond_capturer(T13[i])==0) {c=T13[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T14,Ta,Tb)==2 && j==0 && emplacement_vide(T14,Ta,Tb)!='z')
    {
        y=emplacement_vide(T14,Ta,Tb);
        pos=QUEL_INDICE(y,T14);
        for(i=0;i<3;i++)
        {
            if(T0[i]!=T14[pos] && cond_capturer(T14[i])==0) {c=T14[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T15,Ta,Tb)==2 && j==0 && emplacement_vide(T15,Ta,Tb)!='z')
    {
        y=emplacement_vide(T15,Ta,Tb);
        pos=QUEL_INDICE(y,T15);
        for(i=0;i<3;i++)
        {
            if(T15[i]!=T15[pos] && cond_capturer(T15[i])==0) {c=T15[i];j++;}
        }
    }
    if(nbr_pion_alignerJ(T16,Ta,Tb)==2 && j==0 && emplacement_vide(T16,Ta,Tb)!='z')
    {
        y=emplacement_vide(T16,Ta,Tb);
        pos=QUEL_INDICE(y,T16);
        for(i=0;i<3;i++)
        {
            if(T16[i]!=T16[pos] && cond_capturer(T16[i])==0) {c=T16[i];j++;}
        }
    }
     if(j==0) capturer_MF(Ta,Tb);

     if(j!=0) capturer(c,Ta,Tb);

}

void MACHINE_MOYENNE(int a,char T[24],char T1[24])//----------------------la partie qui vous permet de jouer contre une machine moyenne----------------------
{
    char x,y,z,w;
    int i,q,pos,n,pos1;
    srand(time(NULL));
    q=rand()%2;
    joueur=q;
    H:
      if (joueur < 18+q)//-----------------------la phase de placement des pions------------------------------------
      {
            system("cls");
            plateau(a,T,T1);
            n = QUEL_JOUEUR(joueur);
            if(n==1)//-------------------------pour le joueur-------------------
            {
                H1:
                printf("\n\tentrer une position svp : ");//l'utilisateur doit enterer la position de son pion
                scanf("%s",&x);
                pos = QUEL_INDICE(x,T);
                if(T1[pos]=='+' || T1[pos]=='-')
                {
                    printf("\nchoisez une position desponible svp");
                    goto H1;
                }
                else
                {
                    T1[pos]='+';
                    joueur+=1;
                }
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==1)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                         J1+=1;
                         T2[i]=3;
                         H2:
                         printf("\nchoisez un pion de votre adversaire: ");
                         scanf("%s",&w);
                         pos1=QUEL_INDICE(w,T);
                         if (T1[pos1]=='-' && cond_capturer(w)==0)
                         {
                             capturer(w,T,T1);
                             PionJoueurs(T1,T);
                         }
                         else
                         {
                             printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                             goto H2;
                         }
                     }
                }
            }
            if(n==2)//--------------------------pour la machine--------------------------------
            {
                x=attaquer(T,T1);
                if(x=='z')
                {
                   x=defense(T,T1);
                   if(x=='z') x=emplacement_machineF(T,T1);
                }
                pos = QUEL_INDICE(x,T);
                T1[pos]='-';
                joueur+=1;
                Sleep(1000);
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MM(T,T1);
                         PionJoueurs(T1,T);
                     }
                }
            }
      }
            if (joueur>17+q && nbrPionJ1(T1)>3 && QUEL_JOUEUR(joueur)==1)//------------------la phase de deplacement normal pour J1--------------------------------
            {
                system("cls");
                plateau(a,T,T1);
                if(Jeu_Blocker1(T,T1)==0)
                {
                    goto blockJ;
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                H3:
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto H3;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     H4:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto H3;
                     else
                        {
                           if (cond_deplacer(y,z,T,T1)==0)
                              {
                                  printf("\nil est impossible! SVP choisez une autre destination ! ");
                                  goto H4;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                      moulin(T1);
                      for(i=0;i<16;i++)
                        {
                           if (T2[i]==1)
                            {
                                system("cls");
                                plateau(a,T,T1);
                                Color(9,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                                J1+=1;
                                T2[i]=3;
                                H5:
                                printf("\nchoisez un pion de votre adversaire: ");
                                scanf("%s",&w);
                                pos1=QUEL_INDICE(w,T);
                                if (T1[pos1]=='-' && cond_capturer(w)==0)
                                 {
                                    capturer(w,T,T1);
                                 }
                               else
                                 {
                                    printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                    goto H5;
                                 }
                            }
                        }
                  }
            }
            if (joueur>17+q && nbrPionJ2(T1)>3 && QUEL_JOUEUR(joueur)==2)//------------------la phase de deplacement normal pour la machine--------------------------------
            {
                system("cls");
                plateau(a,T,T1);
                PionJoueurs(T1,T);
                if(Jeu_Blocker2(T,T1)==0)
                {
                    goto blockM;
                }
                y=pion_a_depl_MF(T,T1);
                z=destination_MF(y,T,T1);
                deplacer(y,z,T,T1);
                joueur+=1;
                Sleep(1000);
                PionJoueurs(T1,T);
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MM(T,T1);
                         PionJoueurs(T1,T);
                     }
                }



            }
            if (joueur>17+q && nbrPionJ1(T1)==3 && QUEL_JOUEUR(joueur)==1)//--------------------la phase de deplacement libre J1------------------------
            {

                system("cls");
                plateau(a,T,T1);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                H6:
                printf("\nchoisir le pion a deplacer: ");
                scanf("%s",&y);
                if(cond_pion(joueur,y,T,T1)==1)
                  {
                    printf("\nchoisez votre pion svp!");
                    goto H6;
                  }
                else if(cond_pion(joueur,y,T,T1)==0)
                  {
                     system("cls");
                     plateau(a,T,T1);
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t tapez ~z~ si vous voulez choisir un autre pion a deplacer :)");
                     H7:
                     printf("\nchoisir la destination du pion: ");
                     scanf("%s",&z);
                     if(z=='z') goto H6;
                     else
                        {
                           if (cond_depla_libre(z,T1,T)==1)
                              {
                                  printf("\ncette destination n'est pas libre ! SVP choisez une autre destination ! ");
                                  goto H7;
                              }
                           else
                              {
                                  deplacer(y,z,T,T1);
                              }
                           joueur+=1;
                        }
                     moulin(T1);
                     for(i=0;i<16;i++)
                        {
                            if (T2[i]==1)
                            {
                               system("cls");
                               plateau(a,T,T1);
                               Color(4,0); printf("\nBRAVOO!! Le joueur 1 a un moulin :)"); Color(15,0);
                               J2+=1;
                               T2[i]=3;
                               H8:
                               printf("\nchoisez un pion de votre adversaire: ");
                               scanf("%s",&w);
                               pos1 = QUEL_INDICE(w,T);
                               if (T1[pos1]=='-' && cond_capturer(w)==0)
                                {
                                   capturer(w,T,T1);
                                   a=1;
                                }
                              else
                                {
                                   printf("\nvous ne pouvez pas capturer ce pion :( ,choisez un autre svp");
                                   goto H8;
                                }
                             }
                         }
                  }
                  //joueur++;
            }
            if (joueur>17+q && nbrPionJ2(T1)==3 && QUEL_JOUEUR(joueur)==2)//--------------------la phase de deplacement libre M------------------------
            {

                system("cls");
                plateau(a,T,T1);
                PionJoueurs(T1,T);
                srand(time(NULL));
                y=Tm[rand()%3];
                z=defense(T,T1);
                if(z=='z')
                {
                    H9:
                    srand(time(NULL));
                    z=T[rand()%24];
                    if (cond_depla_libre(z,T1,T)==1) goto H9;
                    else
                    {
                        deplacer(y,z,T,T1);
                        joueur+=1;
                        Sleep(500);
                        PionJoueurs(T1,T);
                    }
                }
                if(z!='z')
                {
                    deplacer(y,z,T,T1);
                    joueur+=1;
                    Sleep(500);
                    PionJoueurs(T1,T);
                }
                moulin(T1);
                for(i=0;i<16;i++)
                {
                     if (T2[i]==2)
                     {
                         system("cls");
                         plateau(a,T,T1);
                         Color(9,0); printf("\n La machine a un moulin :)"); Color(15,0);
                         J2+=1;
                         T2[i]=3;
                         capturer_MM(T,T1);
                         PionJoueurs(T1,T);
                     }
                }


            }
            if ((joueur>17+q && nbrPionJ2(T1)==2))//---------------------la phase: J1 est le gagnant -----------------------
                  {
                      blockM:

                      system("cls");
                      Color(9,0);
                      printf("\t\t\t\t\t\t                              /                               \n");
                      printf("\t\t\t\t\t\t                          /////////                           \n");
                      printf("\t\t\t\t\t\t                         ////////*//                          \n");
                      printf("\t\t\t\t\t\t                      ///////////////                        \n");
                      printf("\t\t\t\t\t\t                     /////*/////////////                      \n");
                      printf("\t\t\t\t\t\t                  /////////////////////////                   \n");
                      Color(14,0); printf(" _                                ");printf("\t                      /////////////////////////////////               \n");
                      Color(14,0); printf("| |__    _ __   __ _  __   __  ___   ");printf("\t               .//////////,,//////////////////////////////////        \n");
                      Color(14,0); printf("| '_ \\  | '__| / _` | \\ \\ / / / _ \\  ");printf("\t         */////////////// ,&#&&& ,///////// &   &&& ///////////////  \n");
                      Color(14,0); printf("| |_) | | |   | (_| |  \\ V / | (_) | ");printf("\t         *//////////////  &&( &&&&  //////  &&&&&&&&&  //////////////   ");Color(14,0);printf("      _     __  \n");Color(9,0);
                      Color(14,0); printf("|_.__/  |_|    \\__,_|   \\_/   \\___/ ");printf("\t          //////////////   &&&&&&&   /////   @&&&&&&   //////////////   ");Color(14,0);printf("     | |   /_ | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t    ////////////,   .       ///////           /////////////     ");Color(14,0);printf("     | |    | |\n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t      ////////////,       //////////       *///////////       ");Color(14,0);printf("   _   | |    | | \n");Color(9,0);
                      Color(14,0);printf("\t\t\t\t\t\t       ///////////////////////////////////////////////          ");Color(14,0);printf("| |__| |    | | \n");Color(9,0);
                      printf("\t\t\t\t\t\t        /////////////////*///////////////////////////           ");Color(14,0);printf(" \\____/     |_|\n");Color(9,0);
                      printf("\t\t\t\t\t\t         ///////////////////////////////////////////          \n");
                      printf("\t\t\t\t\t\t          /////////*//////          //////////*,///           \n");
                      printf("\t\t\t\t\t\t          //////////////////      ////////////////            \n");
                      printf("\t\t\t\t\t\t          *//////////////////    /////////////////            \n");
                      printf("\t\t\t\t\t\t          ////////////////////  //////////////////            \n");
                      printf("\t\t\t\t\t\t          ///////////,////////////////////////////            \n");
                      printf("\t\t\t\t\t\t          /////////,///////////////////////////////           \n");
                      printf("\t\t\t\t\t\t           /////////                    //////////            ");
                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto H10;
                  }
                   if ((joueur>17+q && nbrPionJ1(T1)==2))                    //---------------------la phase: Machine est la gagnante -----------------------
                  {
                      blockJ:
                      system("cls");
                      Color(9,0);
                      printf("\t\t\t\t                                    ..,,,..                                    \n");
                      printf("\t\t\t\t                           *///////**********////////.                          \n");
                      printf("\t\t\t\t                      */////****,... ..........,******////.                     \n");
                      printf("\t\t\t\t                   ////****...........................****////                  \n");
                      printf("\t\t\t\t                ///****. ................................,***///*               \n");
                      printf("\t\t\t\t             .//****........................................,***///             \n");
                      printf("\t\t\t\t            //****.............................................***///           \n");
                      printf("\t\t\t\t          ///***................................................,***//,         \n");
                      Color(14,0);printf("\t\t\t\t         //****,.,,,........................................,,,..,***///        \n");
                      printf("\t\t\t\t        //****,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,***///       \n");
                      printf("\t\t\t\t       //****,,,,,,,,,,,,,,      ,,,,,,,,,,,,,,,      ,,,,,,,,,,,,,,***///      \n");
                      printf("\t\t\t\t      //****,,,,,,,,,,,,,*        ,***********,        ,,,,,,,,,,,,,****//      \n");
                      printf("\t\t\t\t      //******************        *************        ******************//     \n");
                      printf("\t\t\t\t     ./*********************   ******************    ********************//     \n");
                      printf("\t\t\t\t     ./******************************************************************//     \n");
                      printf("\t\t\t\t     .//*****************************************************************//     \n");
                      Color(9,0);printf("\t\t\t\t      //**************************             **************************//     \n");
                      printf("\t\t\t\t      //**********************     **********/     *********************//      \n");
                      printf("\t\t\t\t       //******************    *******************   ******************//*      \n");
                      printf("\t\t\t\t        //***************   *************************  ***************///       \n");
                      printf("\t\t\t\t         //*************  *****************************  ************//*        \n");
                      printf("\t\t\t\t          *//******************************************************//.         \n");
                      printf("\t\t\t\t            ///***************************************************//*           \n");
                      printf("\t\t\t\t              ///**********************************************////             \n");
                      printf("\t\t\t\t                *///*****************************************///.               \n");
                      printf("\t\t\t\t                   *///**********************************////,                  \n");
                      printf("\t\t\t\t                       /////*************************////*                      \n");
                      printf("\t\t\t\t                            *//////////**/*/////////,                           \n");


                      Color(15,0);
                      for(i=0;i<16;i++) T2[i]=0;
                      printf("\n\n\ntapez ~e~ si vous voulez rejouer :): ");
                      getch();
                      goto H10;
                  }

    goto H;
    H10:
    printf("by");


}


















