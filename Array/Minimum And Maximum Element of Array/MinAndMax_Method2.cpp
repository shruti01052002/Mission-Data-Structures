/* Minimum and Maximum Element by sorting an array in increasing order and printing first array as minimum element of array and last element as a maximum element of array*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array_size, i, temp;
    cout<<"Enter the size of Array: "<<endl;
    cin>>array_size;
    vector<int>vec1;
    cout<<"Enter the elements of Array: "<<endl;
    for(i=0;i<array_size;i++)
    {
        cin>>temp;
        vec1.push_back(temp);
    }
    //Sorting an array
    sort(vec1.begin(), vec1.end());
    cout<<"Maximum Element is: "<<endl;
    cout<<vec1[array_size-1]<<endl;
    cout<<"Minimum Element is: "<<endl;
    cout<<vec1<<endl;
    return 0;
}
/*
OUTPUT:
Enter the size of Array:
6
Enter the elements of Array:
9 3 7 1 34 87
Maximum Element is:
87
Minimum Element is:
1

Process returned 0 (0x0)   execution time : 20.400 s
Press any key to continue.
*/
