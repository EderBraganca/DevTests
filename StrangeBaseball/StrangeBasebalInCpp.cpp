#include <iostream>
#include <vector>

class Solution{
    public:
        int getSolution(std::vector<std::string> items){
            std::vector<int> scores;
            for(int i = 0; i < items.size(); i++){
                if(items[i] == "C"){
                    scores.pop_back();
                }else if(items[i] == "D"){
                    scores.push_back(scores.back() * 2);
                }else if(items[i] == "+"){
                    scores.push_back(scores.back() + scores[scores.size() - 2]);
                }else{
                    scores.push_back(std::stoi(items[i]));
                }
            }
            int sum = 0;
            for(int i = 0; i < scores.size(); i++){
                sum += scores[i];
            }
            return sum;
        }
};

int main(){
    std::vector<std::string> items;
    
    
    Solution s;
    std::cout << s.getSolution(items);
    return 0;
}