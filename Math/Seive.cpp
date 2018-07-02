vector<int> Solution::sieve(int A) {
    vector<bool> val;
    vector<int> ans;
    for(int i =0; i<=A; i++)
    {
        val.push_back(true);
    }
    val[0]=false;
    val[1]=false;
    for(int j=2;j<=sqrt(A);j++)
    {
        if(val[j]==true){
            for(int k=2; j*k<=A; k++)
            {
                val[j*k]=false;
            }
        }
    }
    for(int i=2; i<val.size(); i++)
    {
        if(val[i]==true)
            ans.push_back(i);
    }
    return ans;
}

