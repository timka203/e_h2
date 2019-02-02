#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;
bool func3(int a)
{
	int f = 0;
	for (size_t i = 1; i < 10; i++)
	{
		if (a%i == 0)
			f++;
	}
	if (f >= 2)
		return false;
	else return true;

}
void task3()
{
	int a = -100 + rand() % 2000;
	cout << func3(a) << endl;
	printf("%d", a);


}
int func2(int a, int b, int f)
{
	switch (f)
	{
	case 1:return a + b;
		break;
	case 2:return a - b;
		break;
	case 3:return a * b;
		break;
	case 4:return a / b;
		break;
	default:
		break;
	}


}
void task2()
{
	int a = -100 + rand() % 200;
	int b = -100 + rand() % 200;
	int f;
    cin >> f;
	cout << func2(a,b,f) << endl;
	printf("%d  %d  \n", a, b);
}
bool func(int a)
{
	if (a >= 0)
		return true;
	else return false;
}
void task1()
{
int a = -100 + rand() % 200;
cout << func(a) << endl;
printf("%d", a);
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}