int Solution::isPalindrome(int A) {
    ostringstream str1;
    str<<A;
    string s=str1.str();
    int size=s.size();
    int i=0;
    int j=size-1;
    while (i<j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
