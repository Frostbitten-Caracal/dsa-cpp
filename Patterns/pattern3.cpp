/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1
12
123
1234
12345

Print the pattern in the function given to you.
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void pattern3(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<j+1;
            }
        cout<<'\n';
        }
    }
};

int main() {
    Solution s;
    int n=4;
    s.pattern3(n);
}