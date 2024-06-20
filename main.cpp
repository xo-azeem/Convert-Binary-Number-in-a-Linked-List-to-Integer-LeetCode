// Code

// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/

class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        stack<int> st;
        ListNode* temp = head;

        while (temp)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        int ans = 0;
        int i = 0;

        while (!st.empty())
        {
            ans += st.top() * pow(2, i);
            st.pop();
            i++;
        }

        return ans;
    }
};
