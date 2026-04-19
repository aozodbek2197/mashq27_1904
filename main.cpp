// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,2,3};
    map<int,int> m;

    for(int x : v) m[x]++;
    for(auto [k,v] : m)
        cout << k << ":" << v << " ";
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> a = {{"a",1}};
    map<string,int> b = {{"b",2}};

    a.insert(b.begin(), b.end());

    for(auto [k,v] : a)
        cout << k << ":" << v << " ";
}
