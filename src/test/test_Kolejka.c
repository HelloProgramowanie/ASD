/**
 * @example
 */
#include "Kolejka.h"
#include "stdio.h"

int main(){
	Kolejka k;
	printf("Inicjalizacja kolejki.\n");
	init_Kolejka(&k);
	printf("Dodawanie 1 do kolejki.\n");
	push_Kolejka(&k,1);
	printf("Dodawanie 2 do kolejki.\n");
	push_Kolejka(&k,2);
	printf("Dodawanie 3 do kolejki.\n");
	push_Kolejka(&k,3);
	printf("Zabranie elementu z kolejki: %d\n",pop_Kolejka(&k));
	printf("Zabranie elementu z kolejki: %d\n",pop_Kolejka(&k));
	return 0;
}