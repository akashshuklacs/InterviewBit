vector<int> Solution::allFactors(int A) {
    std::vector<int> v;
    for(int i=1; i<=sqrt(A); i++)
    {
        if(A%i==0)
        {
            v.push_back(i);
            if(i*i!=A)
            {
                v.push_back(A/i);
            }
        }
 
    }
    sort(v.begin(),v.end());
    return v;
}

