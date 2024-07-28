class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        stack<Node*> visitList;
        vector<int> visited(101, 0);
        vector<Node*> nodeLookup(101, 0);
        Node* currNode;

        // Create all the nodes we will use.
        for (int i = 1; i < 101; i++) {
            nodeLookup[i] = new Node();
            nodeLookup[i]->val = i;
            nodeLookup[i]->neighbors = vector<Node*>();
        }

        // Push the first element.
        if (node != NULL) {
            visitList.push(node);
        }

        // BFS to populate correct relation.
        while (!visitList.empty()) {

            currNode = visitList.top();
            visitList.pop();
            visited[currNode->val] = 1;

            for ( auto n : currNode->neighbors) {
                if ( visited[n->val] == 0) {
                    visitList.push(n);
                }
                
                nodeLookup[currNode->val]->neighbors.push_back(n);
            }
        }

        return nodeLookup[1];
    }
};
