
#include <iostream>
#include <map>
#include <string>
#include "solution/solution"

using namespace std;

int main() {
    Solution s;
    string str0, str1;
    int i0;

    str0 = "AaC";
    str1 = "abcABC";

    i0 = s.numJewelsInStones(str0, str1); // 771 # 2018.07.15
    cout << "result: " << i0 << endl;

    return 0;
}
