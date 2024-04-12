// Fibbonaci_zadania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//contains both. comment/uncomment them to run them (don't be lazy) [Also one at a time otherwise both break]


#include <iostream>
using namespace std;


//METHODID: REKURENCJA
/*
int Fib_rek(int N)
{
    if (N < 3)
    {
        return 1;
    }
    else
    {
        return Fib_rek(N - 2) + Fib_rek(N - 1);
    }
}

int main()
{
    int U;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> U;

    int V = Fib_rek(U);
    cout << U << " " << "wyraz ciagu ma wartosc:" << " " << V;
    cout << endl;

    return 0; //end the program without any extra issues, why lack of this causes issues


    //std::cout << "Hello World!\n";
}
*/

//METHODID: ITERACJA
int main()
{
    int N;

    int Fulos0 = 0;
    int Fulos1 = 1;
    int File;

    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        if (i > 1)
        {
            File = Fulos0 + Fulos1;
            Fulos0 = Fulos1;
            Fulos1 = File;
            cout << File;
            cout << endl;
        }
        else
        {
            File = i;
        }
    }

    return 0; //end the program without any extra issues, why lack of this causes issues
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
