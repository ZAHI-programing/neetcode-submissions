class MedianFinder {
private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(maxHeap.empty()){
            maxHeap.push(num);
        }
        else if(num > maxHeap.top()){
            minHeap.push(num);
        }else{
            maxHeap.push(num);
        }
        if(maxHeap.size() > minHeap.size()+1){
            int x = maxHeap.top(); maxHeap.pop();
            minHeap.push(x);
        }
        if(maxHeap.size() + 1 < minHeap.size()){
            int x = minHeap.top(); minHeap.pop();
            maxHeap.push(x);
        }       
    }
    
    double findMedian() {
        if(maxHeap.size() == minHeap.size()){
            int x = maxHeap.top(), y = minHeap.top();
            return (x+y)/2.0;
        }
        if(maxHeap.size() > minHeap.size()){
            return maxHeap.top();
        }else{
            return minHeap.top();
        }
    }
};
