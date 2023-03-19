int solution(int n) {
    
    int squareArea = 1;
    vector<int> interest = {1};
    
    // 0, 4, 8, 12
    for(int i = 1; i < n; i++){
        interest.push_back(interest.back() + 4*i);
    }
   
    return interest.back();
}
