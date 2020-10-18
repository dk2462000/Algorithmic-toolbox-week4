
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *a, int *b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 


void printarr(int a[], int n) 
{ 
	for (int i = 0; i < n; ++i) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 


void partition(int a[], int low, int high, int &i, int &j) 
{ 
	
	if (high - low <= 1) 
	{ 
	    
		if (a[high] < a[low]) 
			swap(&a[high], &a[low]); 
		i = low; 
		j = high; 
		return; 
	} 

	int mid = low; 
	int pivot = a[high]; 
	while (mid <= high) 
	{ 
		if (a[mid]<pivot) 
			swap(&a[low++], &a[mid++]); 
		else if (a[mid]==pivot) 
			mid++; 
		else if (a[mid]>pivot) 
			swap(&a[mid], &a[high--]); 
	} 

	
	i = low-1; 
	j = mid; 
} 


void quicksort(int a[], int low, int high) 
{ 
	if (low>=high) 
		return; 

	int i, j; 

	
	partition(a, low, high, i, j); 

	
	quicksort(a, low, i); 
	quicksort(a, j, high); 
} 


int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i;i<n;i++){
        cin>>a[i];
    }
	

	
	quicksort(a, 0, n- 1); 
	printarr(a, n); 
	return 0; 
} 
