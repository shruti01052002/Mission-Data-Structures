/* Reversing Array Using by iterating and printing elements of array in reverse order*/

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
    //Here we are printing the array in reverse order by iterating it from array_size to 0.
    cout<<"Reversed array is: "<<endl;
    for(i=array_size-1;i>=0;i--)
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
Process returned 0 (0x0)   execution time : 10.652 s
Press any key to continue.
*/
