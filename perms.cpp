#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

void display(vector<string> v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
    cout << endl;
}

int main() {
    vector<string> strs({string("string 1"), string("string 2"), string("string 3")});

    do {
        display(strs);
    } while (next_permutation(strs.begin(), strs.end()));

    return 0;
}