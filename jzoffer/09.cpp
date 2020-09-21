class CQueue {
public:
    stack<int> s1,s2;
    CQueue() {

    }

    void appendTail(int value) {
        s1.push(value);
    }

    int deleteHead() {
        if (s2.empty()){
            if(s1.empty()) return -1;
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topIerm = s2.top();
        s2.pop();
        return topIerm;
    }
};
