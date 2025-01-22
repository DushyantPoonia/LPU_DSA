#include <iostream>
using namespace std;

int main() 
{
   int n;
   int arr[10] ={4,5,6,3,2,1,3,45,66,90};

  // Calculate size of an array by using any of below methods:

  // 1. sizeof(arr)/sizeof(arr[0]) i.e.(total array size)/(single element of an array)
  //  OR
  // 2. size(arr) for c++ 17 and above
  // CODE HERE
  // n = sizeof(arr)/sizeof(arr[0]);
  n = size(arr)
  // cout << n;
  // Write an iterative loop to visit each and every element of an array.
  // CODE HERE
   for(int i=0; i<n; i++)
    {
      cout << " " << arr[i];
    }
    return 0;
}
