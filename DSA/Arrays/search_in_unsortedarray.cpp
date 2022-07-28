
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    for(int i=0;i<n;i++)
    {
        if(a[i] == k)
        {
            cout << i;
        }
    }
    return 0;
}

/*  
here given an target element k we need to return the index position of the element we are looking for 
- there will be a loop which is used to traverse each and every element in the array and checks if it is equal to the target element K ,
- if we find it we return the index position
*/
