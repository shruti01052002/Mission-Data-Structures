#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    // system("clear");
    // vector initialistaion
    vector<int> A = {12, 19, 16, 55};

    // accessing individual element
    cout << A[1] << endl;

    // sorting
    sort(A.begin(), A.end()); //O(NLOGN)
    // cout << A;

    // searching o log n
    bool present = binary_search(A.begin(), A.end(), 5); //false
    cout << present << endl;

    // insertion
    A.push_back(70);
    A.push_back(70);
    A.push_back(70);
    A.push_back(70);

    //new vector = 12 16 19 55 70 70 70 70
    for (int x : A)
    {
        cout << x << " ";
    }
    cout<<endl;
    // for searching the first occurence or last occurence in sorted vector
    vector<int>::iterator it1 = lower_bound(A.begin(), A.end(), 70); //>= (greater than or equal to 70)
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 70); //< (less than 70)

    // shortcut method
    auto it11 = lower_bound(A.begin(), A.end(), 70); //>= (greater than or equal to 70)
    auto it22 = upper_bound(A.begin(), A.end(), 70);
    //< (less than 70)

    cout << *it1 << " " << *it22 << endl;

    cout << it22 - it1 << endl; //no. of times 70 occuring

    // descending order sorting
    sort(A.begin(), A.end(), f);

    //printing
    vector<int>::iterator it3;
    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    // Alternative and easy way of printing
    for (int x : A)
    {
        cout << x << " ";
    }
}
