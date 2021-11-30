#include <stdio.h>
#include "ASD.h"

int main(){
	Stos s;
	init_Stos(&s, 8);
	push_Stos(&s,1);
	push_Stos(&s,2);
	push_Stos(&s,3);
	printf("%d ",pop_Stos(&s));
	printf("%d\n",pop_Stos(&s));
	return 0;
}