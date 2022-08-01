#include<bits/stdc++.h>
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

    int temp[n];
    temp[0] = arr[0];
    int res =1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }


    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i];
    }
    cout << res;

    return 0;
}
