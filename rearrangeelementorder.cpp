#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n)
 {
    int i,j,min,temp;

    for( i=0; i<n-1; i++)
     {
         min = i;
      for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min])
      min = j;
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
     }

     for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
   
 }
int main()
 {
    int arr[5];
    cout<<"Enter array elements : \n";

    for(int i=0; i<5;i++)
     {
        cin>>arr[i];
     }

    int n = sizeof(arr)/sizeof(arr[0]);

    arrange(arr, 5);

    return 0;
 }