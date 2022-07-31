#include <bits/stdc++.h>
using namespace std;

int printUnion(int arr1[], int arr2[] , int m, int n )
{
    //initialising i and j  = 0
    int i=0;
    int j=0;

    while(i<m && j<n)
    {
        //if arr[i] < arr[j] then we will print arr[i] and then increment i
        if(arr1[i] < arr2[j])
        {
            cout << arr1[i];
            i++;
        }
        //if arr[j] < arr[i] then we will print arr[j] and then increment j
        else if(arr2[j] < arr1[i])
        {
            cout << arr2[j];
            j++;
        }
        //if both are equal then we print from any one of it and then increment both i and j
        else if(arr1[i] == arr2[j])
        {
            cout << arr2[j];
            i++;
            j++;
        }
    }
    //printing remaining elements of the larger array 
    while (i<m)
    {
        cout << arr1[i];
        i++;
    }

    while(j<n)
    {
        cout << arr2[j];
        j++;
    }
    return 0;
}

int main()
{
    //taking array 1 input from the user
    int k;
    cin >> k;
    int arr1[k];
    for(int i=0;i<k;i++)
    {
        cin >> arr1[i];
    }

    //taking array2 input from the user
    int h;
    cin >> h;
    int arr2[h];
    for(int i=0;i<h;i++)
    {
        cin >> arr2[i];
    }

    //finding the length of arr1 and arr2
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1,arr2,m,n);

    return 0;
}