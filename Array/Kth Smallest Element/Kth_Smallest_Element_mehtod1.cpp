#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //Sorting the array
        sort(arr, arr+r+1);

        //Returning the element at index k-1 after sorting of array which will be the Kth smallest element
        return arr[k-1];
    }
};

// { Driver Code Starts.

int main()
{
    int test_case;
    cout<<"Enter the no. of Testcases: "<<endl;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cout<<"Enter the Size of Array: "<<endl;
        cin>>number_of_elements;
        int a[number_of_elements];
        cout<<"Enter the Array Elements: "<<endl;
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
        cout<<"Enter the k:"<<endl;
        int k;
        cin>>k;
        Solution ob;
        cout<<"kth smallest element is: "<<endl;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
/*
OUTPUT:
Enter the no. of Testcases:
2
Enter the Size of Array:
7
Enter the Array Elements:
67 82 34 45 54 90 100
Enter the k:
3
kth smallest element is:
54
Enter the Size of Array:
4
Enter the Array Elements:
6 3 8 7
Enter the k:
4
kth smallest element is:
8

Process returned 0 (0x0)   execution time : 38.573 s
Press any key to continue.
*/
