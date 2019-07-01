#include<stdio.h>

main()
{
	char *ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
	char *tens[]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	char *teens[]={"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	int n,k=0,c=0,a[10],i;
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
		printf("%s ",teens[a[k]]);
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
