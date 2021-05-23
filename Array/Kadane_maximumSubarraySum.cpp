// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int i, cs = 0, ms = 0;
    for(i=0;i<n;i++)
    {
        cs = cs+arr[i];
        if(cs<0)
        cs = 0;
        if(ms<cs)
        ms = cs;
    }
    return ms;
}


int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}



