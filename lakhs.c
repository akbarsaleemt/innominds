#include<stdio.h>

main()
{
	char *ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *tens[]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	int n,k=0,c=0,a[10],i,temp;
	printf("Enter a nunber\n");
	scanf("%d",&n);
	while(n)
	{ 
		a[k++]=n%10;
		c++;
		n=n/10;    
	}
	for(i=0;i<k;i++)
		printf("%d",a[i]);

	printf("\ncount =%d\n",c);
	k--;

       if(c==6)
       {
		if(a[k]==1){
           	 temp=a[k]*10+a[k-1];
                printf("%s lakh",ones[temp]);
		k=k-2;c=c-2;
		}
		else{
		printf("%s ",tens[a[k]]);
		k--;c--;
		}
	}
       if(c==5)
       {
		if(a[k]==1){
           	 temp=a[k]*10+a[k-1];
                printf("%s thousand",ones[temp]);
		k=k-2;c=c-2;
		}
		else{
		printf("%s ",tens[a[k]]);
		k--;c--;
		}
       
	}
	if(c==4)
	{
		printf("%s thousand ",ones[a[k]]);
		k--;
               c--;

	}
       if(c==3)
        {
		if(a[k]!=0)
		printf("%s hundred ",ones[a[k]]);
		k--;
                c--;
        }
       if(c==2)
       {
           if(a[k]!=1 && a[k-1]!=0)
             printf("%s",tens[a[k]]);
	    if(a[k]==1 && a[k-1]==0)
		printf("%s ",tens[a[k]]);
	     if(a[k]==1 && a[k-1]!=0){
		temp=a[k]*10+a[k-1];
		printf("%s ",ones[temp]);
		c=0;
		}
 		k--;
		c--;
       }
      if(c==1)
        {
		printf("%s\n",ones[a[k]]);
	}
}
