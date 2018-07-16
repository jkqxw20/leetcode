#include <map>
#include <string>

using namespace std;

class Solution {
    map<char,bool> jewels; // key => charactor
                           // val => true : jewel
                           //        false or undef : stone
public:
    int numJewelsInStones(string J, string S) {
        int jewel_num = 0;
        for (char c : J) {
            jewels[c] = 1;
        }
        for (char c : S) {
            if (jewels[c] == 1) {
                jewel_num++;
            }
        }
        return jewel_num;
    }
};
