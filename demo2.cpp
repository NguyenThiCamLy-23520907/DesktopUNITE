#include <bits/stdc++.h>
#include "mylib.h"

using namespace std;

int main()
{
	int i = 1;
	int xCoord = 10, yCoord = 0;
	int xcu = xCoord, ycu = yCoord;
	int check = 0;

	while(true)
	{
		system("cls");

		gotoXY(xcu, ycu);
		cout << "                     ";

		gotoXY(xCoord, yCoord);
		cout << "xin chao";
		xcu = xCoord;
		ycu = yCoord;

		SetColor(i);
		i++;

		if(i > 15)
			i = 1;

		if(_kbhit())
		{
			char key = _getch();
			if(key == 'w')
				check = 1;
			else if(key == 's')
				check = 0;
		}

		if(check == 0)
			yCoord++;

		else if (check == 1)
			yCoord--;

		if(yCoord == 28)
			check = 1;

		else if(yCoord == 0)
			check = 0;

		Sleep(100);
	}
	_getch();
	return 0;
}


