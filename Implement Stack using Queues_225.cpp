void reverseQueue(queue <int> &st){
    if(st.size()==0){
        return;
    }
    int t = st.front();
    st.pop();
    reverseQueue(st);
    st.push(t);
}
class MyStack {
public:
queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        reverseQueue(q);
        int ans = q.front();
        q.pop();
        reverseQueue(q);
        return ans;
    }
    
    int top() {
        reverseQueue(q);
        int ans = q.front();
        reverseQueue(q);
        return ans;
    }
    
    bool empty() {
        return q.empty();
    }
};
