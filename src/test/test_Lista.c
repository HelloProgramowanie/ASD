/**
 * @example
 */
#include "Lista.h"
#include <stdio.h>

int main(){
	Lista l;
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Inicjalizacja pustej listy.\n");
	init_Lista(&l);
	drukuj_Lista(&l);

	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Dodaje 5 elementow do poczatku:\n");
	for(int i=0;i<5;i++){
		push_Lista(&l, i);
		drukuj_Lista(&l);
	}

	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Dodaje 3 elementy do konca:\n");
	for(int i=5;i<8;i++){
		push_back_Lista(&l, i);
		drukuj_Lista(&l);
	}

	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Zabieram 3 elementy od poczatku:\n");
	drukuj_Lista(&l);
	for(int i=0;i<3;i++){
		int x=pop_Lista(&l);
		printf("  Zwrocony element: %d\n", x);
		printf("Pozostalo: ");
		drukuj_Lista(&l);
	}

	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Zabieram 5 elementow od konca:\n");
	drukuj_Lista(&l);
	for(int i=0;i<5;i++){
		int x=pop_back_Lista(&l);
		printf("  Zwrocony element: %d\n", x);
		printf("Pozostalo: ");
		drukuj_Lista(&l);
	}
		
	return 0;
}