#include <iostream>
#include <cstring>
using namespace std;
void main()
{
	string n;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: "; cin >> n;
	if (n.size() == 1)
	{
		cout << "���������!";
	}

	else if (n.size() == 2)
	{
		if (n[0] == n[1])
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 3)
	{
		if (n[0] == n[2])
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 4)
	{
		if ((n[0] == n[3]) && (n[1] == n[2]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 5)
	{
		if ((n[0] == n[4]) && (n[1] == n[3]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 6)
	{
		if ((n[0] == n[5]) && (n[2] == n[3]) && (n[1] == n[4]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 7)
	{
		if ((n[0] == n[6]) && (n[1] == n[5]) && (n[2] == n[4]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 8)
	{
		if ((n[0] == n[7]) && (n[1] == n[6]) && (n[2] == n[5]) && (n[3] == n[4]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 9)
	{
		if ((n[0] == n[8]) && (n[1] == n[7]) && (n[2] == n[6]) && (n[3] == n[5]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() == 10)
	{
		if ((n[0] == n[9]) && (n[1] == n[8]) && (n[2] == n[7]) && (n[3] == n[6])&&(n[4]==n[5]))
			cout << "���������!\n";
		else cout << "������ ����� �� ���������\n";
	}

	else if (n.size() > 10)
		cout << "������� ���������� ����� ��������)\n";

	else cout << "������ ����� �� ���������\n";
}