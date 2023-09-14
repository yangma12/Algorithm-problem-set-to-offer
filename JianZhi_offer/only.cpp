#include <string>
#include <stack>
#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* pre = NULL;
        while (head != NULL) {
            ListNode* temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
    
        return pre; 
    }
    ListNode* addInList(ListNode* l1, ListNode* l2){
        l1=reverse(l1);
        l2=reverse(l2);

        int carry=0; //进位
        ListNode *result=new ListNode(0); // 创建一个新节点用于存放结果
        ListNode *cur=result; 


    }
};
