#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string answer;
        string dot = "[.]";

        for (int i = 0; i < address.length(); i++) {
            if (address.at(i) == '.') {
                answer.append(dot);
            } else {
                answer.push_back(address.at(i));
            }
        }
        return answer;
    }
};

int main() {
    Solution sol;

    string address = "1.1.1.1";

    string result = sol.defangIPaddr(address);

    cout << "Defanged IP: " << result << endl;

    return 0;
}
