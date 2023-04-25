class SmallestInfiniteSet {
public:
    set<int> infinite;
    SmallestInfiniteSet() {  
        for(int i = 1; i < 1001; i++){
            infinite.insert(i);
        }
    }
    
    int popSmallest() {
        int smallest = *infinite.begin();
        infinite.erase(infinite.begin());
        return smallest; 
    }
    
    void addBack(int num) {
        infinite.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */