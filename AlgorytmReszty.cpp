// AlgorytmReszty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    int Kwota;
    int nominaly[9] {500,200,100,50,20,10,5,2,1};
    int ile = 0;
    int i = 0;
    cout << "Podaj kwote: ";
    cin >> Kwota;
    cout << endl;

    
   // cout << "print1";
    while (Kwota > 0) 
    {
       // cout << "print2";
        if (Kwota >= nominaly[i])
        {
            //cout << "print3";
            ile = Kwota / nominaly[i];
            //cout << ile;

            Kwota = Kwota - (nominaly[i] * ile);
            cout << nominaly[i];
            cout << " X ";
            cout << ile;
            cout << endl;
        }

        i = i + 1;
    }



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
