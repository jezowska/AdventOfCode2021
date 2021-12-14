#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void count(vector<string> &temp, int bitStart);
int main()
{
    ifstream we;
    we.open("input.txt");
    vector<string> values;
    string val;
    string gamma = "";
    int gamma_;
    int epsilion = 0;
    int output = 0;
    string eps;
    vector<int> len;
    int x = 1;
    we >> val;
    values.push_back(val);
    vector<int> aaa;
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
        x++;
    }
    for(int i = 0; i < val.length(); i++)
    {
        if(len[i] > (x - len[i])) gamma.append("1");
        else gamma.append("0");
        eps.append("1");
    }
    for(int i = 0; i < x; i++)
    {
        
    }
    gamma_ = stoi(gamma, 0, 2);
    epsilion = stoi(eps, 0, 2) - gamma_;
    output = gamma_ * epsilion;
    cout << "Output: " << output;
    

}
void count(vector<string> &temp, int bitStart)
{
    int zeros;
    string a;
    for(int i = 0; i < temp.size(); i++)
    {
        temp[i].erase(temp[i].begin(), temp[i].begin() + bitStart);
        a = temp[i];
        if(a[0] == '0') zeros ++; 
    }

}