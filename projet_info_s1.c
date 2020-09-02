#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<gmp.h>// librairie gmp


unsigned int affiche_premier(unsigned int prem)// prem est le nom de de la variable contenant les nombre premiers
{
    if(prem==1)
    {
        return 0;
    }
    if(prem==2)
        {
            printf("\n %u \n", prem);
            return 1;
        }
	else
	{
            for(int i=2;i<=prem/2;i++)
                {
                  if(prem%i==0)
                  {
                    return 0;
                  }
                }
            printf("\n %u \n", prem);
            return 1;
    }

}
void liste_premier()
{
    unsigned int i;
    mpz_t dernier_nbre;
    mpz_init(dernier_nbre); // initialise la variable dernier_nbre
	printf("Entrez un deuxieme un nombre:\n");
	gmp_scanf("%Zd",dernier_nbre);
	gmp_printf("\n La liste des nombres premiers de 1 a %Zd est : \n",dernier_nbre);/* gmp_scanf et gmp_printf sont des fonctions de libririe gmp
	qui realisent le même affichage que scanf et printf */

	for (i=1;mpz_cmp_ui(dernier_nbre,i)>0;i++)// la fonction mpz_cmp_ui permet de voir si dernier_nbre>i
        {
          affiche_premier(i);
        }
        mpz_clear(i);
}
// Ce code teste si un nombre est premier, il retourne 1 si c'est premier et 0 sinon
int EstPremier(int nombre){

  int premier; // premier est un booléen
  premier=1;
  if (nombre==2) premier=1;
  else {
    int i=2; // i est un diviseur
    while ( (nombre % i !=0) && (i<(int)sqrt(nombre))){ // un nombre est premier s'il n'admet pas de diviseur  inferieur à sa racine carré
                                                        // par exemple 9 est premier car il n'admet pas diviseur en dessous de 3 inclut et que 3 ne peut pas etre divisé
    i++;
    }
    if ((nombre % i) == 0) // si ce nombre admet un diviseur alors il n'est pas premier  par exemple 16 n'est pas premier car sa rarrine carré qui est 4 admet des diviseurs
      premier=0;
  }
  return premier; // retourne 1 si premier ou 0 si ce n'est pas premier
}

void inconnu(){

  int nb; int j=0;
  do
    {
      printf("donner un nombre > 2\n"); // S'execute au moins une fois jusqu'à ce que le nombre soit supérieur à 2
      scanf("%d",&nb);
    }
  while (nb <= 2 );
 int t[nb];
  int i=2;
  while(i<(nb-1))
    {
      int valeur=EstPremier(i);
      if (valeur)
	{

	  t[j]=i;
	  j++;
	}
      i++;
    }
    int k,l; // k et l sont des compteurs
      for ( k=0; k<j; k++)
	for ( l=k+1; l<=j; l++)
	  if (t[k]+t[l]==nb)
	    printf("%d = %d + %d \n",nb,t[k],t[l]);
    }

  int main()
  {
     inconnu();
     printf("\n ******************************** \n");
     liste_premier();
     return 0;
     getchar();

  }


