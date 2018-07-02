int Solution::titleToNumber(string A) {
    int ans=0;
    int n=A.size();
    int k;
    for(int i=0; i< n; i++)
    {
        k=A[i]-'A'+1;
        ans+=k*pow(26,n-i-1);
    }

    return ans;
}
