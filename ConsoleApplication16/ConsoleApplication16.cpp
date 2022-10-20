
#include <iostream>
using namespace std;

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);

}
int main()
{
	int n = 10;
	int a[10];
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 12;
	}
	while (1 > 0)
	{
		cout << "Est. list, enter 1" << endl << "Retake, enter 2" << endl << "Stipendia, enter 3" << endl << "Exit, enter 4" << endl;
		int b = 0;
		cin >> b;
		for (int i = 0; i < n; i++)
		{
			s = s + a[i];
		}
		if (b == 1)
		{
			for (int i = 0; i < n; i++)
			{
				cout << a[i]  << "\t";
			}
			cout << endl;
		}
		if (b == 2)
		{
			cout << "number:" << endl;
			int k = 0;
			cin >> k;
			cout << "Estimate:" << endl;
			cin >> a[k];
		}
		if (b == 3)
		{
			if (s / 10 > 10.7)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		if (b == 4)
			break;
	}
} 

