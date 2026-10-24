class Node {
    public:
        int data;
        Node* prev = nullptr;
        Node* next = nullptr;
        Node(int x) {
            this->data = x;
        }
};

class LinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    vector<Node*> nodes;
    LinkedList() {}

    int get(int index) {
        if (index >= this->nodes.size() || index<0) return -1;
        return this->nodes[index]->data;
    }

    void insertHead(int val) {
        auto new_node = new Node(val);
        if (this->nodes.size()==0) {
            this->head = new_node;
            this->tail = new_node;
        } else {
            new_node->next = this->head;
            this->head->prev = new_node;
            this->head = new_node;
        }  
        vector<Node*> new_nodes;
        new_nodes.push_back(new_node);
        for (int i = 0; i<this->nodes.size(); i++) {
            new_nodes.push_back(this->nodes[i]);
        }
        this->nodes = new_nodes;
    }
    void insertTail(int val) {
        auto new_node = new Node(val);
        if (this->nodes.size()==0) {
            this->tail = new_node;
            this->head = new_node;
        }
        else {
            new_node->prev = this->tail;
            this->tail->next = new_node;
            this->tail = new_node;
        }
        this->nodes.push_back(new_node);
    }
    bool remove(int index) {
        if (index < 0 || index >= nodes.size()) {
            return false;
        }

        Node* current = nodes[index];

        if (current->prev != nullptr) {
            current->prev->next = current->next;
        } else {
            head = current->next;
        }

        if (current->next != nullptr) {
            current->next->prev = current->prev;
        } else {
            tail = current->prev;
        }

        nodes.erase(nodes.begin() + index);
        delete current;
        return true;
    }
    vector<int> getValues() {
        vector<int> res;
        auto current = this->head;
        while (current) {
            res.push_back(current->data);
            current = current->next;
        }
        return res;
    }
};
