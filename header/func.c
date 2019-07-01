#include"header.h"
int add(int k, int l){
	printf("x2=%p\n",&x);
	return k+l;
}
int sub(int k, int l){
	if(k>l)
		return k-l;
	else
		return l-k;
}
