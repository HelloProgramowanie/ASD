#include "Statyczny_Stos.h"

void init_Statyczny_Stos(Statyczny_Stos* S, int rozmiar)
{
	S->d = (int*)malloc(sizeof(int)*rozmiar);
	S->rozmiar = rozmiar;
	S->gora = 0;
}

void push_Statyczny_Stos(Statyczny_Stos* S, int X)
{
	S->gora+=1;
	if(S->gora>=S->rozmiar) exit(1); 
	S->d[S->gora]=X;
}

int pop_Statyczny_Stos(Statyczny_Stos* S)
{
	if(S->gora==0) exit(1);
	return S->d[S->gora--];
}
