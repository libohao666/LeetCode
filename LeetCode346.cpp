class MovingAverage {
public:
    /** Initialize your data structure here. */
    queue<int>q;
    int qsize = 0;
    double sum = 0.0;
    MovingAverage(int size) {
        qsize = size;
    }

    double next(int val) {
        sum += val;
        if (q.size() < qsize) {
            q.push(val);
        }
        else {
            sum -= q.front();
            q.pop();
            q.push(val);
        }
        return (double)(sum / q.size());
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
