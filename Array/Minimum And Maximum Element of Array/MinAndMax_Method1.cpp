/* Minimum and Maximum Element using iteration*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array_size, i, temp, min_ele, max_ele;
    cout<<"Enter the size of Array: "<<endl;
    cin>>array_size;
    vector<int>vec1;
    cout<<"Enter the elements of Array: "<<endl;
    for(i=0;i<array_size;i++)
    {
        cin>>temp;
        vec1.push_back(temp);
    }
    //Initializing min_ele, max_ele variable with vec1[0]
    min_ele = vec1[0];
    max_ele = vec1[0];

    for(i=0;i<array_size;i++)
    {
        if(vec1[i]<min_ele)
        min_ele = vec1[i]; //If present element in array is less than min_ele then store that element into min_ele

        if(vec1[i]>max_ele)
        max_ele = vec1[i];   //If present element in array is greater than max_ele then store that element into max_ele
    }
    cout<<"Maximum Element is: "<<endl;
    cout<<max_ele<<endl;
    cout<<"Minimum Element is: "<<endl;
    cout<<min_ele<<endl;
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
