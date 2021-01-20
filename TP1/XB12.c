/******************************************************************************

EXERCICE XB 12 : fonction max1(int x) qui retourne la longueur de
la plus grande suite de 1 consécutifs dans le mot binaire x.
UNIQUEMENT AVEC DES OPERATEURS BITWISES

*******************************************************************************/

#include <stdio.h>

int max1(long int x)
{
    unsigned int res = 0; /* Longueur de la plus longue séquence du mot*/
    unsigned int buff = 0; /* Mémoire */

    /*On right shift le mot pour comparer chaque bit avec %1*/
    while(x > 0)
    {
        if( (x&1) == 1)
        {
            buff++;
            if(buff>res)
                res = buff;
        }
        else
            buff=0;

        x = x >> 1;
    }
    return res;   
}

int main()
{
    long int n = 0b0111100111110;
    printf("Longueur de la plus grande suite de 1 du mot donné : %d\n",max1(n)); //Doit rendre 5

    return 0;
}
