/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    Node* cloneTree(Node* root) {
        /* BFS solution */
        if(!root) return nullptr;
        
        // Use a map to keep old to new node map
        unordered_map<Node*, Node*> mp;
        
        Node* tmp = new Node(root->val);
        mp[root] = tmp;
        
        // BFS start
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            tmp = q.front();
            q.pop();
            // create node
            for(Node* node : tmp->children) {
                mp[node] = new Node(node->val);
                mp[tmp]->children.push_back(mp[node]);
                q.push(node);
            }
        }
        return mp[root];
    }
};
