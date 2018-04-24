#include <iostream>
using namespace std;
 
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        
    }
}
 
// main function to do heap sort
void heapSort(int arr[], int n)
{
<<<<<<< HEAD
    
  // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
<<<<<<< HEAD
    // One by one extract an element from heap // necessary changes done
 for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
=======
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    } 
   
>>>>>>> origin/test8
=======
    // Build heap (rearrange array)// to be added by pratyush
   
    // One by one extract an element from heap // to be added by rachit
>>>>>>> origin/main
   
}
 
/* A utility function to print array of size n */
void printArray(int arr[], int n) // to be added by saurabh
{
  
}
 
// Driver program
int main() // added by sajal
{
<<<<<<< HEAD
   
=======
 int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
>>>>>>> origin/main
}
