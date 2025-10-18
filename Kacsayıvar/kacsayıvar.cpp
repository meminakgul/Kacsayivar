#include <iostream>

using namespace std;

int main(void)
{
	int sayac = 0;

	for (int i = 1000; i <= 9999; ++i)
	{
		int temp1 = i % 10;
		int temp2 = (i % 100 - temp1) / 10;
		if (temp1 == temp2)
		{
			continue;
		}
		else
		{
			int temp3 = (i % 1000 - temp2 * 10 - temp1) / 100;
			if (temp3 == temp2 || temp3 == temp1)
			{
				continue;
			}
			else
			{
				int temp4 = (i - temp3 * 100 - temp2 * 10 - temp1) / 1000;
				if (temp4 == temp3 || temp4 == temp2 || temp4 == temp1)
				{
					continue;
				}
				else
				{
					sayac++;
				}
			}
		}
	}
	cout << sayac << endl;
}


