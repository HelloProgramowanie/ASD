#include "Statyczny_Kopiec.h"

void init_Statyczny_Kopiec(Statyczny_Kopiec* K, int* A, int N)
{
    K->d = A;
    K->rozmiar = N;
    buduj_max_kopiec_Statyczny_Kopiec(K);
}

int rodzic_Statyczny_Kopiec(int i){
    return i/2;
}

int lewo_Statyczny_Kopiec(int i){
    return 2*i;
}

int prawo_Statyczny_Kopiec(int i){
    return 2*i+1;
}

void drukuj_Statyczny_Kopiec(Statyczny_Kopiec* K){
	int ilosc_poziomow = 0;
	int k = K->rozmiar;
	while(k > 1){k/=2; ilosc_poziomow++;}
	int j = 0;
	while(j<K->rozmiar){
		for(int l=0;l<((2<<(ilosc_poziomow-1))-1); l++) printf("  ");
		for(int i=0;(i<k)&&(j<K->rozmiar);i++){
			printf("%02d", K->d[j]);
			if(i!=k-1)for(int l=0;l<((2<<ilosc_poziomow)-1); l++) printf("  ");
			j++;
		}
		printf("\n");
		k*=2; 
		ilosc_poziomow--;
	}
}

void max_kopcuj_Statyczny_Kopiec(Statyczny_Kopiec* K, int i){
	int l=lewo_Statyczny_Kopiec(i);
	int p=prawo_Statyczny_Kopiec(i);
	int max;
	if(l<K->rozmiar && K->d[l] > K->d[i]){
		max = l;
	} else {
		max = i;
	}
	if(p<K->rozmiar && K->d[p] > K->d[max]){
		max = p;
	}
	if(max!=i){
		wymien(&(K->d[i]), &(K->d[max]));
		max_kopcuj_Statyczny_Kopiec(K, max);
	}
}

void buduj_max_kopiec_Statyczny_Kopiec(Statyczny_Kopiec* K){
    for(int i=K->rozmiar/2; i>=0; i--){
        max_kopcuj_Statyczny_Kopiec(K, i);
    }
}
