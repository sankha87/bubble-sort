// C program for implementation of Bubble sort
#include <stdio.h>
#include<conio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)				// A function to implement bubble sort
{
	for (int i = 0; i < n-1; i++)
	{											// Last i elements are already in place   
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void printArray(int arr[], int size)				// Function to print an array 
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()											// Driver program to test above functions
{
	//int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	//int arr[] = { 5, 1, 4, 2, 8, 9 };
	int arr[] = { 5, 1, 4, 2, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	_getch();
}