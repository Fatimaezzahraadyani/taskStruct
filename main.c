#include <stdio.h>
#include <stdlib.h>
int choix, i,n,l=0;
//declaration des structures ****//
typedef struct {
    char rue[20];
    char ville[30];
    int code_postal;

}addresse;

typedef struct {
    char nom[10];
    int age ;
addresse localisation;
}personne;
//remplissage des donnees des personnes//
void remplir(personne p[],int n){
    n=l+n;
    for(int i=l;i<n;i++)
    {
        printf("****entrez les informations du personne num %d **** : \n",i+1);
        printf("donnez le nom : ");
        scanf("%s",p[i].nom);
        printf("donnez l'age : ");
        scanf("%d",&p[i].age);

        printf("donnez la localisation : \n");
        printf("rue : ");
        scanf("%s",p[i].localisation.rue);
        printf("ville : ");
        scanf("%s",p[i].localisation.ville);
        printf("code_postal : ");
        scanf("%d",&p[i].localisation.code_postal);
         l=i+1;
     }
}
//affichage des infos//
void affichage(personne p[],int n){


    for(int i=0;i<n;i++)
    {
        printf("***\n les informations du personne num %d : \n**", i+1);
        printf("le nom         : %s \n",p[i].nom);
        printf("l'age          : %d \n",p[i].age);
        printf("localisation   : \n");
        printf("la rue         : %s \n",p[i].localisation.rue);
        printf("la ville       : %s \n",p[i].localisation.ville);
        printf("le code postal : %d \n",p[i].localisation.code_postal);


     }
}
//Modification des infos//
void modif(personne p[],int n,int i){
    printf("entrer le némuro de personne a modifier: \n");
    scanf("%d", &i);
    printf("donnez le nom : ");
    scanf("%s",p[i-1].nom);
    printf("donnez l'age : ");
    scanf("%d",&p[i-1].age);

    printf("donnez la localisation : \n");
    printf("rue : ");
    scanf("%s",p[i-1].localisation.rue);
    printf("ville : ");
    scanf("%s",p[i-1].localisation.ville);
    printf("code_postal : ");
    scanf("%d",&p[i-1].localisation.code_postal);
}
//la suppression du infos d'un personne
void supprimer(personne p[], int n, int i){
      printf("entrer le némuro de personne a supprimer : \n");
      scanf("%d", &i);
    for (int i = i-1; i<n; i++){
		    	p[i]=p[i+1];

	    	}
	    	n--;
	    	l--;
		printf("La personne %d a ete supprimer\n",i);


    }

//choix des operations
int main(){
     printf("donnez le nombre de personnes que vous voulez : \n");
    scanf("%d", &n);
     personne p[n];
    do{
printf("****MENU****:\n");
printf("1.entre des informations  \n");
printf("2.afficher des informations  \n");
printf("3.modifier des informations  \n");
printf("4.suppprimer des informations  \n");
printf(">>>>>>entrer votre choix   \n");
scanf("%d", &choix);

switch (choix){
    case 1: printf("entre des informations \n");
    remplir(p,n);
    break;
    case 2: printf("afficher des informations \n");
    if(l==0){
        printf("il y a pas des informations merci de reeseyer \n");
    }else affichage(p,n);
    break;
    case 3: printf("modifier des informations \n");
     if(l==0){
        printf("il y a pas des informations merci de reeseyer \n");
    }
    else modif(p,n,i);
    break;
    case 4: printf("supprimer des informations \n");
     if(l==0){
        printf("il y a pas des informations merci de reeseyer \n");
    }
    else supprimer(p,n,i);
    break;
    default: printf("entrez un nombre depuis le menu afficher \n");
    break;
}
    }while (1);

return 0;

}
