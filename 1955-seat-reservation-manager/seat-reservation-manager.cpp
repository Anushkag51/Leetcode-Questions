class SeatManager {
private:
int x;
priority_queue<int,vector<int>,greater<int>>pq;
public:
    SeatManager(int n) {
        x=0;
    }
    
    int reserve() {
        if(pq.empty())
            return ++x;
        else{
            int small=pq.top();
            pq.pop();
            return small;
        }        
    }
    
    void unreserve(int seatNumber) {
        if(seatNumber==x)
            --x;
        else
        {
            pq.push(seatNumber);
        }
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */