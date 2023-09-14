#include <string>
#include <iostream>
using namespace std;


class Solution05 {
public:
    string replaceSpace(string s) {
        int pos = s.find(' ');
        while(pos != -1){
            //pos存在就替换
            s.erase(pos,1);
            s.insert(pos,"%20");
            pos = s.find(' ');
            
        }
        return s;
    }
};


// int main(){
//     cout << "start" << endl;
//     string s("We are happy.");
//     Solution05 sol;
//     string r = sol.replaceSpace(s);
//     cout << r << endl;
//     return 0;
// }
