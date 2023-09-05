#include <string>
#include <iostream>
#include <stack>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        res.reserve(10000);
        //栈
        stack<int> mystack;

        ListNode* ln = head;
        int count = 0;
        while(ln){
            mystack.push(ln->val);
            ln = ln->next;
            count++;
        }
        for(int i = 0;i<=count;i++){
            res.push_back(mystack.top());
            mystack.pop();
        }
        return res;

    }
};