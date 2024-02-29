#include <stdio.h>
#include"Addition.h"
#include"Multiplication.h"

int main()
{
    int opp;
    int a,b;
    int result;
    printf("CHOISISEZ PARMIS LES OPTIONS SUIVANTES :\n Tapez 1 pour produit \n Tapez 2 pour la somme\n Tapez 3 pour la division \n Tapez 4 pour la soustraction \n ");
    printf ("Entrez l'identiffiant de l'operation à effectuer : ");
    scanf("%d",&opp);

    while (opp<=0 || opp>=4)
    {

    printf("L'entrée est invalide !\n  S'il vous plait CHOISISEZ PARMIS LES OPTIONS SUIVANTES :\n ");
    printf("Tapez 1 pour produit \n Tapez 2 pour la somme\n Tapez 3 pour la division \n Tapez 4 pour la soustraction \n ");
    printf ("Entrez l'operation à effectuer : ");
    scanf("%d",&opp);

    } 
    

    if (opp == 1)
    {
    
    printf("Entrer le 1e chiffre : ");
    scanf("%d",&a);

    printf("Entrer le 2e chiffre : ");
    scanf("%d",&b);

    result = PRODUCT(a,b);

    printf("Le résultat de le produit est : %d", result);

    }

    else if (opp == 2)

    {

    printf("Entrer le 1e chiffre : ");
    scanf("%d",&a);

    printf("Entrer le 2e chiffre : ");
    scanf("%d",&b);

    result = SOMME(a,b);

    printf("Le résultat de la somme est : %d", result);
 
    }

 /* else if (opp == 3)

    {

    printf("Entrer le 1e chiffre : ");
    scanf("%d",&a);

    printf("Entrer le 2e chiffre : ");
    scanf("%d",&b);

    result = DIFFERNCE(a,b);

    printf("Le résultat de la difference est : %d", result);
 
    }
  
  else

    {

    printf("Entrer le 1e chiffre : ");
    scanf("%d",&a);

    printf("Entrer le 2e chiffre : ");
    scanf("%d",&b);

    result = DIVISION(a,b);

    printf("Le résultat de la division est : %d", result);
 
    }


    */
    
    return 0;
}