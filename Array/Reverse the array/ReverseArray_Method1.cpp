/* Reversing Array Using Another Array*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array_size, i, temp;
    cout<<"Enter the size of Array: "<<endl;
    cin>>array_size;
    vector<int>vec1, vec2;
    cout<<"Enter the elements of Array: "<<endl;
    for(i=0;i<array_size;i++)
    {
        cin>>temp;
        vec1.push_back(temp);
    }
    //Here we are copying elements of vector1 into vector2 from backwards
    for(i=array_size-1;i>=0;i--)
    {
        vec2.push_back(vec1[i]);
    }
    cout<<"Reversed array is: "<<endl;
    for(i=0;i<array_size;i++)
    {
        cout<<vec2[i]<<" ";
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
Process returned 0 (0x0)   execution time : 11.784 s
Press any key to continue.
*/
