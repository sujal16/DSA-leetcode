class CustomStack {
    int arr[1000];
    int top;
    int cnt;
public:
    CustomStack(int maxSize) {
        arr[maxSize];
        top = -1;
        cnt = maxSize;
    }
    
    void push(int x) {
        if(cnt-top>1){
            top++;
            arr[top] = x;
        }
    }
    
    int pop() {
        if(top!=-1){
            return arr[top--];
        }
        else{
            return -1;
        }
    }
    
    void increment(int k, int val) {
        if(k>cnt){
            k = cnt;
        }
        for(int i=0;i<k;i++){
            arr[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */