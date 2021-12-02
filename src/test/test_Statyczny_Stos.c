/**
 * @example
 */
#include "Statyczny_Stos.h"
#include "stdio.h"
int main(){
	Statyczny_Stos s;
	printf("Inicjalizacja stosu.\n");
	init_Statyczny_Stos(&s, 8);
	printf("Dodawanie 1 do stosu.\n");
	push_Statyczny_Stos(&s,1);
	printf("Dodawanie 2 do stosu.\n");
	push_Statyczny_Stos(&s,2);
	printf("Dodawanie 3 do stosu.\n");
	push_Statyczny_Stos(&s,3);
	printf("Zabranie elementu ze stosu: %d\n",pop_Statyczny_Stos(&s));
	printf("Zabranie elementu ze stosu: %d\n",pop_Statyczny_Stos(&s));
	return 0;
}