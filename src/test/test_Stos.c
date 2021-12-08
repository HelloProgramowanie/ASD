/**
 * @example
 */
#include "Stos.h"
#include "stdio.h"

int main(){
	Stos s;
	printf("Inicjalizacja stosu.\n");
	init_Stos(&s);
	printf("Dodawanie 1 do stosu.\n");
	push_Stos(&s,1);
	printf("Dodawanie 2 do stosu.\n");
	push_Stos(&s,2);
	printf("Dodawanie 3 do stosu.\n");
	push_Stos(&s,3);
	printf("Zabranie elementu ze stosu: %d\n",pop_Stos(&s));
	printf("Zabranie elementu ze stosu: %d\n",pop_Stos(&s));
	return 0;
}