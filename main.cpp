#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>

// https://leetcode.com/problems/remove-linked-list-elements/
// #include "../utils/VectorUtils.hpp"
#include "../utils/ListNode.hpp"
#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;
        if (head->val == val)
            return removeElements(head->next, val);
        ListNode* curr = head;
        while (curr->next) {
//            cout << "skipping " << curr->val << " with next as " << curr->next->val << endl;
            if (curr->next->val == val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};

void test1() {
    auto t1 = new ListNode("1,2,6,3,5,4,6");
    cout << " ? " << Solution().removeElements(t1, 6) << endl;
}

void test2() {

}

void test3() {

}