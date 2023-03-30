#include<iostream>
using namespace std;
int main()
{
    //declaring an array is as easy as declaring an integer
    //while declaring an array we need minimum 3 things : 1. Type of array 2.Name of array 3.Size of array
    int a[10];//array declared
    a[0]=1;//first element is accessed and set as one
    cout<<a[0]<<endl;//print a[0]

    //array can also be access using loops
    for(int i=0;i<10;i++)
    {
        a[i]=i;
    }
        cout<<endl<<"array a : ";

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    //arrays can also be access using auto keyword
    int b[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<endl<<"array b: ";
    for(auto i:b)
    {
        cout<<i<<" ";
    }

    //the name of the array is actually the address of the first element of the array
    //[] are use to access the value of the element at an address
    cout<<"\naddress: "<<a<<endl; //will print the address of the first elemnt of the array
    //arrays are of fixed size and have certain limitations
    return 0;

} // namespace std;
