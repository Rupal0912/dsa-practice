#include<iostream>
using namespace std;
void generateParenthesis(string s, int open, int close, int n) {
    if (s.length() == 2 * n) {
        cout << s << endl;
        return;
    }
    if (open < n) {
        generateParenthesis(s + "(", open + 1, close, n);
    }
    if (close < open) {
        generateParenthesis(s + ")", open, close + 1, n);
    }
}   
int main() {
    int n = 3; // Change this value to generate more or fewer pairs of parentheses
    generateParenthesis("", 0, 0, n);
    return 0;
}