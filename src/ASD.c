/**
 * @file
 * @brief Algorytmy i struktury danych
 *
 */
#include "ASD.h"

void init_Stos(Stos* s, int rozmiar)
{
	s->d = (int*)malloc(sizeof(int)*rozmiar);
	s->rozmiar = rozmiar;
	s->gora = 0;
}

void push_Stos(Stos* s, int x)
{
	s->gora+=1;
	if(s->gora>=s->rozmiar) exit(1); 
	s->d[s->gora]=x;
}

int pop_Stos(Stos* s)
{
	if(s->gora==0) exit(1);
	return s->d[s->gora--];
}

void init_Kolejka(Kolejka* k, int rozmiar)
{
	k->d = (int*)malloc(sizeof(int)*rozmiar);
	k->rozmiar = rozmiar;
	k->poczatek = 0;
	k->koniec = 0;
}

void push_Kolejka(Kolejka* k, int x)
{
	k->d[k->koniec]=x;
	if(k->koniec==k->rozmiar-1) k->koniec = 0;
	else k->koniec++; 
}

int pop_Kolejka(Kolejka* k)
{
	int temp = k->d[k->poczatek];
	if(k->poczatek==k->rozmiar-1) k->poczatek = 0;
	else k->poczatek++;
	return temp;
}


/**
 * @brief Wymienia wartości dwóch argumentów w jednym miejscu.
 * 
 * @param[in, out] A Wskaźnik wartości pierwszej
 * @param[in, out] B Wskaźnik wartości drugiej
 * 
 */
void wymien(int* A, int* B)

{
    *A = *A ^ *B;
    *B = *A ^ *B;
    *A = *A ^ *B;
}

/**
 * @brief Zarezerwuje miejsce w pamięci dla łańcuchu liczb całkowitych
 * 
 * @details Zarezerwuje miejsce w pamięci dla łańcuchu liczb 
 *          całkowitych o długosci N, i zwraca adres początkowy nowo
 *          zarezerwowanego miejsca.
 * 
 * @param N Długość łańcuchu A
 * 
 * @return Adres początkowy nowo zarezerwowanego miejsca
 *
 */
int* zarezerwuj(int N)

{
    return (int*) malloc(sizeof(int)*N);
}

/**
 * @brief Kopiuje zawartość łańcuchu liczb całkowytych A do B.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[out] B Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A oraz łańcuhu B
 * 
 */
void kopiuj(int* A, int* B, int N)

{
    for(int i=0;i<N; i++) B[i]=A[i];
}

/**
 * @brief Wypełnia łańcuh liczb całkowitych A losowymi liczbami.
 * 
 * @details Wypełnia łańcuh liczb całkowitych A o długości N losowymi 
 *          liczbami ze zakresu <MIN;MAX>.
 * 
 * @param[out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * @param[in] MIN Najmniejsza wartość co może się pojawić
 * @param[in] MAX Największa wartość co może się pojawić
 * 
 */
void uzupelnij_losowo(int* A, int N, int MIN, int MAX)

{
    for(int i=0;i<N;i++)
    {
        A[i] = rand()%(MAX-MIN+1)+MIN;
    }
}

/**
 * Wypisze na ekran elementy łańcuchu liczb całkowitych.
 * 
 * @param[in] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * 
 */
void drukuj_lancuch(int* A, int N)

{
    for(int i=0;i<N;i++)
    {
        printf("%3d", A[i]);
    }
    printf("\n");
}

/**
 * @brief Sortowanie przez wstawianie elementów łańcuchu liczb 
 *        całowitych.
 * 
 * @details Posortuje elementy łańcuchu liczb całowitych A o długości 
 *          N w jednym miejscu.
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu A
 * 
 */
void sortowanie_przez_wstawianie(int* A, int N)

{
    int i, j, klucz;
    for(j=1; j<N; j++)
    {
        klucz = A[j];
        // wstawianie A[j] do posortowanej tablicy A[0..j-1]
        i=j-1;
        while((i>=0) && (A[i]>klucz))
        {
            A[i+1] = A[i];
            i--;			
        }
        A[i+1]=klucz;
    }
}

/**
 * @brief Sortowanie grzebieniowe elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A od 
 *          elementu nr P do elementu nr R w jednym miejscu. 
 *
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] R Indeks elementu końcowego
 * 
 */
void sortowanie_grzebieniowe(int* A, int P, int R)

{
    if(P<R)
    {
        int Q = (P+R)/2;
        sortowanie_grzebieniowe(A, P, Q);
        sortowanie_grzebieniowe(A, Q+1, R);
        sortowanie_grzebieniowe_grzeb(A,P,Q,R);
    }
}

/**
 * @brief Funkcja pomocnicza do sortowania grzebieniowego.
 * 
 * @details Posortuje łańcuch liczb całowitych A od elementu nr P do
 *          elementu numer R w jednym miejscu. 
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] Q Indeks elementu środkowego
 * @param[in] R Indeks elementu początkowego
 * 
 */
void sortowanie_grzebieniowe_grzeb(int* A, int P, int Q, int R)

{
    int n1 = Q - P + 1;
    int n2 = R - Q;
    int* l=(int*)malloc(sizeof(int)*(n1+1));
    int* r=(int*)malloc(sizeof(int)*(n2+1));
    for(int i=0; i<n1; i++)
    {
        l[i] = A[P+i];
    }
    for(int j=0; j<n2; j++)
    {
        r[j] = A[Q+j+1];
    }
    l[n1]=INT_MAX;
    r[n2]=INT_MAX;
    int i=0;
    int j=0;
    for(int k = P; k<=R; k++)
    {
        if(l[i]<=r[j])
        {
            A[k] = l[i++];
        } else 
        {
            A[k] = r[j++];
        }
    }
    free(l);
    free(r);
}

/**
 * @brief Sortowanie bąbelkowe elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementy łańcuchu liczb całowitych A o długości 
 *          N w jednym miejscu.
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu
 * 
 */
void sortowanie_babelkowe(int* A, int N)

{
    for(int i=0; i<N; i++)
    {
        for(int j=N-1; j>i; j--)
        {
            if(A[j]<A[j-1])
            {
                wymien(&A[j-1], &A[j]);
            }
        }
    }
}

/**
 * @brief Sortowanie szybkie elementów łańcuchu liczb całowitych.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A od 
 *          elementu nr P do elementu nr R w jednym miejscu. 
 *
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks elementu początkowego
 * @param[in] R Indeks elementu końcowego
 * 
 */
void sortowanie_szybkie(int* A, int P, int R)

{
    if(P<R)
    {
        int Q = sortowanie_szybkie_podziel(A, P, R);
        sortowanie_szybkie(A, P, Q);
        sortowanie_szybkie(A, Q+1, R);
    }
}

/**
 * @brief Funkcja pomocnicza do sortowania szybkiego.
 * 
 * @details Elementy łańcuchu liczb całkowitych A zostaną permutowane
 *          w taki sposób, że (∀i∈[P;Q])(∀j∈[Q;R]) (A[i]≤A[j]).
 * 
 * @param[in, out] A Łańcuch liczb całkowitych
 * @param[in] P Indeks pierwszego elementu
 * @param[in] R Indeks ostatniego elementu
 * 
 * @return Q: indeks elementu łancuchu A który jest większy lub równe
 *         od każdego elementu o mniejszym indeksu, oraz mniejszy od
 *         każdego elementu o większym indeksu.
 * 
 */
int sortowanie_szybkie_podziel(int* A, int P, int R)

{
    int i=P-1;
    int j=R+1;
    while(1)
    {
        do j--; while(A[j]>A[P]);
        do i++; while(A[i]<A[P]);
        if(i<j) wymien(&A[i], &A[j]);
        else return j;
    }
}


/**
 * @brief Sortowanie przez zliczanie elementów łańcuchu liczb 
 *        całowitych o ograniczonej wartości 0<=A[0..N]<=MAX.
 * 
 * @details Posortuje elementów łańcuchu liczb całowitych A o 
 *          ograniczonej wartości 0<=A[0..N]<=MAX. 
 *
 * @param[in] A Łańcuch liczb całkowitych
 * @param[out] B Łańcuch liczb całkowitych
 * @param[in] N Długość łańcuchu
 * @param[in] MAX górne ograniczenie wartości A[i]
 * 
 */
void sortowanie_przez_zliczanie(int* A, int* B, int N, int MAX)
{
    int* C=zarezerwuj(K+1);
    for(int i=0;i<=K;i++)
    {
        C[i]=0;
    }
    for(int j=0; j<N; j++)
    {
        C[A[j]]++;
    }
    for(int i=0;i<=K;i++)
    {
        C[i] += C[i-1];
    }
    for(int j=N-1; j>=0; j--)
    {
        B[--C[A[j]]] = A[j];
    }
}