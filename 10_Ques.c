#include<stdio.h>
#include<stdlib.h>

int main()
{

	int * arr;
	int i,val,index,ch;
	arr = (int *) malloc (sizeof(int)*10);
	//inputing first 3 values into the array
	*(arr+0) =1;
	*(arr+1) =2;
	*(arr+2) =3;

	for(i=0; i<10; i++)
	{
		if(i>=3)
			*(arr+i) = 0;
	}
	for(i=0; i<10; i++)
		printf("[%d] ---> %d\n",i,*(arr+i));
	while(1)
	{
		printf("Enter the choice:\n1.Insert\n0.Exit\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("Enter the value you want to insert into the array:\n");
				scanf("%d",&val);
				printf("Enter the position:\n");
				scanf("%d",&index);
				for(i = 8; i>=index;i--)
					*(arr+(i+1)) = *(arr+i);
				*(arr+index) = val;
				for(i=0; i<10; i++)
					printf("[%d] ---> %d\n",i,*(arr+i));
				break;
			case 0:
				printf("EXIT SUCCESS\n");
				return(EXIT_SUCCESS);

		}
	}

}

