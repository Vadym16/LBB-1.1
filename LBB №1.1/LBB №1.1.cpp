#include <iostream>
#include <ctime>

using namespace std;



int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ukr");

    int N, sum=0;
    float averg;
    cout << "Введіть розмір масиву: "; cin >> N;
    int A[100];
    cout << "Масив A: ";
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 20 - 10;
        cout << A[i] << " ";
        sum += A[i];
    }

    averg = sum / N;
    cout << "\nСереднє Арефметичне елементів масиву A: " << averg;



}


