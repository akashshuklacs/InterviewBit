vector<int> Solution::primesum(int A) {
    vector<bool> val;
    vector<int> ans;
    for(int i=0;i<=A;i++)
    {
        val.push_back(true);
    }
    for(int i=2; i<=sqrt(A);i++)
    {
        if(val[i]==true)
        {
            for(int j=2; i*j<=A;j++)
            {
                val[i*j]=false;
            }
        }
    }
    for(int i=2;i<A;i++)
    {
        if(val[i]==true)
        {
            if(val[A-i]==true)
            {
                ans.push_back(i);
                ans.push_back(A-i);
                return ans;
            }
        }
    }
    
}
