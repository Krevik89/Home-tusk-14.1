#include <iostream>
using namespace std;


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
    //Задание 1
	/*int M, N = 0;
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
	int* mas3 = new int[c];
	bool fl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i] != B[j]) { fl = true; }
			else fl = false;
		}
		if (fl == true) {
			mas3[c] = A[i]; c++;
		}
	}
	cout << endl;
	cout << "Третий массив\n";
	for (int i = 0; i < c; ++i)
	{
		std::cout << mas3[i] << " ";
	}*/

    //Задание 2
    /* 
    int size1;
    int size2;
    cout << " Введите размер первого массива " << endl;
    cin >> size1;
    cout << " Введите размер второго массива " << endl;
    cin >> size2;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 10;
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % 10;
        cout << arr2[i] << " ";
    }
    cout << endl;
    int tmp = 0;
    for (int i = 0; i < size1; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }
    for (int i = 0; i < size2; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }

    int size3 = tmp;
    int* arr3 = new int[size3];
    tmp = 0;
    for (int i = 0; i < size1; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arr3[tmp++] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arr3[tmp++] = arr2[i];
    }
    for (int i = 0; i < size3; i++)
        cout << arr3[i] << " ";

    cout << endl;*/
}
    