#include "ASD.h"

int main(){
	Kolejka k;
	printf("Inicjalizacja Koleki.\n");
	init_Kolejka(&k, 8);
	printf("Dodawanie 1 do Koleki.\n");
	push_Kolejka(&k,1);
	printf("Dodawanie 2 do Koleki.\n");
	push_Kolejka(&k,2);
	printf("Dodawanie 3 do Koleki.\n");
	push_Kolejka(&k,3);
	printf("Zabranie elementu z Koleki: %d \n",pop_Kolejka(&k));
	printf("Zabranie elementu z Koleki: %d \n",pop_Kolejka(&k));
	return 0;
}