class StackQueue {
public:
stack<int>st1,st2;
    StackQueue() {
    }
    
    void push(int x) {
        st1.push(x);
   
    }
    
    int pop() {
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int a= st2.top();
        st2.pop();
        return a;
  
    }
    
    int peek() {
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
    return st2.top();
    }
    
    bool isEmpty() {
        return (st1.empty() && st2.empty());
  
    }
};