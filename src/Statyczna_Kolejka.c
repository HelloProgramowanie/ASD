 #include "Statyczna_Kolejka.h"

void init_Statyczna_Kolejka(Statyczna_Kolejka* K, int rozmiar)
{
	K->d = (int*)malloc(sizeof(int)*rozmiar);
	K->rozmiar = rozmiar;
	K->poczatek = 0;
	K->koniec = 0;
}

void push_Statyczna_Kolejka(Statyczna_Kolejka* K, int X)
{
	K->d[K->koniec]=X;
	if(K->koniec==K->rozmiar-1) K->koniec = 0;
	else K->koniec++; 
}

int pop_Statyczna_Kolejka(Statyczna_Kolejka* K)
{
	int temp = K->d[K->poczatek];
	if(K->poczatek==K->rozmiar-1) K->poczatek = 0;
	else K->poczatek++;
	return temp;
}
