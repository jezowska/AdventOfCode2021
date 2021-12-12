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
    int incThree = 0, decThree = 0;

    cout << "File name is: ";
    cin >> filename; 

    we.open(filename);
    //Part one
    while(we)
    {
        we >> in;
        input.push_back(in);
        if(input.size() > 1 && input[input.size() - 1] > input[input.size() - 2]) inc++;
        else dec++;
    }

    //Part two
    for(int i = 0; i < input.size() - 3; i++)
    {
        if(input[i] + input[i+1] + input[i+2] < input[i+1] + input[i+2] + input[i+3]) incThree ++;
        else decThree ++;
    }

    cout << "Increasing: " << inc << endl;
    cout << "Decreasing: " << dec << endl;

    cout << "Increasing (3 signals): " << incThree << endl;
    cout << "Decreasing (3 signals): " << decThree << endl;
    

}