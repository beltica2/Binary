#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int t = 0;
	int res = 0;


	cout << "�ڿ����� �Է��ϼ��� : ";
	cin >> n;

	for (; n >= 1;)
	{
		t *= 10;
		t += (n % 2);
		n /= 2;
	}

	for (; t > 0;)
	{
		res *= 10;
		res += (t % 2);
		t /= 10;
	}

	cout << "2���� = " << res << "(2)";

}