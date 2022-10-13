class MedianFinder {
private:
    priority_queue<int> small;  
    priority_queue<int,vector<int>,greater<int> > large;    
public:

    // Adds a number into the data structure.
    void addNum(int num) {
        if(small.empty())   small.push(num);
        else {
            
            if(num <= small.top())  small.push(num);
            else    large.push(num);

            
            if(small.size() > large.size() + 1) {
                large.push(small.top());small.pop();
            }
            if(large.size() > small.size() + 1) {
                small.push(large.top());large.pop();
            }
        }
    }

    // Returns the median of current data stream
    double findMedian() {
      
        if(large.size() == small.size())    return (double)(large.top() + small.top()) / 2;
        else    return large.size() > small.size() ? large.top() : small.top();
    }
};
