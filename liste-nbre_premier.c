#include <stdio.h>
#include <stdlib.h>
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
	printf("entrez un nombre:\n");
	gmp_scanf("%Zd",dernier_nbre);

	for (i=1;mpz_cmp_ui(dernier_nbre,i)>0;i=i+1)// la fonction mpz_cmp_ui permet de voir si dernier_nbre>i
        {
          affiche_premier(i);
        }
        mpz_clear(i);
}
int main()
{
  liste_premier();
  return 0;
}
