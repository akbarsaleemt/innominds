#include"header.h"

int main()
{
	int ch,i;
	while(1){
		printf("enter choice\n 1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				printf("enter data to push\n");
				if(top==-1|| top < MAX){
					top++;
					scanf("%d",&stak[top]);
						}
				if(top>=MAX){
					printf("stack is FULL\n");
						top--;
				}
				break;
			case 2: 
				printf("calling pop\n");
				if(top !=-1 && top<MAX){
					printf("%d\n",stak[top]);
							top--;
							}
				else if (top==-1)
					printf("stack underflow\n");
				else if(top>=MAX)
					printf("stack overflow\n");
				break;
			case 3:
				printf("display satck elements\n");
				for(i=top;i>-1;i--)
					printf("%d\n",stak[i]);
				break;
			case 4:return 0;
			default : 
				printf("enter correct choice\n");

		}
	}
}



