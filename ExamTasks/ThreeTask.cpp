#include <iostream>

/*
3 Напишите программу, которая получает натуральные числа A и B (A<B) и выводит все
простые числа на отрезке [A; B].
Пример:
Введите границы диапазона:
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