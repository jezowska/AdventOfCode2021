#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream we;
    we.open("input.txt");
    int forward = 0;
    int depth = 0;
    string input1;
    int input2 = 0;
    vector<string> direction;
    vector<int> cost;

    while(!we.eof()){
        we >> input1;
        we >> input2;
        if(input1 == "up") depth -= input2;
        else if (input1 == "down") depth += input2;
        else if(input1 == "forward") forward +=input2;
    }
    cout << "Depth: " << depth << endl;
    cout << "Forward: " << forward << endl;

    return 0;
}