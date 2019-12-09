#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "myFunctions.h"
int main()
{
 int a;   int choix;
    char username[15];
    char password[12];
    login:
        system("cls");
    color(11,0);printf("°°°°°°°°°°°°°°°°°°°°\n");

    color(13,0);printf("Enter your username : ");
    color(15,0); scanf("%s",&username);

    color(11,0);printf("°°°°°°°°°°°°°°°°°°°°\n");

    color(13,0);printf("Enter your password : ");
    color(0,0); scanf("%s",&password);

    color(11,0);printf("°°°°°°°°°°°°°°°°°°°°\n\n");

    if(strcmp(username,"ofppt")==0)
        {
        if(strcmp(password,"123")==0)
        {
    int r,p;
    gotoxy(0,12);
    color(0,15);
    printf("\t\t\t loading ... \t\t");
    for (r=1; r<=20;r++)
    {
        for(p=0;p<=100000000;p++);
           color(15,0); printf("%c",177);
           color(15,0); printf("%c",177);

    }




  Menu:
      system("cls");
  color(11,0);
  printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    color(15,0);
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
              printf("°°°°");color(15,0);printf("                                                                       °°°°\n");
 color(15,0); printf("°°°°");color(10,0);printf("                  #####   ######  ######  ######  ######               ");  color(15,0);printf("°°°°\n");
 color(15,0); printf("°°°°");color(10,0);printf("                 ##   ##  ##      ##  ##  ##  ##    ##                 ");  color(15,0);printf("°°°°\n");
 color(15,0); printf("°°°°");color(10,0);printf("                 ##   ##  #####   #####   #####     ##                 ");  color(15,0);printf("°°°°\n");
 color(15,0); printf("°°°°");color(10,0);printf("                 ##   ##  ##      ##      ##        ##                 ");  color(15,0);printf("°°°°\n");
 color(15,0); printf("°°°°");color(10,0);printf("                  #####   ##      ##      ##        ##                 ");  color(15,0);printf("°°°°\n");
              printf("°°°°");color(15,0);printf("                                                                       °°°°\n");
 color(15,0); printf("°°°°"); color(0,15); printf(" Office de la Formation Professionnelle et de la Promotion du Travail  "); color(15,0); printf("°°°°\n");
  color(11,0);
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("        ");color(8,0);printf("      ");color(9,0);printf("         "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("    #   ");color(8,0);printf("  #   ");color(9,0);printf("  #      "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("  ## ## ");color(8,0);printf("## ## ");color(9,0);printf("## ##    "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf(" ##    ");color(8,0);printf("##    ");color(9,0);printf("##   ##   "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("##    ");color(8,0);printf("##    ");color(9,0);printf("##     ##   "); color(15,0); printf("           °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf(" ##    ");color(2,0);printf("##    ");color(8,0);printf("##");color(9,0); printf("   ##   ");color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("  ## ## ");color(8,0);printf("## ## ");color(9,0);printf("## ##    "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("    #   ");color(8,0);printf("  #   ");color(9,0);printf("  #      "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
color(15,0); printf("°°°°°°°°°°°°°°°°            ");color(2,0);printf("        ");color(8,0);printf("      ");color(9,0);printf("         "); color(15,0); printf("            °°°°°°°°°°°°°°°°\n");
  color(11,0);
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
  color(15,0);
  printf("°°°°°°°°°°°°°°°° 1 °°              The Timetables              °°°°°°°°°°°°°°°°\n");
  printf("°°°°°°°°°°°°°°°° 2 °°            Trainee Management            °°°°°°°°°°°°°°°°\n");

  printf("°°°°°°°°°°°°°°°° 3 °°                  Leave                   °°°°°°°°°°°°°°°°\n");
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
  color(11,0);
  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
  color(1,0); printf("1\t");
  color(2,0); printf("2\t");
color(3,0); printf("3\t");
color(4,0); printf("4\t");
color(5,0); printf("5\t");
color(6,0); printf("6\t");
color(7,0); printf("7\t");
color(8,0); printf("8\t");
color(9,0); printf("9\t");
color(10,0); printf("10\n");
color(11,0); printf("11\t");
color(12,0); printf("12\t");
color(13,0); printf("13\t");
color(14,0); printf("14\t");
color(15,0); printf("15\t");
color(0,15);
    printf("\nEnter your choice :");
color(15,0);    scanf("%d",&choix);

    switch(choix)
    {






    case 1:
        {
            char A[6];
            system("cls");
            filiere :

            color(0,15);
            printf("Enter the die :");
            color(15,0); scanf(" %s",&A);

            if (strcmp(A,"TDI")==0)
                {
                int x;
                color(0,12);
                printf("if you want the schedule of the first years type [1] ");
                printf("if you want the schedule of the second year type [2] ");
                printf(" :");
                 color(15,0);
                 scanf("%d",&x);


                if(x==1)
                   {
                       int GR;
                       Groupe:
                           system("cls");
                      color(0,15); printf("Enter the Group :");
                      color(15,0); scanf("%d",&GR);
                       switch(GR)
                       {


                   case 101:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    R:
    printf(" Press [1] to return to Menu u :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto R;
break ;
                    }




                     case 102:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    RR:
    printf(" Press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RR;
break ;
                         }


                     case 103:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    RRR:
    printf(" Press [1] to return to Menu  :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RRR;
break ;
                        }
                     case 104:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("    E/se      ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("     FR         ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("     PS        ");color(11,0);printf("°");color(15,0);printf("     POO     ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("      PE      ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("      PE        ");color(11,0);printf("°");color(15,0);printf("    UML       ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("     POO       ");color(11,0);printf("°");color(15,0);printf("     PE      ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("      EN      ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

RRRR:
    printf(" Press [1] to return to Menu  :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RRRR;
break ;
                        }
                     default :
                        {
                            int z;
                            erreur:
                        printf("| MISCONDUCT | press [1] to return to the Group :");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto erreur;

                        break ;
                        }
                       }

                }

                   else if (x==2)
                   {
                       int GR;
                      color(0,15); printf("Enter the group :");
                      color(15,0); scanf("%d",&GR);
                       switch(GR)
                       {


                   case 201:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
RRRT:
    printf(" Press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RRRT;
break ;
                    }




                     case 202:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
RRTR:
    printf(" Press [1] to return to Menu  :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RRTR;
break ;
                         }


                     case 203:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
RTRR:
    printf(" Press [1] to return to Menu  :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto RTRR;
break ;
                        }

                     default :
                        {
                        int z;
                            errur:
                        printf("| MISCONDUCT | press [1] to return to the Group :");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto errur;
                        break ;
                        }
                       }
                   }
                   else
                   {

                   }



                }
            else if (strcmp(A,"ATV")==0)
            {
            int x;
                color(0,12);
                printf("if you want the schedule of the first years type [1] ");
                printf("if you want the schedule of the second year type [2] ");
                printf(" :");
             color(15,0);   scanf("%d",&x);


                if(x==1)
                   {
                       int GR;
                     color(0,15);  printf("Enter the group:");
                      color(15,0); scanf("%d",&GR);
                       switch(GR)
                       {


                   case 101:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
TRRR:
    printf(" Press [1] to return to menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto TRRR;
break ;
                    }




                     case 102:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
TRR:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto TRR;
break ;
                         }


                     case 103:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
TR:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto TR;
break ;
                        }
                     case 104:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
M:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto M;
break ;
                        }
                     default :
                        {
                        int z;
                            errer:
                        printf("| MISCONDUCT | press [1] to return to the Group:");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto errer; break ;
                        }
                       }

                }

                   else if (x==2)
                   {
                       int GR;
                       printf("Enter the Group :");
                       scanf("%d",&GR);
                       switch(GR)
                       {


                   case 201:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
MM:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto MM;
break ;
                    }




                     case 202:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
MMM:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto MMM;
break ;
                         }


                     case 203:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
TT:
    printf(" press [1] to return to Menu:");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto TT;
break ;
                        }

                     default :
                        {
                        int z;
                            ereur:
                        printf("| MISCONDUCT | press [1] to return to the Group :");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto ereur;
                        break ;
                        }
                       }
                   }
                   else
                   {

                   }


            }


           else if  (strcmp(A,"TSC")==0)
           {int x;
                color(0,12);
                 printf("if you want the schedule of the first years type [1] ");
                printf("if you want the schedule of the second year type [2] ");
                printf(" :");
                color(15,0);scanf("%d",&x);


                if(x==1)
                   {
                       int GR;
                    color(0,15);   printf("Enter the Group :");
                     color(15,0);  scanf("%d",&GR);
                       switch(GR)
                       {


                   case 101:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
CC:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto CC;
break ;
                    }




                     case 102:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
FF:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto FF;
break ;
                         }


                     case 103:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
ZZ:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto ZZ;
break ;
                        }
                     case 104:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
w:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto w;
break ;
                        }
                     default :
                        {
                           int z;
                            erur:
                        printf("| MISCONDUCT | press [1] to return to the Group :");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto erur;                        break ;
                        }
                       }

                }

                   else if (x==2)
                   {
                       int GR;
                     color(15,0);  printf("Enter the Group :");
                       scanf("%d",&GR);
                       switch(GR)
                       {


                   case 201:
                    {






               color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
VV:
    printf(" press [1] to return to Menu:");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto VV;
break ;
                    }




                     case 202:
                         {
                             color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
GG:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto GG;
break ;
                         }


                     case 203:
                        {
                            color(11,0);
printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" les jours ");color(11,0);printf("°");color(15,0);printf("             le matin          ");color(11,0);printf("°");color(15,0);printf("          apres midi         ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); printf("           ");color(11,0);printf("°");color(15,0);printf("    SEANCE 1    ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2   ");color(11,0);printf("°");color(15,0);color(15,0);printf("    SEANCE 1   ");color(11,0);printf("°");color(15,0);printf("   SEANCE 2  ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°");color(15,0); printf(" LUNDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MARDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" MERCREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" JEUDI     ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" VENDREDI  ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°"); color(15,0);printf(" SAMEDI    ");color(11,0);printf("°");color(15,0);printf("                ");color(11,0);printf("°");color(15,0);printf("              ");color(11,0);printf("°");color(15,0);printf("               ");color(11,0);printf("°");color(15,0);printf("             ");color(11,0);printf("°\n");
printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
H:
    printf(" press [1] to return to Menu :");
    scanf("%d",&a);
    if (a==1)
        goto Menu;
    else
         goto H;
break ;
                        }

                     default :
                        {
int z;
                            rreur:
                        printf("| MISCONDUCT | press [1] to return to the Group :");
                        scanf("%d",&z);
                        if (z==1)
                           goto Groupe;
                        else
                            goto rreur;                        break ;
                        }
                       }



                }
                   else
                   {
                       color(0,12);
                   printf("| MISCONDUCT |");
                   }


           }
           else
           {
               color(6,0);
               printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
               color(6,0);printf("²"); color(15,4); printf(" This branch is not found "); color(6,0);printf("²\n");
               color(6,0);
               printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
               goto filiere;
           }


            break;
        }
    case 2:
        {
            int ch1;
            FILE *f;
             stagiaire s;
    int B;
    menu :
       system("cls");
        color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	color(11,0);
	printf("°°°°°°°°°°");color(15,0);printf("   MANAGEMENT TRAINEE        ");color(11,0);printf("°°°°°°°°°\n");
	color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

	printf("°°°°°°°");color(15,0);printf(" 1 "); color(11,0);printf("°°");color(15,0);printf("   Add a trainee           "); color(11,0);printf("°°°°°°°°°\n");

	color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

	printf("°°°°°°°");color(15,0);printf(" 2 "); color(11,0);printf("°°");color(15,0);printf("   Pin up                  "); color(11,0);printf("°°°°°°°°°\n");
   color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

	printf("°°°°°°°");color(15,0);printf(" 3 "); color(11,0);printf("°°");color(15,0);printf("   Supprission             "); color(11,0);printf("°°°°°°°°°\n");
    color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

	printf("°°°°°°°");color(15,0);printf(" 4 "); color(11,0);printf("°°");color(15,0);printf("   Research                "); color(11,0);printf("°°°°°°°°°\n");
    color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

	printf("°°°°°°°");color(15,0);printf(" 5 "); color(11,0);printf("°°");color(15,0);printf("   Main Menu               "); color(11,0);printf("°°°°°°°°°\n");
    color(11,0);
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
	color(0,15);
    printf(" Enter your choice :\n");
    color(15,0);
    scanf("%d",&ch1);
    system("cls");




switch(ch1)
{
    case 1 : { ajout(s,f);
    printf ("Press [1] to return to the Menu or press [0] to return to the main Menu :");
    scanf("%d",&B);
    if (B==1)
    {
        system("cls");
        goto menu;
    }
    else if (B == 0)
        {
        system("cls");
        goto Menu;
        }
    break; }
    case 2 : { affichage(s,f);

    printf ("Press [1] to return to the Menu or press [0] to return to the main Menu :");
    scanf("%d",&B);
    if (B==1)
    {
        system("cls");
        goto menu;
    }
    else if (B == 0)
        {
        system("cls");
        goto Menu;
        }
    break;}
    case 3 : { suppression(s,f);
   printf ("Press [1] to return to the Menu or press [0] to return to the main Menu :");
    scanf("%d",&B);
    if (B==1)
    {
        system("cls");
        goto menu;
    }
    else if (B == 0)
        {
        system("cls");
        goto Menu;
        }

    break;
    }
    case 4 :
        { recherche(s,f);
        printf ("Press [1] to return to the Menu or press [0] to return to the main Menu :");
    scanf("%d",&B);
    if (B==1)
    {
        system("cls");
        goto menu;
    }
    else if (B == 0)
        {
        system("cls");
        goto Menu;
        }
            break;
        }
    case 5:
        {
            goto Menu;
            break;
        }
    default :
        {
            break;
        }
}

            break;
        }
    default :
        {
            break;
        }
    }



        }
        else
            {
             color(12,0); printf("²²²²²²²²²²²²²²²²²²²²²²\n");
             color(12,0); printf("²²"); color(15,12);  printf("  wrong password  "); color(12,0); printf("²²\n");
             color(12,0); printf("²²²²²²²²²²²²²²²²²²²²²²\n");
             int a;
             color(0,15); printf("Press [1] to return to login : "); color(15,0);
             scanf("%d",&a);
             if (a==1)
                goto login;




        }
        }
        else
            {
                color(12,0); printf("²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
                color(12,0); printf("²²"); color(15,12); printf("  user doesn't exist  "); color(12,0); printf("²²\n");
                color(12,0); printf("²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
                int a;
              color(0,15); printf("press [1] to return to login : "); color(15,0);
             scanf("%d",&a);
             if (a==1)
                goto login;
        }

return 0;
}
