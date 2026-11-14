class CustomStack {
private:
    int TopIndex;
    int maxsize;
    vector<int> arr;
public:

    CustomStack(int maxSize) {
        TopIndex = -1;
        maxsize = maxSize;
        arr.resize(maxSize);
    }
    
    void push(int x) {
        if(TopIndex == maxsize - 1){
            return;
        }
            arr[++TopIndex] = x;
    }
    
    int pop() {
        if(TopIndex == -1){
            return -1;
        }

        int temp = arr[TopIndex];
        TopIndex--;

        return temp;
    }
    
    void increment(int k, int val) {
        int count = min(k, TopIndex + 1);

        for(int i = 0; i < count; i++){
            arr[i] += val;
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