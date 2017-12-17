#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * arr;
	int i,key;
	arr = (int *) malloc (sizeof(int)*10);
	printf("Enter the elemnet of the arrray\n");
	for(i=0; i<10; i++)
		scanf("%d",(arr+i));
	printf("Entered the Key element:\n");
		scanf("%d",&key);
	printf("\n");
	for(i=0; i<10;i++)
	{
			if(key == *(arr+i))
				printf("[%d] <---Key found at %d\n",*(arr+i),i);
			else
				printf("[%d] \n",*(arr+i));
	}
		       
	printf("\n");
	
}
