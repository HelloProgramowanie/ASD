 #include "Lista.h"

void init_Lista(Lista* L)
{
	L->rozmiar = 0;
	L->pierwszy = 0;
	L->ostatni = 0;
}

void status_Lista(Lista* L){
	printf(" Aktualny rozmiar listy: %d.\n", L->rozmiar);
	if(L->rozmiar>0){
		printf(" Aktualny początek listy: %d.\n", L->pierwszy->dana);
		printf(" Aktualny koniec listy: %d.\n", L->ostatni->dana);
	}
}

void drukuj_Lista(Lista* L){
	Element_Listy* E = L->pierwszy;
	printf("Lista[%d] = { ",L->rozmiar);
	if(L->rozmiar>0)
	do{
		printf("%d ",E->dana);
		E = E->nastepny;
	} while(E!=0);
	printf("}\n");
}

void push_Lista(Lista* L, int X)
{
	Element_Listy* E = (Element_Listy*)malloc(sizeof(Element_Listy));
	if(E==0){
		printf("[Critical Error] Brak pamieci");
		exit(1);
	}
	E->dana = X;
	E->poprzedni = 0;
	E->nastepny = L->pierwszy;
	L->pierwszy = E;
	if(L->rozmiar == 0) L->ostatni = E;
	else E->nastepny->poprzedni = E;
	L->rozmiar++;
}

void push_back_Lista(Lista* L, int X)
{
	Element_Listy* E = (Element_Listy*)malloc(sizeof(Element_Listy));
	if(E==0){
		printf("[Critical Error] Brak pamieci");
		exit(1);
	}
	E->dana = X;
	E->nastepny = 0;
	E->poprzedni = L->ostatni;
	L->ostatni = E;
	if(L->rozmiar == 0) L->pierwszy = E;
	else E->poprzedni->nastepny = E;
	L->rozmiar++;
}

int pop_Lista(Lista* L)
{
	Element_Listy* temp =L->pierwszy;
	if(temp==0) {
		printf("[Critical Error] Lista underflow");
		exit(1);
	}
	L->pierwszy=temp->nastepny;
	if(L->rozmiar>1) L->pierwszy->poprzedni = 0;
	L->rozmiar--;
	if(L->rozmiar==0){L->ostatni = 0;}
	int X = temp->dana;
	free(temp);
	return X;
}

int pop_back_Lista(Lista* L)
{
	Element_Listy* temp=L->ostatni;
	if(temp==0) {
		printf("[Critical Error] Lista underflow");
		exit(1);
	}
	L->ostatni=temp->poprzedni;
	if(L->rozmiar>1) L->ostatni->nastepny = 0;
	L->rozmiar--;
	if(L->rozmiar==0){L->pierwszy = 0;}
	int X = temp->dana;
	free(temp);
	return X;
}
