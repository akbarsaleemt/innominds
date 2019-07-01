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
				front=0;
				if(rear==-1|| rear < MAX){
					rear++;
					scanf("%d",&queue[rear]);
						}
				if(rear>=MAX){
					printf("queue is FULL\n");
						rear--;
				}
				break;
			case 2: 
				printf("calling pop\n");
				if(front !=-1 && front<MAX){
					
					printf("%d\n",queue[front]);
					front++;		
							}
				else if (front==rear)
					printf("queue underflow\n");
				else if(rear >=MAX)
					printf("queue overflow\n");
				break;
			case 3:
				printf("display queue elements\n");
				for(i=0;i<=rear;i++)
					printf("%d\n",queue[i]);
				break;
			case 4:return 0;
			default : 
				printf("enter correct choice\n");

		}
	}
}



