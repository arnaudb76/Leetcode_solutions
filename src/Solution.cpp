#include "Solution.h"
#include<vector>
#include<iostream>
#include<math.h>

Solution::Solution()
{
}
Solution::~Solution()
{
    //dtor
}

int Solution::removeElement(std::vector<int>* nums, int val) // {2,3,4,2,2},2 --> 3 , {3,4,x,x}
    {
    int compter =0;
    int fin = nums->size();

    for (int i  = 0; i< fin; ++i )
    {
        if (nums->at(i) == val)
        {
            compter++;
        }
        else {nums->push_back(nums->at(i));}
    }

    for (int i = 0; i< (fin-compter);++i)
    {
        nums->at(i) = nums->at(fin+i);
    }

    nums->resize(fin-compter);

    return compter;
}
std::vector<int> Solution::findDisappearedNumbers(std::vector<int>& nums) {
/*Find All Numbers Disappeared in an Array
Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]   */

    int compter =0;
    std::vector<int>::iterator iter ;
    std::vector<int> checklist;
    checklist.resize( nums.size());
    int l = checklist.size();
    for (int i=0; i!=l;++i) {checklist.at(i)=(i)+1;};
     l = nums.size();
    for (iter = nums.begin() ; iter != nums.end(); ++iter)
    {
        if (*iter <= l)
        {
            checklist.at(*iter-1) = 0;
        }
    }

    for (int i =0; i!=l;++i)
    {
            if (checklist.at(i)!=0){
                checklist.at(compter) = checklist.at(i);
                compter++;
            }
    }
    checklist.resize(compter);

    return checklist;
    }
int Solution::maxAreaOfIsland(std::vector<std::vector<int>> &grid) {
    /*695. Max Area of Island
[[0,0,1,0,0,0,0,1,0,0,0,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,1,1,0,1,0,0,0,0,0,0,0,0],
 [0,1,0,0,1,1,0,0,1,0,1,0,0],
 [0,1,0,0,1,1,0,0,1,1,1,0,0],
 [0,0,0,0,0,0,0,0,0,0,1,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,0,0,0,0,0,0,1,1,0,0,0,0]]
output : 6
*/
     int max_v = grid.size();
     int max_h = grid.at(0).size();
     int maxi =0;
     std::vector<std::vector<bool>> Seen;
     Seen.resize(max_v);
     for (int i =0; i!=max_v;++i){Seen.at(i).resize(max_h);}



    for (int i=0; i < max_h; ++i)
    {
        for (int j=0; j< max_v;++j)
        {
             maxi= std::max(maxi,Island_size(grid,i,j, Seen));
        }

    }
    return maxi;
    }
int Solution::Island_size(std::vector<std::vector<int>>& G, int x, int y, std::vector<std::vector<bool>>& S)
{
    if ((x<0)||(y<0)|| (y==G.size()) || (x==G.at(0).size()) || (S.at(y).at(x))||(G.at(y).at(x)==0) ) // note to myself. x y limit condition to be tester FIRST. Before G.at(x).at(y)...
        {
        return 0;
        }
    else {  S.at(y).at(x)= true;
            return (1+Island_size(G,x+1,y,S)+Island_size(G,x-1,y,S)+Island_size(G,x,y-1,S)+Island_size(G,x,y+1,S));
          }

}

int Solution::maxProfit(std::vector<int>& prices){
/*Input: [7, 1, 5, 3, 6, 4]
Output: 5

max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)*/
int maxi =0;
for (int i=0; i!=prices.size();++i){
        for (int j =i;j!=prices.size();++j)
        {
        if (prices.at(i)<prices.at(j)) {maxi = std::max(maxi,prices.at(j)-prices.at(i));}
        }
}
return maxi;
}
