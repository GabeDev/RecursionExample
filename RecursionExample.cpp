#include <iostream>
using namespace std;
int recursiveSum(int m, int n)
{	//TODO:make a factorial app
	//base case
	if (m == n)
		return m;
	//recursive step
	return m + recursiveSum(m + 1, n);
}
int main()
{
	int m = 2, n = 4;

	cout<<"sum is"<<recursiveSum(m, n);
}
