#include "ASD.h"

int main(){
	Kolejka k;
	printf("Inicjalizacja Kolejki.\n");
	init_Kolejka(&k, 8);
	printf("Dodawanie 1 do Kolejki.\n");
	push_Kolejka(&k,1);
	printf("Dodawanie 2 do Kolejki.\n");
	push_Kolejka(&k,2);
	printf("Dodawanie 3 do Kolejki.\n");
	push_Kolejka(&k,3);
	printf("Zabranie elementu z Kolejki: %d \n",pop_Kolejka(&k));
	printf("Zabranie elementu z Kolejki: %d \n",pop_Kolejka(&k));
	return 0;
}