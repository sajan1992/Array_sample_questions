#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r1,c1,r2,c2,i,j,k=0,m=0;
	int * arr1;
	int * arr2;
	int * arr3;
	printf("Matrix A:[R1]:[C1]\nR1 = ");
	scanf("%d",&r1);
	printf("C1 = ");
	scanf("%d",&c1);
	printf("Matrix B:[R2]:[C2]\nR2 = ");
	scanf("%d",&r2);
	printf("C2 = ");
	scanf("%d",&c2);
	arr1 = (int *) malloc (sizeof(int)*(r1*c1));
	arr2 = (int *) malloc (sizeof(int)*(r2*c2));
	arr3 = (int *) malloc (sizeof(int)*(r1*c2));

	if(c1 != r2)
		printf("Multiplication not possible!\n");
	else
	{
		printf("Enter the Element for Matrix A:\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
				scanf("%d",(arr1+(i*c1)+j));
		}
		
		printf("Enter the Element for Matrix B:\n");
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
				scanf("%d",(arr2+(j*r2)+i));
		}
		printf("\n");
		printf("Entered Element of Matrix A:\n");
		for(i=0; i<r1; i++)
		{	
			printf("\n");
			for(j=0; j<c1; j++)
				printf("[%d] ",*(arr1+(i*c1)+j));
		}

		printf("\n");
		printf("Entered Element of Matrix B:\n");
		for(i=0; i<r2; i++)
		{
			printf("\n");
			for(j=0; j<c2; j++)
				printf("[%d] ",*(arr2+(j*r2)+i));
		}

		printf("\n");
		for(i=0,k=0; i<r1,k<r2; i++,k++)
		{
			for(j=0,m=0; j<c1,m<c2; j++,m++)
			{
				//k = k+ (*(arr1+(i*c1)+j) * *(arr2+(j*c2)+i));
				printf(" %d-->%d\n",((i*c1)+j),((k*c2)+m));
			}
			//	*(arr3+(i*r1)+m) = k;
			//	m++;
		}
		printf("Multiplication of Matrix A (%dx%d) and Matrix B (%dX%d) = Matrix C (%dX%d)\n",r1,c1,r2,c2,r1,c2);
		for(i=0; i<r1; i++)
		{	
			printf("\n");
			for(j=0; j<c2; j++)
				printf("[%d] ",*(arr3+(i*r1)+j));
		}
	}
	return 0;
}
