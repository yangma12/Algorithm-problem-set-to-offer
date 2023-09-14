#include <string>
#include <stack>
#include <iostream>

using namespace std;

class CQueue {
public:
    stack<int> s1;
    stack<int> s2;
    CQueue() {
        

    }
    //增加就是往栈1push
    void appendTail(int value) {
        s1.push(value);
    }
    //拿出就是栈2，pop,
    //1.s2空，将栈1所有的元素搬过来，不然返回-1
    //2.s2不空，直接s2 pop
    int deleteHead() {
        if(s2.empty()){
            if(s1.empty()){
                return -1;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int re = s2.top();
            s2.pop();
            return re;
        }
        else
        {
            int re = s2.top();
            s2.pop();
            return re;
        }
        
    }
};