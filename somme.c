#include<stdio.h>
#include<stdlib.h>
#include<math.h>



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

  int main(){
    inconnu();
    return 0;
    getchar();

  }

