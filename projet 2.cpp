#include<stdio.h>
#include<string.h>
#include<conio.h>

// DEFINITION DES STRUCTURES://
 
typedef struct {
	
int num;
char nom[50],descriptif[50];
float prixa,prixv;	
} medicament;

typedef struct {
	
int num;
char nom[50],prenom[50],adresse[50];	
}client;

typedef struct{
	
int j,m,a;
}date;

typedef struct{
	
 date date_vente;
 int  nVente;
 int  nClient;
 int nMedicament;
}vente ;
    
main(){           // DEBUT DU MAIN : //
	
printf("\n\n ----- DEBUT DU PROGRAMME ----- \n");

// DECLARATION DES VARIABLES://  

medicament m[1000];
client c[1000];
vente v[1000];
int i,j,k;
int nb_medi,nb_client,nb_vente,choix;
int rNumber=0,crNumber=0,vrNumber=0;
int trouve;
int num_recherche;
int R;  // le nombre de valeurs saisit par l'utilisateur://

         // LE MENU A AFFICHER: //

printf ("\n ~~~~~~ MENU principale ~~~~~~ \n");
printf("\n (1) ---> Ajouter un medicament: \n");
printf("\n (2) ---> Modifier un medicament: \n");
printf("\n (3) ---> Supprimer un medicament: \n");
printf("\n (4) ---> Affiher un medicament: \n");
printf("\n (5) ---> Ajouter un client: \n");
printf("\n (6) ---> Modifier un client: \n");
printf("\n (7) ---> Supprimer un client: \n");
printf("\n (8) ---> Afficher un client: \n");
printf("\n (9) ---> Ajouter une vente: \n");
printf("\n (10) ---> Modifier une vente: \n");
printf("\n (11) ---> Supprimer une vente: \n");
printf("\n (12) ---> Afficher une vente: \n");
printf("\n (13) ---> Quitter le programme: \n");
do
  {
	
do{
           printf("\n\n ---> Entrer votre choix : ");
           scanf("%d",&choix);
           if ( choix <1 || choix > 13 )
           printf(" *** LE CHOIX SAISI EST INVALIDE !!! *** \n");
           }while ( choix <1 || choix > 13 );
           

switch(choix){
	                        // procedure d'ajout pour ce qui concerne les medicaments//:
	                        
case 1:  {                /* le bloc du code  qui permet d'ajouter un merdicament ou plusieurs
                                       ( La saisit se fait par l'utilisateur ):  */ 
                                       
                     printf("\n\t\t\t\t**bienvenue a la partie reservee aux medicaments**: \n\t\t\t\t");
                     printf("\n\n -----> l'Ajout d'un medicament <----- \n");
                     
                     
                     printf("\n\t *entrer le nombre de medicaments que voulez-vous ajouter:");
                     scanf("%d",&nb_medi);
                     
                     for(i=0;i<nb_medi;i++)
					 {
       do
          {
          	                printf("\n\t\t -donner les informations du medicament numero %d",i+1);
					 		printf("\n\t - entrer le numero du medicament %d:",i+1);
					 		scanf("%d",&m[rNumber].num);
					for ( i = 0 , trouve = 0 ; i<rNumber && trouve == 0 ; i++ )
					 		{
					 	    	if (m[rNumber].num == m[i].num )
                                     trouve=1;
							 }
							 
							 if(trouve==1)
							 printf("\t *** VEUILLZ REESSAYER LE NUMERO SAISI EXISTE DEJA !!! *** ");
						 }while( trouve == 1 );
						 fflush(stdin);
						 
					
                        printf("\n\t - Entrer le nom du medicament : ");
                        gets(m[rNumber].nom);
                        printf("\n\t - Entrer le descriptif du medicament : ");
                        gets(m[rNumber].descriptif);
                        
                        printf("\n\t - Entrer le prix d'achat du medicament: ");
                        scanf("%f",&m[rNumber].prixa);
                        printf("\n\t - entrer le prix de vente du medicament:");
                        scanf("%f",&m[rNumber].prixv);
                        rNumber++;
                        
                       printf("\n\t     $ le medicament souhaite est ajoute avec succes $");
					        }
					        
                       break;}
                   
                       
        
case 2:  {                 // procedure de la modification des medicaments://:
                        /* le bloc du code  qui permet de modifier un medicament à partir du numero saisi par l'utilisateur: */

	                     if(rNumber==0){
	                     	printf("\n veuillez reessayer Pas de medicament a modifier!!");
	                     	
						 }       
						 else{
						 
			                printf("\n\t\t **bienvenue à la partie reservee aux medicaments**: \n\t\t");
                            printf("\n\n -----> la modification d'un medicament: <----- \n");
                            printf("\n\t *entrer le num du medicament a modifier:");
                            scanf("%d",&num_recherche);
                     
                     
                    
					      for ( i = 0 , trouve = 0 ; i<rNumber && trouve == 0 ; i++ )
					 		{
					 	    	if (num_recherche == m[i].num ){
								
                                     trouve=1;
                                     k=i;
                                      }        
						}
							 if(trouve==1){
							 
						     fflush(stdin);
						 
                             printf("\n\t - Entrer le nouveau nom du medicament : ");
                             scanf("%s",&m[k].nom);
                             fflush(stdin);
                             printf("\n\t - Entrer le nouveau descriptif du medicament : ");
                             scanf("%s",&m[k].descriptif);
                             printf("\n\t - Entrer le nouveau prix d'achat du medicament: ");
                             scanf("%f",&m[k].prixa);
                             printf("\n\t - entrer le nouveau prix de vente du medicament:");
                             scanf("%f",&m[k].prixv);
                             fflush(stdin);
                              printf("\n\t     $ le medicament souhaite est modifiee avec succes $");}
                         else
                       {
                       	 printf("Le medicament de num %d n'existe pas",num_recherche);
					   }
					     }
					
                  break;}
					   	   
					   
					   
            
   case 3 :        {              // procedure de la supression d'un medicament//:
                             /* le bloc du code  qui permet de supprimer un medicament à partir du numero saisi par l'utilisateur :*/
                        if(rNumber==0){
	                     	printf("\n veuillez reessayer Pas de medicament a supprimer!!");
	                     	
						 }       
						 else{
    
                           
                         printf("\n\t\t **bienvenue à la partie reservee aux medicaments**: \n\t\t");
                         printf("\n\n -----> Suppression d'un medicament <----- \n");
            
                         printf("\n\t - Entrer le numero du medicament a supprimer: ");
                         scanf("%d",&num_recherche);
                         for( i = 0 , trouve = 0 ; i<rNumber && trouve == 0 ; i++ )
                         {
                              if (num_recherche == m[i].num )
                           {
                            trouve = 1 ;
                            
                               for ( j = i ; j<rNumber-1 ; j++ )
                         {
                                 m[j] = m[j+1];
                         }
                           printf("\n\t $ medicament supprime avec succes $ ");
                           rNumber--;
                           }
                         }
                             if ( trouve == 0 )
                          printf(" \n *** VEUILLEZ REESAYER LE NUMERO SAISI NE CORRESPOND A AUCUN MEDICAMENT !!! \n***");}
                        
            break; }    // fin break//
       
                       
case 4 :   {              // procedure de la recherche d'un medicament//:
                     /* le bloc du code  qui permet de rechercher (afficher) un medicament  à partir du numero saisi par l'utilisateur :*/

                     if(rNumber==0)
					 {
                     	
	                         	printf("\n veuillez reessayer Pas de medicament a afficher:");
	                     	
						 }       
						    else {
    
                             printf("\n\t\t **bienvenue à la partie reservee aux medicaments**: \n\t\t");
                             printf("\n\n -----> Affichage d'un medicament: <----- \n");
                       
                             printf("\n\t - Entrer le numero du medicament à afficher: ");
                             scanf("%d",&num_recherche);
                        
            for( i = 0 , trouve = 0 ; i<rNumber && trouve == 0 ; i++ )
            {
                 if (num_recherche == m[i].num )
                 {
                     trouve = 1 ;
                     printf("\n ---> medicament %d : ",m[i].num);
                     
                            printf("\n\t - nom du medicament : %s ",m[i].nom);
                            printf("\n\t - descriptif du medicament : %s ",m[i].descriptif);
                            printf("\n\t - prix d'achat du medicament : %f ",m[i].prixa);
                            printf("\n\t - prix de vente du medicament: %f ",m[i].prixv);
                     
                     
                }
            }
            if ( trouve == 0 )
            printf(" \n *** Le numero SAISI NE CORRESPOND A AUCUN medicament !!! \n***");}
            break;}
            
case 5:      {           // PROCEDURE D'AJOUT pour tout ce qui concerne les clients : //

                       /* le bloc du code  qui permet d'ajouter un client ou plusieurs
                                       ( La saisit se fait par l'utilisateur ):  */ 
                                       
                     printf("\n\t\t **bienvenue à la partie reservee aux clients**: \n\t\t");
                     printf("\n\n -----> l'Ajout d'un client <----- \n");
                     
                     
                     printf("\nentrer le nombre du client que voulez-vous ajouter:");
                     scanf("%d",&nb_client);
                     
                     for(i=0;i<nb_client;i++)
					 {
       do
          {
					 		printf("\n\t - entrer le numero du client %d:",i+1);
					 		scanf("%d",&c[crNumber].num);
					for ( i = 0 , trouve = 0 ; i<crNumber && trouve == 0 ; i++ )
					 		{
					 	    	if (c[crNumber].num == c[i].num )
                                     trouve=1;
							 }
							 
							 if(trouve==1)
							 printf("\t *** veuillez reesayer Le numero SAISI EXISTE DEJA !!! *** ");
						 }while( trouve == 1 );
						 fflush(stdin);
						 
                        printf("\n\t - Entrer le nom du client : ");
                        gets(c[crNumber].nom);
                        printf("\n\t - Entrer le prenom du client : ");
                        gets(c[crNumber].prenom);
                        
                        printf("\n\t - Entrer l'adresse du client: ");
                        scanf("%s",&c[crNumber].adresse);
                        fflush(stdin);
                        crNumber++;
                        
                       printf("\n\t  $ le client souhaite est AJOUTEE avec succes $");
				}
                       break;}
                       
case 6:  {   
	                                 // procedure de la modification//:
	                                 /* le bloc du code  qui permet de modifier un client à partir du numero saisi par l'utilisateur: */
	                                 
	                                 if(crNumber==0){ 
	                     	printf("\n veuillez reessayer Pas de client a modifier:");
	                     	
						 }       
						 else{
						 
			                printf("\n\t\t\t **bienvenue à la partie reservee aux clients**: \n\t\t\t");
                            printf("\n\n -----> la modification d'un client: <----- \n");
                            printf("\n\t entrer le numero du medicament a modifier:");
                            scanf("%d",&num_recherche);
                     
					      for ( i = 0 , trouve = 0 ; i<crNumber && trouve == 0 ; i++ )
					 		{
					 	    	if (num_recherche == c[i].num ){
								
                                     trouve=1;
                                     k=i;
                                      }        
						}
							 if(trouve==1){
							 
						     fflush(stdin);
						 
                             printf("\n\t - Entrer le nouveau nom du client : ");
                             scanf("%s",&c[k].nom);
                             fflush(stdin);
                             printf("\n\t - Entrer le nouveau prenom du client : ");
                             scanf("%s",&c[k].prenom);
                             printf("\n\t - Entrer le nouveau prix d'achat du client: ");
                             scanf("%s",&c[k].adresse);
                             
                             fflush(stdin);
                              printf("\n\t     $ le client souhaite est modifiee avec succes $");}
                         else
                       {
                       	 printf("Le client de num %d n'existe pas",num_recherche);
					   }
					     }
					
                  break;}
					   	   
	                                 
	                 

case 7:  {

                                    // procedure de la supression d'un client //:
                                      /* le bloc du code  qui permet de supprimer un client à partir du numero saisi par l'utilisateur */
                                      
                            if(crNumber==0){
	                     	printf("\n veuillez reessayer Pas de client a supprimer!");
	                     	
						 }       
						 else{
    
                          printf("\n\t\t **bienvenue à la partie reservee aux clients**: \n\t\t");
                          printf("\n\n -----> Suppression d'un client <----- \n");
            
                           printf("\n\t - Entrer le numero du client à supprimer: ");
                           scanf("%d",&num_recherche);
                         for( i = 0 , trouve = 0 ; i<crNumber && trouve == 0 ; i++ )
                         {
                               if (num_recherche == c[i].num )
                            {
                            trouve = 1 ;
                                    for ( j = i ; j<crNumber-1 ; j++ )
                                {
                                  c[j] = c[j+1];
                                      }
                                  printf("\n\t $ client supprime avec succes $ ");
                                  crNumber--;                                   //reduire la taille du tableau apres la suppression://
                                }
                         }
                          if ( trouve == 0 )
                           printf(" \n *** VEUILLEZ REESAYER  LE NUMERO SAISI NE CORRESPOND A AUCUN CLIENT !!! \n***");}
            
        break;}
            
case 8:{
	               // procedure de la recherche d'un client //:
	                /* le bloc du code  qui permet de rechercher (afficher) un client  à partir du numero saisi par l'utilisateur. */
	                
	               	        if(crNumber==0){
	                     	printf("\n veuillez reessayer Pas de client a afficher!");
	                     	
						 }       
						 else{
    
                       printf("\n\t\t\t\t **bienvenue à la partie reservee aux clients**: \n\t\t\t\t");
                       printf("\n\n -----> Affichage d'un client <----- \n");
                       
                       printf("\n\t - Entrer le numero du client à afficher: ");
                        scanf("%d",&num_recherche);
                        
            for( i = 0 , trouve = 0 ; i<crNumber && trouve == 0 ; i++ )
            {
                 if (num_recherche == c[i].num )
                 {
                            trouve = 1 ;
                            printf("\n --->   client  %d : ",c[i].num);
                            printf("\n\t - nom du client : %s ",c[i].nom);
                            printf("\n\t - prenom du client : %s ",c[i].prenom);
                            printf("\n\t - l'adresse du client : %f ",c[i].adresse);
                     
                }
            }
                         if ( trouve == 0 )
                             printf(" \n *** LE NUMERO SAISI NE CORRESPOND A AUCUN client !!! \n***");}
        break;}
            
case 9:   {
	
                   /* le bloc du code  qui permet d'ajouter une vente ou plusieurs
                                       ( La saisit se fait par l'utilisateur ).  */ 
                                       
                     printf("\n\t\t\t\t **bienvenue à la partie reservee aux clients**: \n\t\t\t\t");
                     printf("\n\n -----> l'Ajout d'une vente <----- \n");
                     
                     
                     printf("\n*entrer le nombre de ventes que voulez-vous ajouter:");
                     scanf("%d",&nb_vente);
                     
                     for(i=0;i<nb_vente;i++)
					 {
       do
          {
					 		printf("\n\t - entrer le numero du vente %d:",i+1);
					 		scanf("%d",&v[vrNumber].nVente);
					for ( i = 0 , trouve = 0 ; i<vrNumber && trouve == 0 ; i++ )
					 		{
					 	    	if (v[vrNumber].nVente == v[i].nVente )
                                     trouve=1;
							 }
							 
							 if(trouve==1)
							 printf("\t *** VEUILLEZ REESAYER LE NUMERO SAISI EXISTE DEJA !!! *** ");
						 }while( trouve == 1 );
						 fflush(stdin);
						 
                        printf("\n\t - Entrer le numero de client de cette vente : ");
                        scanf("%d",&v[vrNumber].nClient);
                    
                        printf("\n\t - Entrer le numero de medicament de cette vente: ");
                        scanf("%f",&v[vrNumber].nMedicament);
                        do{
						
                        printf("\n\t - Entrer la date du vente ( Jour / Mois / Annee ): ");
                        R = scanf("%d/%d/%d",&v[vrNumber].date_vente.j,&v[vrNumber].date_vente.m,&v[vrNumber].date_vente.a);
                        if(R != 3)
                        printf ("\n la date saisie est invalide!!");
                      }while( R != 3);
                        vrNumber++;
                        
                       printf("\n\t  $ la vente souhaite est AJOUTEE avec succes $ ");
					}
                       break;}
                       
                       
case 10:{
                   	                    // procedure de la modification//:
                	                 //* le bloc du code  qui permet de modifier une vente à partir du numero saisi par l'utilisateur: *//
                	 
                		  if(vrNumber==0){
	                     	printf("\n veuillez reeasayer Pas de vente a modifier pour l'instant':");
	                     	
						 }       
						 else{
	                    
					      printf("\n\t\t\t\t **bienvenue à la partie reservee aux ventes**: \n\t\t\t\t");
                          printf("\n\n -----> la modification d'une vente <----- \n");
                          
                          printf("\n\t entrer le numero du vente a modifier:");
                          scanf("%d",&num_recherche);
                     
                     
                    
					     for ( i = 0 , trouve = 0 ; i<vrNumber && trouve == 0 ; i++ )
					 		  {
					 	    	if (num_recherche == v[i].nVente )
                                     trouve=1;
                                     k=i;
							  }
							 
							   if(trouve==1)
							   {
							   
							   
					
						       fflush(stdin);
						 
                               printf("\n\t - Entrer le nouveau numero de client de cette vente : ");
                               scanf("%d",&v[k].nClient);
                               printf("\n\t - Entrer le nouveau numero de medicament de cette vente : ");
                               scanf("%d",&v[k].nMedicament);
                               fflush(stdin);
                               do{
							   
                               printf("\n\t - Entrer la nouvelle date du vente ( Jour / Mois / Annee ): ");
                                R = scanf("%d/%d/%d",&v[k].date_vente.j,&v[k].date_vente.m,&v[k].date_vente.a);
                                if(R != 3)
                                printf("\n la date saisit est invalide!!");
                            }while (R != 3);
                        
                        
                               printf("\n\t     $ la vente souhaite est modifiee avec succes $");
							   }
							   else 
							   { printf(" veuillez reessayer le client de num %d n'existe pas",num_recherche);
							   }
					    }
        break;}
					   	   
case 11:{
	
					   	   	// procedure de la supression d'une vente //:
                     /* le bloc du code  qui permet de supprimer une vente à partir du numero saisi par l'utilisateur */
					   	   	if(vrNumber==0){
	                     	printf("\n DESOLE PAS DE VENTE A SUPPRIMER POUR LE MOMENT!");
	                     	
						    }       
						    else{
    
                            printf("\n\t\t **bienvenue à la partie reservee aux ventes**: \n\t\t");
                            printf("\n\n -----> Suppression d'une vente <----- \n");
            
                            printf("\n\t - Entrer le numero du vente à supprimer: ");
                            scanf("%d",&num_recherche);
                            for( i = 0 , trouve = 0 ; i<vrNumber && trouve == 0 ; i++ )
                            {
                            if (num_recherche == v[i].nVente )
                            {
                              trouve = 1 ;
                                 for ( j = i ; j<vrNumber-1 ; j++ )
                             {
                                v[j] = v[j+1];
                            }
                            printf("\n\t $ la vente est SUPPRIMEE avec succes $ ");
                            vrNumber--;
                            }
                        }
                            if ( trouve == 0 )
                            printf(" \n *** VEUILLEZ REEASSAYER LE NUMERO SAISI NE CORRESPOND A AUCUNE VENTE !!! \n***");
                        }
             break;}
            
       
case 12:{
					   	   		// procedure de la recherche d'une vente //:
					   	   		 /* le bloc du code  qui permet de rechercher (afficher) une vente  à partir du numero saisi par l'utilisateur */
					   	   		
					   	   if(vrNumber==0){
	                     	printf("\n veuilez reessayer Pas de vente a afficher!");
	                     	
						 }       
						 else{
    
                          printf("\n\t\t **bienvenue à la partie reservee aux ventes**: \n\t\t");
                          printf("\n\n -----> Affichage d'une vente <----- \n");
                       
                          printf("\n\t - Entrer le numero du vente à afficher: ");
                          scanf("%d",&num_recherche);
                        
                         for( i = 0 , trouve = 0 ; i<vrNumber && trouve == 0 ; i++ )
                         {
                           if (num_recherche == v[i].nVente )
                         {
                         trouve = 1 ;
                         printf("\n ---> vente %d : ",v[i].nVente);
                         printf("\n\t - numero du client : %f ",v[i].nClient);
                         printf("\n\t - numero du medicament: %f ",v[i].nMedicament);
                         printf("\n\t - Date du vente : %d / %d /%d ",v[i].date_vente.j,v[i].date_vente.m,v[i].date_vente.a);

                         }
                    }
                         if ( trouve == 0 )
                         printf(" \n *** LE NUMERO SAISI NE CORRESPOND A AUCUNE VENTE!!! \n***");}
        break;}
        
        
default :{
	
	break;}
		
         	
                     }    // fin switch //
                	
}
while( choix != 13 );
printf("\n\n ----- FIN DU PROGRAMME ----- ");
getch();
}


