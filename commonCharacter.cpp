int solution(string s1, string s2) {
    map<char, int> dict1;
    map<char, int> dict2;
    
    for(int i = 0; i < s1.size(); i++){
        if(dict1.find(s1[i]) != dict1.end()){
            dict1[s1[i]] += 1;
        }else{
            dict1.insert({s1[i], 1});
        }
    }
    
    for(int i = 0; i < s2.size(); i++){
        if(dict2.find(s2[i]) != dict2.end()){
            dict2[s2[i]] += 1;
        }else{
            dict2.insert({s2[i], 1});
        }
    }
    
    int common = 0;
    
    if(s1.size() > s2.size()){
        //First string is the lower bound
        for(const auto &[key, value]: dict1)
    {
        if(dict2.find(key) != dict2.end()){
            if(dict2[key] >  dict1[key]){
                common += dict1[key];
            }else{
                common += dict2[key];
            }
        }
    }
        
    }else{
        //Second bound
        for(const auto &[key, value]: dict2)
    {
        if(dict1.find(key) != dict1.end()){
            if(dict2[key] >  dict1[key]){
                common += dict1[key];
            }else{
                common += dict2[key];
            }
        }
    }
    }
    
    return common;
    
}
