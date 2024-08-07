 vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
    ListNode* temp = head;
    
    // Populate the array with the values from the linked list
    while (temp != NULL) {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    int n = arr.size();
    vector<int> ans(n, 0); // Initialize the answer vector with -1
    stack<int> s; // Stack to keep track of the next larger elements

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Pop elements from the stack that are less than or equal to the current element
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        // If the stack is not empty, the top element is the next larger element
        if (!s.empty()) {
            ans[i] = s.top();
        }

        // Push the current element onto the stack
        s.push(arr[i]);
    }

    return ans;
            
        }