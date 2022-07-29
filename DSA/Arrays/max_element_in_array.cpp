#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    //int max = 0; here it is safe to assign the value of max as arr[0] , instead of 0
    
    int max = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    cout << max;

    return 0;
}
