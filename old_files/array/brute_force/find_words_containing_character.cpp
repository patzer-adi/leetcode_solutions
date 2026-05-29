#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"leet", "code", "chatgpt"};
    char x = 'e';
    vector<int> ans = sol.findWordsContaining(words, x);

    cout << "Indices: ";
    for (int i : ans) cout << i << " ";
    cout << endl;

    return 0;
}
