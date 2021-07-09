#include <iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{   
    int length;
    cin>>length;
    vector<int> arr;
    for(int i=0;i<length;++i)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);

    }
    
    ll no_of_moves=0;

    for(int i=1;i<length;++i)
    {
        if(arr[i]<arr[i-1])
        {
        no_of_moves+=arr[i-1]-arr[i];
        arr[i]=arr[i-1];
        }
    }

    cout<<no_of_moves;


    return 0;
}