// SomeStupidPsychics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    
    int a;
    int b;
    int n;
    cout << "Podaj [a,b]: \n";
    cout << "Podaj a: \n";
    cin >> a;
    cout << "Podaj b: \n";
    cin >> b;
    cout << "Podaj n (liczba trapezow): \n";
    cin >> n;
    int x = (b - a) / n;

    int S = 0;

    int srodeczek = a + (b - a) / (2.0 * n);

    for (float i = 0.1; i < n; i++)
    {
        S = S + srodeczek;
        srodeczek = srodeczek + x;
        //cout << "Testus \n";
    }
    cout << "Uno polo isto: ";
    cout << S * n;
}

//https://github.com/PiskorowskiJakub/programming-course-cpp/blob/main/2-algorytmika/2-7-algorytmy-iteracyjne/2-7-04-calkowanie-numeryczne/README.md
// done to the letter
// I did not like the task and would like to not do these kind of tasks (in this field of programming)

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
