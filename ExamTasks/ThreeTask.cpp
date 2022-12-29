#include <iostream>

/*
3 �������� ���������, ������� �������� ����������� ����� A � B (A<B) � ������� ���
������� ����� �� ������� [A; B].
������:
������� ������� ���������:
10 20
11 13 17 19*/
int threeTask(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	if (n < 2)
		return false;
	return true;
}