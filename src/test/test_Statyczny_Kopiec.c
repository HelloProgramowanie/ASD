/**
 * @example
 */
#include "Statyczny_Kopiec.h"

int main(){
    srand(time(0));
    int A[25];
    printf("Statyczny_Kopiec\n");
    for(int i=0; i<25;i++){
        A[i]=rand()%100;
    }
    drukuj_lancuch(A,25);
    Statyczny_Kopiec K;
    init_Statyczny_Kopiec(&K, A, 25);
    drukuj_Statyczny_Kopiec(&K);
    return 0;
}