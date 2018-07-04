int Solution::gcd(int A, int B) {
{
	if(B==0)
		return A;
	else
		gcd(B,A%B);
}