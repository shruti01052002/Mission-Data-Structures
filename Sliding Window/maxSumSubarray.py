class Solution:
    def maximumSumSubarray (self,K,Arr,N):
        # code here 
        self.K = K
        self.Arr = Arr
        self.N = N
        windowSum = 0
        ws = 0
        we = 0
        ma = 0
        for we in range(self.N):
            windowSum += self.Arr[we]
            if we>=self.K-1:
                ma = max(windowSum, ma)
                windowSum -= self.Arr[ws]
                ws+=1
        return ma

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N,K = input().split()
        N = int(N)
        K = int(K)
        Arr = list( map(int,input().strip().split(" ")))

        ob = Solution()
        print(ob.maximumSumSubarray(K,Arr,N))
