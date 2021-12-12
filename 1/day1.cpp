#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream we;
    vector<int> input;
    string filename;
    int inc = 0, dec = 0, in = 0;

    cout << "File name is: ";
    cin >> filename; 

    we.open(filename);

    while(we)
    {
        we >> in;
        input.push_back(in);
        if(input.size() > 1 && input[input.size() - 1] > input[input.size() - 2]) inc++;
        else dec++;
    }

    cout << "Increasing: " << inc << endl;
    cout << "Decreasing: " << dec << endl;
    

}