class myStack {
  public:
    int *arr;
    int capacity;
    int topIndex;
    
    myStack(int n) {
        capacity = n;
        arr = new int[capacity];
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == capacity - 1;
    }

    void push(int x) {
        if(!isFull()){
            topIndex++;
            arr[topIndex] = x;
        }
    }

    void pop() {
       if(!isEmpty()){
           topIndex--;
       }
    }

    int peek() {
        if(!isEmpty()){
            return arr[topIndex];
        }
        return -1;
    }
};