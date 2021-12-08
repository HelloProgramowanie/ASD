/**
 * @example
 */
#include "Statyczny_Kopiec.h"
const int rozmiar = 63;
int main(){
    srand(time(0));
    int A[rozmiar];
    printf("Statyczny_Kopiec\n");
    for(int i=0; i<rozmiar;i++){
        A[i]=rand()%100;
    }
    drukuj_lancuch(A,rozmiar);
    Statyczny_Kopiec K;
    init_Statyczny_Kopiec(&K, A, rozmiar);
    drukuj_Statyczny_Kopiec(&K);
    return 0;
}