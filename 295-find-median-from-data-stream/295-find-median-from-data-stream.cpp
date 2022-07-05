class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    /**
    keep maxHeap the bigger one.
    if greater or equal than maxheap top,
    and if maxheap has bigger size, push into minheap
    or if maxheap has smaller size, compare with the top of minheap
    **/
    void addNum(int num) {
        if(maxHeap.empty()) maxHeap.push(num);
        else{
            if(num >= maxHeap.top()){
                if(maxHeap.size() > minHeap.size()){
                    minHeap.push(num);
                }
                else{
                    if(minHeap.top() >= num)
                        maxHeap.push(num);
                    else{
                        maxHeap.push(minHeap.top());
                        minHeap.pop();
                        minHeap.push(num);
                    }
                }
            }
            else{
                if(maxHeap.size() > minHeap.size()){
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                    maxHeap.push(num);
                }
                else{
                    maxHeap.push(num);
                }
            }
        }
    }
    
    double findMedian() {
        if(maxHeap.size() == 0) return 0.0;
        if(maxHeap.size() > minHeap.size()){
            return (double)maxHeap.top();
        }
        return (double)(maxHeap.top()+minHeap.top())/2.0;
    }
    
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */