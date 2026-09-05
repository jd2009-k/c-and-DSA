#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++)
	{
		c = 1;
		if (i != INT_MIN)
			for (int j = i + 1; j < n; j++)
			{
				if (v[i] == v[j])
				{
					v[j] = INT_MIN;
					c++;
				}
			}
		if (c > n / 2)
		{
			cout << v[i];
			break;
		}
	}
}