int solution(vector<vector<int>> matrix) {
    //Iterate through and mark the haunted rooms with their respective indices
    int count = 0;
    vector<pair<int, int>> storage;
    for(int  i = 0; i < matrix.size(); i++){
        for(int j = 0; j <matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                int k = i;
                //std::cout << "Ghost found!";
                while(k < matrix.size()){
                    matrix[k][j] = 0;
                    k++;
                }
            }else{
                count += matrix[i][j];
            }
            
        }
    }
    return count;
    
}