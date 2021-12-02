/**
 * @example
 */
#define _TEST_
#include "podstawowe.h"
#include "sortowanie.h"

int main(){
    srand((unsigned int)time(NULL));

    int *t=zarezerwuj(N);

    uzupelnij_losowo(t,N,MIN,MAX);

    printf("\nwygenerowany lancuch liczb calkowitych\n");
    drukuj_lancuch(t,N);

    printf("\nsortowanie szybkie\n");
    sortowanie_szybkie(t, 0, N-1);

    drukuj_lancuch(t,N);

    free(t);
	return 0;
}