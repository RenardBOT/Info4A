/******************************************************************************

EXERCICE XB 12 : fonction max1(int x) qui retourne la longueur de
la plus grande suite de 1 consécutifs dans le mot binaire x.
UNIQUEMENT AVEC DES OPERATEURS BITWISES

*******************************************************************************/

#include <stdio.h>

unsigned int max1(int x)
{
    unsigned int res = 0; /* Longueur du plus long mot*/
    unsigned int buff = 0; /* Mémoire */
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
    unsigned int n = 011011100111110101
    printf("Longueur de la plus grande suite de 1 du mot donné : %d",max1(n)) //Doit rendre 5

    return 0;
}