#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../header/algorytmy.h"


int main(){
    const int N=10; // dlugosc lancuchu
    const int MIN = 0;
    const int MAX = 99;
    srand((unsigned int)time(NULL));

    int *t=zarezerwuj(N);
    uzupelnij_losowo(t,N,MIN,MAX);
    int *a=zarezerwuj(N);
    int *b=zarezerwuj(N);
    int *c=zarezerwuj(N);
    int *d=zarezerwuj(N);
    int *e=zarezerwuj(N);
    kopiuj(t,a,N);
    kopiuj(t,b,N);
    kopiuj(t,c,N);
    kopiuj(t,d,N);

    printf("\nwygenerowany lancuch liczb calkowitych\n");
    drukuj_lancuch(t,N);
    printf("\nsortowanie przez wstawianie\n");
    sortowanie_przez_wstawianie(a, N);
    drukuj_lancuch(a,N);
    printf("\nsortowanie grzebieniowe\n");
    sortowanie_grzebieniowe(b, 0, N-1);
    drukuj_lancuch(b,N);
    printf("\nsortowanie babelkowe\n");
    sortowanie_babelkowe(c, N);
    drukuj_lancuch(c,N);
    printf("\nsortowanie szybkie\n");
    sortowanie_szybkie(d, 0, N-1);
    drukuj_lancuch(d,N);
    printf("\nsortowanie przez zliczanie\n");
    sortowanie_przez_zliczanie(t, e, N, MAX);
    drukuj_lancuch(e,N);
    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
    free(t);
    return 0;
}
