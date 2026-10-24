class DynamicArray {
public:
    int capacity;
    int * col;
    int size;
    DynamicArray(int capacity) {
        if (capacity <= 0) {
            throw runtime_error("capacity <= 0");
        }
        this->capacity = capacity;
        this->size = 0;
        this->col = new int[capacity]{0};  
    }

    int get(int i) {
        return this->col[i];
    }

    void set(int i, int n) {
        this->col[i] = n;
    }

    void pushback(int n) {
        if (this->getCapacity()==this->getSize()) {
            this->resize();
        }
        this->col[size] = n;
        this->size += 1;
    }

    int popback() {
        int a = this->col[this->size-1];
        this->size = this->size - 1;
        return a;
    }

    void resize() {
        int newcap = this->capacity * 2;
        int * na = new int[newcap]{0};  
        for (int i = 0; i<this->size; i++) {
            na[i] = this->col[i];
        }
        delete[] this->col;
        this->col = na;
        this->capacity = newcap;
    }

    int getSize() {
        return this->size;
    }

    int getCapacity() {
        return this->capacity;
    }
};
