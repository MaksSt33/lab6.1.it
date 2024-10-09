#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* p, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		p[i] = Low + rand() % (High - Low + 1);
}
void Print(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
		cout << endl;

}
int Sum(int* p, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)

		if (p[i] < 0 && p[i] %2 == 0)
			S += p[i];
	return S;
}
int Num(int* p, const int size)
{
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		if (p[i] < 0 && p[i] % 2 == 0)
			num++;
	}
	return num;
}
void Replace(int* p, const int size)
{
	for (int i = 0; i < size; i++)
		if (p[i] < 0 && p[i] % 2 == 0)
			p[i] = 0;

}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 20;
	int p[n];

	int Low = -20;
	int High = 34;

	Create(p , n, Low, High);
	Print(p , n);

	cout << "S = " << Sum(p, n) << endl;
	cout << "Num = " << Num(p,n) << endl;

	Replace(p, n);
	cout << "Modified mass = "  << endl;
	Print(p, n);
	return 0;
}
