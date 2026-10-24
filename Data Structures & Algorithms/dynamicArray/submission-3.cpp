class DynamicArray {
public:
    int capacity;
    int size = 0;
    int* a;
    DynamicArray(int capacity) {
        this->a = new int[capacity];
        this->capacity = capacity;
    }
    int get(int i) {
        return a[i];
    }
    void set(int i, int n) {
        a[i] = n;
    }
    void pushback(int n) {
        if (this->size == this->capacity) {
            this->resize();
        }
        if (this->size == 0) {
            a[0] = n;
            this->size += 1;
        } else {
            a[this->size] = n;
            this->size += 1;
        }
    }
    int popback() {
        int r = this->a[this->size - 1];
        this->size -= 1;
        int* new_a = new int[this->capacity];
        for (int i = 0; i <this->size; i++) {
            new_a[i] = this->a[i];
        }
        delete[] this->a;
        this->a = new_a;
        return r;
    }
    void resize() {
        this->capacity = this->capacity * 2;
        int* new_a = new int[this->capacity];
        for (int i = 0; i < this->size; i++) {
            new_a[i] = this->a[i];
        }
        delete[] this->a;
        this->a = new_a;
    }
    int getSize() {
        return this->size;
    }
    int getCapacity() {
        return this->capacity;
    }
};
