class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultado;
        for (int i = 0; i < nums.size(); i++){ // Posición "Fija"
            for (int j = 0; j < nums.size(); j++){ // Posición "Variable"
                if(i != j){
                    if (nums[i] + nums[j] == target){
                        resultado.push_back(i);
                        resultado.push_back(j);
                        return resultado;
                    }
                }
                
            }
        }
        return resultado;
    }
};
