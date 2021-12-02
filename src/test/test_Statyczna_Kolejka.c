/**
 * @example
 */
#include "Statyczna_Kolejka.h"
#include <stdio.h>

int main(){
	Statyczna_Kolejka k;
	printf("Inicjalizacja Kolejki.\n");
	init_Statyczna_Kolejka(&k, 8);
	printf("Dodawanie 1 do Kolejki.\n");
	push_Statyczna_Kolejka(&k,1);
	printf("Dodawanie 2 do Kolejki.\n");
	push_Statyczna_Kolejka(&k,2);
	printf("Dodawanie 3 do Kolejki.\n");
	push_Statyczna_Kolejka(&k,3);
	printf("Zabranie elementu z Kolejki: %d \n",pop_Statyczna_Kolejka(&k));
	printf("Zabranie elementu z Kolejki: %d \n",pop_Statyczna_Kolejka(&k));
	return 0;
}