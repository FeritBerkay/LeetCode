#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
        //int result =0;
        // if(cost.size()==2){
        //     return min(cost[0], cost[1]);
        // }
        // if(cost[1]< cost[0]+cost[2]){
        //     result+= cost[1];
        //      for(int i = 2; i<cost.size()-1; i++){
        //     if(cost[i]<cost[i+1]){
        //         result += cost[i];
        //     }
        //     else{
        //         result += cost[i+1];
        //         i++;
        //     }
        //      }
        // }
        // else{
        //     result += cost[0] + cost[2];
        //     for(int i = 3; i<cost.size()-1; i++){
        //     if(cost[i]<cost[i+1]){
        //         result += cost[i];
        //     }
        //     else{
        //         result += cost[i+1];
        //         i++;
        //     }
        // }
        // }

        // int index0 = 0;
        // int index1 = cost[1];
        // for(int i = 0; i<cost.size()-1; i++){
        //     if(cost[i]<cost[i+1]){
        //         index0 += cost[i];

        //     }
        //     else{
        //         index0 += cost[i+1];
        //         i++;
        //     }
        // }
        // for(int i = 2; i<cost.size()-1; i++){
        //     if(cost[i]<cost[i+1]){
        //         index1 += cost[i];
        //     }
        //     else{
        //         index1 += cost[i+1];
        //         i++;
        //     }
        // }

        // return min(index0,index1);

        // vector<int> calcost;
        // calcost[0] = cost[0];
        // calcost[1] = cost[1];
        // //calcost[2] = min(cost[1], cost[0] + cost[2]);
        // for(int i = 3; i < cost.size() - 1; i++){
        //     calcost[i] = min(calcost[i-1], calcost[i-2] + calcost[i]);
        // }
        // return min(calcost[cost.size()-2], calcost[cost.size()-3]+calcost[cost.size()-1]);
        int n=cost.size();
        for(int i=2;i<n;i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};