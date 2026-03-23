#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a, b, i;
	cin >> a;
	cin >> b;

	if (a<b)
	{	
		int sum = 0;
		for (i=a; i<=b; i++)
		{
			sum += i;
		}
		
		cout << "Sum: " << sum << endl;
	}
	
	return 0;
}
