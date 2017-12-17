#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * arr;
	int i,avg;
	arr = (int *) malloc (sizeof(int)*10);
	printf("Enter the elemnet of the arrray\n");
	for(i=0; i<10; i++)
		scanf("%d",(arr+i));
	printf("The Average of entered elemnts are :\n");
	for(i=0; i<10;i++)
	{
		avg = avg + *(arr+i);
		if(i<9)
		printf("[%d] + ",*(arr+i));
		else
		printf("[%d] = ",*(arr+i));
	}
	printf("[%d] \nAverag of the element of the array =  [%d] ",avg,avg/10);
	printf("\n");
	
}
