#include "Kolejka.h"

void init_Kolejka(Kolejka* K){
	init_Lista(K);
}

void push_Kolejka(Kolejka* K, int X){
	push_back_Lista(K, X);
}

int pop_Kolejka(Kolejka* K){
	return pop_Lista(K);
}
