#include<stdio.h>
int main()
{
	int i,j,key;
	int arr[5];
	//input element into the array
	printf("Enter the element of array\n");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	//printing unsorted array
	printf("Unsorted Array are:\n");
	for(i=0;i<5;i++)
		printf("%d -> %d\n",i,arr[i]);
	//key is to be searched
	printf("Enter the key to be searched\n");
	scanf("%d",&key);
	//linearSearch begins
	for(i=0;i<5;i++)
	{
		if(key == arr[i])
		{
			printf("Element found at %d\n",i);
		}
	}
}
