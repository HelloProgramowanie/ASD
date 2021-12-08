#include "Stos.h"

void init_Stos(Stos* S){
	init_Lista(S);
}

void push_Stos(Stos* S, int X){
	push_back_Lista(S, X);
}

int pop_Stos(Stos* S){
	return pop_back_Lista(S);
}
