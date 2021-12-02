/**
 * @example
 */
#define _TEST_
#include "podstawowe.h"
#include "sortowanie.h"
#include "Statyczny_Kopiec.h"

int main(){
    srand((unsigned int)time(NULL));

    int *t=zarezerwuj(N);

    uzupelnij_losowo(t,N,MIN,MAX);

    printf("\nwygenerowany lancuch liczb calkowitych\n");
    drukuj_lancuch(t,N);

    printf("\nsortowanie przez kopcowawnie\n");
    sortowanie_przez_kopcowanie(t, N);

    drukuj_lancuch(t,N);

    free(t);
    return 0;
}