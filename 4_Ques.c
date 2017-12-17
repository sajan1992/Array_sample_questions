#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * arr;
	int i,index = 0;
	arr = (int *) malloc (sizeof(int)*10);
	printf("Enter the elemnet of the arrray\n");
	for(i=0; i<10; i++)
		scanf("%d",(arr+i));
	printf("Entered element in the Array are:\n");
	for(i=0; i<9;i++)
	{
			if(*(arr+index) < *(arr+(i+1)))
				index = i+1;
	}
	for(i=0; i<10;i++)
	{
			if(index == i)
				printf("[%d] <---Largest\n",*(arr+i));
			else
				printf("[%d] \n",*(arr+i));
	}
		       
	printf("\n");
	
}
