#include "ASD.h"
#include "sortowanie.h"

int main(){
    srand((unsigned int)time(NULL));

    int *t1=zarezerwuj(N);
    int *t2=zarezerwuj(N);

    uzupelnij_losowo(t1,N,MIN,MAX);

    printf("\nwygenerowany lancuch liczb calkowitych\n");
    drukuj_lancuch(t1,N);

    printf("\nsortowanie przez zliczanie\n");
    sortowanie_przez_zliczanie(t1, t2, N, MIN, MAX);

    drukuj_lancuch(t2,N);

    free(t1);
    free(t2);
	return 0;
}