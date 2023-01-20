#include <iostream>
using namespace std;


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int M,N=0;
	cout << "Введите размер 1 массива\n";
	cin >> M;
	int* A = new int[M];
	cout << "Введите размер 2 массива\n";
	cin >> N;
	int* B = new int[N];
	cout << "Первый массив\n";
	for (int i = 0; i < M; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Второй массив\n";
	for (int i = 0; i < N; i++)
	{
		B[i] = rand() % 10;
		cout << B[i] << " ";
	}


	int c = 0;
	int *mas3 = new int[c];
	bool fl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (A[i] != B[j]) fl = true;
			else fl = false;
		}
		if (fl == true) { mas3[c] = A[i]; c++; }
	}
	cout << endl;
	cout << "Третий массив\n";
	for (int i = 0; i < c; ++i)
	{
		std::cout << mas3[i]<<" ";
	}
	//delete A;
	//delete B;
	//delete mas3;
}	
