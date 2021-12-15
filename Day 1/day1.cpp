/*
 * ADVENT OF CODE 2021
 * DAY 1
 * https://adventofcode.com/2021/day/1
 * 
 * Daria Jeżowska, 252731 
 */

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    //zmienne potrzebne do przechowywania wczytanych danych
    ifstream we;
    vector<int> input;
    string filename;
    int in = 0;

    //zmienne przechowujace informacje o ilosci zwiekszajacych oraz zmniejszajacych sie po kolei liczb 
    //odpowiednio dla pierwszej i drugiej czesci zadania
    int increase = 0, decrease = 0;

    cout << "File name is: ";
    cin >> filename; 
    we.open(filename);
    
    if(we.fail()) 
    {
        cout << "Wrong file name" << endl;
        return 0;
    }

    //Part one
    while(!we.eof())
    {
       /* 
        * wczytujemy po kolei zmienne z pliku txt do wektora
        * następnie sprawdzamy czy wczytaliśmy więcej liczb niż jedną oraz 
        * czy liczba aktualnie wczytana jest większa niż poprzednia
        * jeśli tak - zmienna increase większa się o 1
        * w innym przypadku zwiększa się o 1 zmienna decrease
        */

        we >> in;
        input.push_back(in);
        if(input.size() > 1 && input[input.size() - 1] > input[input.size() - 2]) increase++;
        else decrease++;
    }

    cout << "Increasing: " << increase << endl;
    cout << "Decreasing: " << decrease << endl;

    increase = 0;
    decrease = 0;

    //Part two
    for(int i = 0; i < input.size() - 3; i++)
    {
       /*
        * Sprawdzamy czy suma trzech liczb jest większa od sumy trzech liczb 
        * zaczynając od liczby kolejnej od naszej startowej
        * Jeśli tak jest - zmienna increase zwiększa się 
        * W innym przypadku zwiększa się liczba decreased
        */

        if(input[i] + input[i+1] + input[i+2] < input[i+1] + input[i+2] + input[i+3]) increase ++;
        else decrease ++;
    }

    cout << "Increasing (3 signals): " << increase << endl;
    cout << "Decreasing (3 signals): " << decrease << endl;
    

}