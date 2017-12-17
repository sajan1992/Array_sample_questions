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
	printf("Actua Matrix \t\t Reverse Matrix\n");
	for(i=0; i<=9;i++)
		printf("[%d] --> [%d] \t\t  [%d] --> [%d]\n",i,*(arr+i),(9-i),*(arr+(9-i)));
		       
	printf("\n");
	
}
