#include "ASD.h"
#include "sortowanie.h"

int main(){
    srand((unsigned int)time(NULL));

    int *t=zarezerwuj(N);

    uzupelnij_losowo(t,N,MIN,MAX);

    printf("\nwygenerowany lancuch liczb calkowitych\n");
    drukuj_lancuch(t,N);

    printf("\nsortowanie przez wstawianie\n");
    sortowanie_przez_wstawianie(t, N);

    drukuj_lancuch(t,N);

    free(t);
	return 0;
}