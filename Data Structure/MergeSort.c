#include <stdio.h>

static void copy(int dest[], int source[], int from, int to) {
  while (from <= to) {
    dest[from] = source[from];
    from++;
  }
}

static void merge(int a[], int aux[], int low, int mid, int high) {
  copy(aux, a, low, high);
	for(int i =0; i<high; i++)
		printf("%d\t",a[i]);
  int i = low;
  int j = mid + 1;
  for (int k = low; k <= high; k++) {
    if (i > mid)
      a[k] = aux[j++];
    else if (j > high)
      a[k] = aux[i++];
    else if (aux[i] < aux[j])
      a[k] = aux[i++];
    else
      a[k] = aux[j++];
  }
  
  	printf("\nArray : \n");
	for(int i =0; i<high; i++)
		printf("%d\t",a[i]);
}

static void _mergesort(int a[], int aux[], int low, int high) {
	printf("\nArray : \n");
	for(int i =0; i<high; i++)
		printf("%d\t",a[i]);
	
	
  if (low >= high) return;
  
  int mid = (low + high) / 2;
  _mergesort(a, aux, low, mid);
  _mergesort(a, aux, mid + 1, high);
  merge(a, aux, low, mid, high);
  	
}

void mergesort(int a[], int size) {
  int aux[size];
  	printf("\nArray : \n");
	for(int i =0; i<size; i++)
		printf("%d\t",a[i]);
  _mergesort(a, aux, 0, size - 1);
}

int main() {
	int arr[] = {12,33,44,55,6,7,22};
	size_t size = sizeof arr / sizeof arr[0];
	mergesort(arr , size);
		printf("\nArray : \n");
	for(int i =0; i<size; i++)
		printf("%d\t",arr[i]);
}