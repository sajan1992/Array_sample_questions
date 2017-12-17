#include<stdio.h>
#include<stdlib.h>

int main()
{

	int i,k=0;
	int * arr1;
	int * arr2;
	int * arr3;

	arr1 = (int *) malloc (sizeof(int)*5);
	arr2 = (int *) malloc (sizeof(int)*5);
	arr3 = (int *) malloc (sizeof(int)*10);

	printf("Enter the element for the Array#1:\n");
	for(i=0;i<5;i++)
		scanf("%d",(arr1+i));
	printf("Enter the element for the Array#2:\n");
	for(i=0;i<5;i++)
		scanf("%d",(arr2+i));
	printf("Merging Array#1 and Array#2 ---> Array#3\n");
	for(i=0;i<10;i++)
	{
		if(i<5)
			*(arr3+i) = *(arr1+i);
		else
		{
			*(arr3+i) = *(arr2+k);
			k++;
		}
	}
	printf("\n\nArray#1\t\t Array#2\t Array#3\n");
	for(i=0; i<10; i++)
	{	
		if(i<5)
			printf("[%d] \t\t [%d] \t\t [%d]\n",*(arr1+i),*(arr2+i),*(arr3+i));
		else
			printf(" \t\t                 [%d]\n",*(arr3+i));
	}
}
