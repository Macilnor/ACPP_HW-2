#include <iostream>
#include <fstream>
#include "Swap.h"
#include "SortPointers.h"
#include "CountVowels.h"
#include "Timer.h"

using namespace std;

int main()
{
    string a{ "A" };
    string b{ "B" };

    Swap(&a, &b);

    cout << "a = " << a << " b = " << b << endl;



    int myints[] = { 34 , 14 , 24 , 72 , 5 };

    vector<int*> myvect;
    for (size_t i = 0; i < 5; i++)
    {
        myvect.push_back(&myints[i]);
    }
    
    SortPointers<int>(myvect);

    cout << "myvect contains ";
    for (auto n : myvect)
    {
        cout << *n << " ";
    }
    cout << endl;

   

    ifstream file("COREY JAMES.Tiamat's Wrath.txt");
    Timer timer("count_if and find : ");
    cout << "COREY JAMES.Tiamat's Wrath.txt contains " << CountVowels1(file) << " vowels." << endl;
    timer.print();
    file.close();

    file.open("COREY JAMES.Tiamat's Wrath.txt");
    timer.start("count_if and for : ");
    cout << "COREY JAMES.Tiamat's Wrath.txt contains " << CountVowels2(file) << " vowels." << endl;
    timer.print();
    file.close();

    file.open("COREY JAMES.Tiamat's Wrath.txt");
    timer.start("for and find : ");
    cout << "COREY JAMES.Tiamat's Wrath.txt contains " << CountVowels3(file) << " vowels." << endl;
    timer.print();
    file.close();

    file.open("COREY JAMES.Tiamat's Wrath.txt");
    timer.start("for and for : ");
    cout << "COREY JAMES.Tiamat's Wrath.txt contains " << CountVowels4(file) << " vowels." << endl;
    timer.print();
    file.close();
}

