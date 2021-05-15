/* Minimum and Maximum Element by *min_element() and *max_element() function*/

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
    cout<<"Maximum Element is: "<<endl;
    //Printing maximum element of array by using *max_element()
    cout<<*max_element(vec1.begin(), vec1.end())<<endl;
    cout<<"Minimum Element is: "<<endl;
    //Printing maximum element of array by using *min_element()
    cout<<*min_element(vec1.begin(), vec1.end())<<endl;
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
