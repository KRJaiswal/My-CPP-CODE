#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    int array1[n];

    int even=0;
    int odd=0;

    cout<<"Enter the element";
    for(int i=0;i<n;i++)
    {
        cin >> array1[i];
        if(array1[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<" The even number is "<<even << " and the odd no. is "<<odd;
}
