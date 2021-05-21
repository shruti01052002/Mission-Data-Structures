//Reverse a String by iterating string upto len/2 and swapping
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string string1;
    int i;
    cout<<"Enter the String: "<<endl;
    cin>>string1;
    for(i=0;i<string1.length()/2;i++) //string1.size() can also be used to find out the length of string
    {
        swap(string1[i], string1[string1.length()-i-1]); //Swapping of current string element with corresponding last element of string
    }
    cout<<"Reverse of String is: "<<endl;
    cout<<string1<<endl;
}
