#include "ASD.h"

int main(){
	Kolejka k;
	init_Kolejka(&k, 8);
	push_Kolejka(&k,1);
	push_Kolejka(&k,2);
	push_Kolejka(&k,3);
	printf("%d ",pop_Kolejka(&k));
	printf("%d \n",pop_Kolejka(&k));
	return 0;
}