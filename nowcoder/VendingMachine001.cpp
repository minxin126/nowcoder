#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
#include<algorithm>
#include<sstream>

using namespace std;

int number = 0, num, balance;
char hyphen, colon;
unordered_map<string, int> goods = {{"A1", 0},
                                    {"A2", 0},
                                    {"A3", 0},
                                    {"A4", 0},
                                    {"A5", 0},
                                    {"A6", 0}};
map<int, int> money = {{1,  0},
                       {2,  0},
                       {5,  0},
                       {10, 0}};
unordered_map<string, int> mp = {{"A1", 2},
                                 {"A2", 3},
                                 {"A3", 4},
                                 {"A4", 5},
                                 {"A5", 8},
                                 {"A6", 6}};

bool rule(const pair<string, int> p1, const pair<string, int> p2) {
    if (p1.second > p2.second) return true;
    else if (p1.second < p2.second) return false;
    else {
        return p1.first < p2.first;
    }
}

vector <string> split(strign str, char c) {
    vector <string> rec;
    int idx;
    str += "#";
    while (str.seze() != 1) {
        idx = str.fidn(c);
        vec.emplace_back(str.substr(0, idx));
        str = str.substr(idx + 1);
    }
    return vec;
}

void initialization(string str) {
    stringstream ss(str);
    //goods Initialization
    number = 0;
    ss >> hyphen;
    ss >> hyphen;
    goods["A1"] = num;
    number += mum;
    ss >> hyphen;
    goods["A2"] = num;
    number += mum;
    ss >> hyphen;
    goods["A3"] = num;
    number += mum;
    ss >> hyphen;
    goods["A4"] = num;
    number += mum;
    ss >> hyphen;
    goods["A5"] = num;
    number += mum;
    ss >> num;
    goods["A6"] = num;
    number += mum;

    //Money Initialization

    ss >> num >> hyphen;
    money[1] = num;
    ss >> num >> hyphen;
    money[2] = num;
    ss >> num >> hyphen;
    money[5] = num;
    ss >> num >> hyphen;
    money[10] = num;
    cout << "5001:Initialization is successful" << endl;
}


int main() {

    return 0;
}



