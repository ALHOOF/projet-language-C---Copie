typedef struct  {
                        int id ;
				 	  	char nom[10];
				 	  	char prenom[10];
				 		int groupe ;
				 		char filiere [6];


                 }stagiaire;





int fichier_vide(void)
 {
     FILE *f;
     stagiaire s;
     int a=0;
     f=fopen("stagiaire.txt","rt");
     if(f==NULL)
         printf("The file is not created yet");
     else
         {
            if(fread(&s,sizeof(s),1,f)<1)
                    a=1;
            else
                if(s.id==-1)
                    a=1;
         }
     fclose(f);
     return a;
 }


 void ajout(stagiaire s,FILE *f)
 {
     f=fopen("stagiaire.txt","at");
	 if(f==NULL)
            printf("The file is not created yet");

     else
     {
        getchar();


        printf("\n   Enter the trainee ID : ");
	    scanf("%d",&s.id);

	    printf("\n   Give the trainee last name : ");
	    scanf("%s",&s.nom);
	    printf("\n   Enter the trainee First name : ");
	    scanf("%s",&s.prenom);
	    printf("\n   Enter the trainee group : ");
	    scanf("%d",&s.groupe);
	    printf("\n   Enter trainee branch :");
	    scanf("%s",&s.filiere);
        if(fwrite(&s,sizeof(s),1,f)<1)
                printf(" The writing was not done ");
     }
     fclose(f);
 }



 void affichage(stagiaire s,FILE *f)
 {
    int compt=0;
    if(fichier_vide()==1)
	   printf("The file is empty\n");
    else
    {
      f=fopen("stagiaire.txt","rt");
	  if(f==NULL)
            printf("The file is not created yet");
      else
        {
            color(3,0);
            printf("\t\t|°²°²°²°²°²°²°²°²°²°²°²|\n");
            color(15,3);
            printf("\t\t  the list of trainees  \n");
            color(3,0);
            printf("\t\t|°²°²°²°²°²°²°²°²°²°²°²|\n\n\n");

            if(fread(&s,sizeof(s),1,f)<1)
            {
              color(0,6);
       	       printf("trainee %d \n",compt);
       	       color(15,0);
            }

            else
               while(feof(f)==0)
                     {
                        if(s.id!=-1)
                           {
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf(" ID           : %d \n",s.id);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Last Name     : %s \n",s.nom);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("First Name    : %s \n",s.prenom);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Group         : %d \n",s.groupe);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Branch        : %s \n",s.filiere);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

                              compt++;
                           }
                        if(fread(&s,sizeof(s),1,f)<1)

       	                  {
       	                      color(0,6);
       	                   printf("\n trainee %d \n",compt);
                            color(15,0);


       	                  }
       	                  color(2,0);  printf("\n²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");

                     }
        }
      fclose(f);
    }
    }




void suppression(stagiaire s,FILE *f)
 {
	FILE *sf;
	int a,trouve=1;
	if(fichier_vide()==1)
	   printf("The file is empty\n");
    else
    {
       f=fopen("stagiaire.txt","rt");
	   if(f==NULL)
           printf("The file is not created yet");
       else
       {
	      sf=fopen("clonestagiaire.txt","wt");
	      if(sf==NULL)
	         printf("insufficient memory\n");
          else
          {
             printf("\n Give the trainee id to delete:");
	         scanf("%d",&a);
	         if(fread(&s,sizeof(s),1,f)<1)
                printf("The file is not opened yet\n");
             else
             {
	            while(feof(f)==0)
                    {
                       if(s.id!=a)
                          if(fwrite(&s,sizeof(s),1,sf)<1)
                              printf("Don't write here\n");
                       if(s.id==a)
                          {
                             printf("The trainee has been removed \n");
                             trouve=0;
                          }
                       if(fread(&s,sizeof(s),1,f)<1 && feof(f)==0)
                          printf("The file is not opened yet\n");
                    }
             }
             if(trouve==1)
             {
                printf("This trainee does not exist\n");
             }

          }
       }
       fclose(f);
       remove("stagiaire.txt");
 	   fclose(sf);
 	   rename("clonestagiaire.txt","stagiaire.txt");
    }
     }





 void recherche(stagiaire s,FILE *f)
{
    int a,trouve=1;
    if(fichier_vide()==1)
	   printf("The file is empty\\n");
    else
    {
      f=fopen("stagiaire.txt","rt");
	  if(f==NULL)
             printf("The file is not created yet");
      else
      {
	     printf("\n   Enter the trainee ID :");
         scanf("%d",&a);
         if(fread(&s,sizeof(s),1,f)<1)
             printf("The file is not opened yet\n");
         else
         {
             while(feof(f)==0)
                 {
                     if(s.id==a && feof(f)==0)
                        {
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Last Name     : %s \n",s.nom);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("First Name    : %s \n",s.prenom);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Group         : %d \n",s.groupe);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        color(15,0);                             printf("Branch        : %s \n",s.filiere);
        color(3,0);                  printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");


                            trouve=0;
                        }
                     if(fread(&s,sizeof(s),1,f)<1 && feof(f)==0)
                         printf("The file is not opened yet\n");
                 }
         }
            if(trouve)
            printf("This trainee does not exist\n");
      }
      fclose(f);
    }
}



 void color(int t,int f)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,f*16+t);
}



void gotoxy (int x , int y)
{
    COORD coord;
    coord.X=x;
      coord.Y=y;

      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
