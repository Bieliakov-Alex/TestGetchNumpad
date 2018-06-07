#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int answer = 0;
	while (answer != 13)
	{
		answer = _getch();
		cout << answer << endl;
	}
	_getch();
	return 0;
}