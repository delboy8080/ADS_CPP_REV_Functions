#include <iostream>

using namespace std;

float density(float width, float height, float depth, float mass)
{
	return width * height * depth * mass;
}

void main_q2()
{
	float w, h, d, m;
	cout << "Width: ";
	cin >> w;
	cout << "Height: ";
	cin >> h;
	cout << "Depth: ";
	cin >> d;
	cout << "Mass: ";
	cin >> m;
	cout << "Density: " << density(w, h, d, m) << endl;
}

int charToDecimal(char c)
{
	return (int)c;
}

void main_q3()
{
	char c = 'a';
	cout << c << " in decimal is " << charToDecimal(c) << endl;
}

void increment(int& x)
{
	x++;
}
void main_q5()
{
	int x = 1;
	cout << "x before increment: " << x << endl;
	increment(x);
	cout << "x after increment: " << x << endl;
}

void main_q6()
{
	int x = 5, y = 10;
	cout << "x: " << x << "; y:" << y << ";" << endl;
	swap(x, y);
	cout << "x: " << x << "; y:" << y << ";" << endl;

}
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int sumRandom(int min, int max)
{
	int total = 0;
	for (int i = 0; i < 100; i++)
	{
		int num = min + (rand() % (max - min));
		// cout << total << " + " << num  << endl; //uncomment to see each number and the total before adding to total.
		total += num;
	}
	return total;
}

void main_q7()
{
	int total = sumRandom(20, 200);
	cout << "The total of all these numbers is " << total << endl;
}

void divide(int x)
{
	cout << x << endl;
	if (x < 1)
	{
		return;
	}
	
	divide(x / 2);

}
void main_q9()
{
	divide(32);
}

int fib(int n)
{
	if (n <= 2)
		return n-1;
	return fib(n - 1) + fib(n - 2);
}
void main_q10()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "the "<< i << " fibonacci number is " << fib(i) << endl;
	}
}
int main()
{
	//main_q2();
	//main_q3();

	//main_q5();
	//main_q6();
	//main_q7();

	//main_q9();
	main_q10();
	return 0;
}