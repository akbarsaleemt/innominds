#include<stdio.h>
union byte4 {
          char byte[4];
          int numint;
          float numfloat;
  }; 
int main() {
	int a=0x01234567;
      union byte4 un;
      un.numint = a;
	int i;
 	 printf("before:\n");
      for (i=0;i<4;i++) 
          printf("%02X", un.byte[i]);
	printf("\n");
      // swap
      char c1 = un.byte[0];
      un.byte[0] = un.byte[3];
      un.byte[3] = c1;
      c1 = un.byte[1];
      un.byte[1] = un.byte[2];
      un.byte[2] = c1;
 	 printf("after:\n");
      for (i=0;i<4;i++) 
          printf("%02X",  un.byte[i]);
      printf("\n");
      return 0;
  }
