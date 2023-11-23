#include <vector>
#include <iostream>

class Solution{
    public:
        std::vector<int> insert(std::vector<int>& a, std::vector<int>& b){
            std::vector<int> res; 

            for(int i = 0; i < a.size(); i++){
                res.push_back(0);
            }

            for(int i = a.size() - 1; i >= 0; i--){
                res = insertNext(res, a[i], b[i]);
            }

            return res;
        }
        std::vector<int> insertNext(std::vector<int>& res, int x, int y){
            if(res[y] != 0){
                insertNext(res, x, y + 1);
            }
            else{
                res[y] = x;
            }
            return res;
        }
};

int main(){
    std::vector<int> a;
    std::vector<int> b;
    
    while (std::cin.peek() != '\n')
    {
        int n;
        std::cin >> n;
        a.push_back(n);
    }
    std::cin.ignore();    
    while (std::cin.peek() != '\n')
    {
        int n;
        std::cin >> n;
        b.push_back(n);
    }
    Solution s;
    std::vector<int> c = s.insert(a, b);

    for(int i = 0; i < c.size(); i++){
        std::cout << c[i] << " ";
    }
    return 0;
}