#ifndef SOLUTION_H
#define SOLUTION_H
#include<vector>

class Solution
{
    public:
        Solution();
        virtual ~Solution();
        static int removeElement(std::vector<int>* nums, int val);
        static std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
        static int maxAreaOfIsland(std::vector<std::vector<int>>& grid);
        static int Island_size(std::vector<std::vector<int>>& G, int x, int y, std::vector<std::vector<bool>>& S);
        static int maxProfit(std::vector<int>& prices);


    protected:

    private:



};

#endif // SOLUTION_H
