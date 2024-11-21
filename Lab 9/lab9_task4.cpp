#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int main() {
    // Vector example
    vector<int> vec = {10, 20, 30};
    cout << "Vector: ";
    for (int v : vec) cout << v << " ";
    cout << endl;

    // Map example
    map<string, int> fruitMap;
    fruitMap["Apple"] = 5;
    fruitMap["Banana"] = 7;
    cout << "Map: ";
    for (const auto & pair : fruitMap) {
        cout << pair.first << " -> " << pair.second << ", ";
    }
    cout << endl;

    // Stack example
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "Stack pop: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
