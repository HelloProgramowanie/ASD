#include <stdio.h>
#include "ASD.h"

int main(){
	Stos s;
	printf("Inicjalizacja Stosu.\n");
	init_Stos(&s, 8);
	printf("Dodawanie 1 do Stosu.\n");
	push_Stos(&s,1);
	printf("Dodawanie 2 do Stosu.\n");
	push_Stos(&s,2);
	printf("Dodawanie 3 do Stosu.\n");
	push_Stos(&s,3);
	printf("Zabranie elementu ze Stosu: %d\n",pop_Stos(&s));
	printf("Zabranie elementu ze Stosu: %d\n",pop_Stos(&s));
	return 0;
}