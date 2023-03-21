vector<string> solution(vector<string> picture) {
 //Populate vector with asteriks
    string topBottom = "";
    for(int i = 0; i < picture[0].size() + 2; i++){
        topBottom += '*';
    }
    for(int i = 0; i < picture.size(); i++){
        picture[i] = '*' + picture[i] + '*';
    }

    picture.insert(picture.begin(), topBottom);
    picture.push_back(topBottom);
    
    return picture;
}
