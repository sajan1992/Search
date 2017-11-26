#include<stdio.h>
int main()
{
	int i,beg,end,mid,key,j,c;
	int arr[5];
	//initializing variable
	beg=0;
	end=5;
	mid=(beg+end)/2;

	printf("Enter the Elements of Array\n");
	for (i=0;i<5;i++)
		scanf("%d",&arr[i]);

	printf("Unsorted Array list\n");
	for(i=0;i<5;i++)
		printf("%d -> %d\n",i,arr[i]);

	//first need to sort the array in order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[i])
			{
				c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
			}
		}
	}//sorting complete

	//printing the sorted array
	printf("Sorted Element of Array\n");
	for(i=0;i<5;i++)
		printf("%d -> %d\n",i,arr[i]);
	//input key to be searched
	printf("Enter the key to be searched\n");
	scanf("%d",&key);

	//binary search begins
	while(1)
	{
		if(key == arr[mid])
		{
			
			printf("The element is found at location at -> %d\n",mid+1);
			break;
		}
		if(key<arr[mid])
		{
		end = mid;
		mid = (beg+end)/2;
		}

		if(key>arr[mid])
		{
		beg = mid;
		mid = (beg+end)/2;
		}
	}

}	
