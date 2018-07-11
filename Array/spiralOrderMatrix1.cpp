vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector <int> result;
    int row=A.size();
    int col=A[0].size();
    int t,b,r,l;
    t=0;
    b=row-1;
    l=0;
    r=col-1;
    int dir=0;
    while((t<=b)&&(l<=r))
    {
        if(dir==0)
        {
            for(int i=l; i<=r; i++)
                result.push_back(A[t][i]);
            t++;
            dir=1;
        }
        else if(dir==1)
        {
            for(int i=t; i<=b; i++)
                result.push_back(A[i][r]);
            r--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=r; i>=l; i--)
                result.push_back(A[b][i]);
            b--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=b; i>=t; i--)
                result.push_back(A[i][l]);
            l++;
            dir=0;
        }
    }
    return result;
}
