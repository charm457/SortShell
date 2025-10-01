#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <chrono>

#include "voidProverka.cpp"

using namespace std;
using namespace chrono;




int main() {
    vector <int> lst_int;

    for (int p = 0; p < 20; p++) {
        for (int q = 0; q < 20; q++) {
            lst_int.push_back(pow(2, p)*pow(3, q));
        }
    }
    
    sort(lst_int.begin(), lst_int.end());

    mt19937 mt(time(nullptr));

    vector <int> rand_3;
    vector <int> rand_4;
    vector <int> rand_5;
    vector <int> rand_6;

    for (int i=0; i < 1000; i++) {
        rand_3.push_back(mt());
    }

    for (int i=0; i < 10000; i++) {
        rand_4.push_back(mt());
    }

    for (int i=0; i < 100000; i++) {
        rand_5.push_back(mt());
    }

    proverka(rand_5, lst_int);
}

