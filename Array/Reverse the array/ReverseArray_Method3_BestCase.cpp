/* Reversing Array Using by iterating array_size/2 times and swapping the elements. Here we modify the array*/
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
    //Iterating the array, aray_size/2 times.
    for(i=0;i<array_size/2;i++)
    {
        swap(vec1[i], vec1[array_size-i-1]); //Swapping the present element with corresponding last element.
    }
    cout<<"Reversed array is: "<<endl;
    for(i=0;i<array_size;i++)
    {
        cout<<vec1[i]<<" ";
    }
    return 0;
}

/*
OUTPUT:
Enter the size of Array:
6
Enter the elements of Array:
1 2 3 4 5 6
Reversed array is:
6 5 4 3 2 1
Process returned 0 (0x0)   execution time : 6.203 s
Press any key to continue.
*/
