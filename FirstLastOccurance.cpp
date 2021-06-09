#include <iostream>
using namespace std;
int findFirstOccurrence(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (x == arr[mid])
        {
            result = mid;
            high = mid - 1;
        }
        else if (x < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
int findLastOccurrence(int arr[], int N, int x)
{
    // search space is `A[low…high]`
    int low = 0, high = N - 1;
 
    // initialize the result by -1
    int result2 = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (x == arr[mid])
        {
            result2 = mid;
            low = mid + 1;
        }
        else if (x < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
 
    return result2;
}
 
int main(void)
{
    int arr[] = {1,3,5,5,5,5,7,123,127};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int target2 = 5;
 
    int index = findFirstOccurrence(arr, n, target);
    int index2 = findLastOccurrence(arr, n, target2);
 
    if (index != -1)
    {
        cout<<"The first occurrence of element"<<target2<<"is located at index"<< index+1<<endl;
                
    }
    else {
        cout<<"Element not found in the array";
    }
    
    
    if (index2 != -1)
    {
        cout<<"The last occurrence of element"<<target<<" is located at index"<<index2+1<<endl; 
               
    }
    else {
        cout<<"Element not found in the array";
    }
 
    return 0;
}