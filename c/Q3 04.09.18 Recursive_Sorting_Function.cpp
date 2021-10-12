#include <iostream>
using namespace std;

int smlEle(int arr[], int i, int j)
{
    if (i == j)
        return i;
        
    int k = smlEle(arr, i + 1, j);
    
    return (arr[i] < arr[k])? i : k;
}

void sSort(int arr[], int n, int index = 0)     //Selection Sort
{
    if (index == n)
       return;
    
    int k = smlEle(arr, index, n-1);
    
    if (k != index)
       swap(arr[k], arr[index]);
       
    sSort(arr, n, index + 1);
}

void bSort(int arr[], int n)    //Bubble Sort
{
    if (n == 1)
        return;
 
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
 
    bSort(arr, n-1);
}



int main() {
	int x[]={9,8,7,6,5,4},n=6;
	sSort(x,n);
	for(int i=0;i<n;i++)
	    cout<<x[i];
	return 0;
}

