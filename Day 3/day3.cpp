/*
 * ADVENT OF CODE 2021
 * DAY 3
 * https://adventofcode.com/2021/day/3
 * 
 * Daria Jeżowska, 252731 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void count(vector<string> &temp, int bitStart);
int main()
{
    //wczytanie danych z pliku
    ifstream we;
    string filename;
    we.open("input.tnumberOfDatat");
    cout << "File name is: ";
    cin >> filename; 
    we.open(filename);
    
    if(we.fail()) 
    {
        cout << "Wrong file name" << endl;
        return 0;
    }

    vector<string> values;
    string val;
    string gamma = "";
    int gamma_;
    int epsilion = 0;
    string eps;
    vector<int> len;
    int numberOfData = 1;

    //wczytanie pierwszego słowa, aby można było określić jego długość

    we >> val;
    values.push_back(val);
    len.resize(val.length());

    while(!we.eof())
    {
        for(int i = 0; i < val.length(); i++)
        {
            if(val[i] == '1') 
                len[i]++;
        }
        we >> val;
        values.push_back(val);
        numberOfData++;
    }
    for(int i = 0; i < val.length(); i++)
    {
       /* Jeśli jest wiecej jedynek niz zer pierwszą wartością gammy będzie 1
        * W odwortnym przypadku będzie to 0
        * Dodatkowo jest zmienną pomocniczą eps składającą się z samych jedynek,
        * która pomoże obliczyć epsilion
        */

        if(len[i] > (numberOfData - len[i])) gamma.append("1");
        else gamma.append("0");
        eps.append("1");
    }

   /* Za pomocą funkcji stoi string jest konwertowany na liczbę binarną stringa na liczbę binarną
    * w przypadku epsiliona wystarczy użyć maski bitowej o długość słowa gamma i odejmiemy 1 
    * to wynikiem będzie liczba o długości słowa gamma, ale składająca się z samych jedynek
    * czyli największa wartość dla danej ilości bitów
    * jeśli na otrzymanej liczbie zostanie przeprowadzana operacja bitowa z zanegowaną gammą_ 
    * to wynikiem będzie epsilion
    * przykładowo: 1111 & ~(1010) = 0101 
    * następnie epsilion i gamma są przez siebie mnożone i otrzymujemy wynik zadania
    */

    gamma_ = stoi(gamma, 0, 2);
    
    epsilion = ((1 << gamma.length() - 1)  & ~gamma_);
    cout << epsilion << endl;
    cout << gamma_ << "g" << endl;
    cout << "Output: " << gamma_ * epsilion;
   

}
void count(vector<string> &temp, int bitStart)
{
}