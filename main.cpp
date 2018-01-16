#include <vector>
#include <iostream>
#include<typeinfo>
#include<Solution.h>

/* This is a collection of exercices found on leetcode.com */

int main()
{

/* Remobe element from a vector
    std::vector<int> V;
    V = {2,3,4,2,2};
        for (int n : V){
        std::cout<< n << ", ";
    }
    std::cout<<std::endl;

    std::cout<< "Val qty: "<<Solution::removeElement(&V,2)<<std::endl;

    std::vector<int>::iterator it;
    for (int n : V){
        std::cout<< n << ", ";
    }
*/

//Find All Numbers Disappeared in an Array*
/*
std::vector<int> V;
V = {4,3,2,7,8,2,3,1};
for (int i : Solution::findDisappearedNumbers(V)) {std::cout<< i <<", ";};


//695. Max Area of Island
std::vector<std::vector<int>> G;
G = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
 {0,0,0,0,0,0,0,1,1,1,0,0,0},
 {0,1,1,0,1,0,0,0,0,0,0,0,0},
 {0,1,0,0,1,1,0,0,1,0,1,0,0},
 {0,1,0,0,1,1,0,0,1,1,1,0,0},
 {0,0,0,0,0,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,1,1,1,0,0,0},
 {0,0,0,0,0,0,0,1,1,0,0,0,0}};

std::cout<< Solution::maxAreaOfIsland(G); */
/* Max profit:
std::vector<int> V = {7, 1, 5, 3, 5, 4};
std::cout<< Solution::maxProfit(V);*/




	return 0;

}
