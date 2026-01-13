#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totArea=0,low=INT_MAX,high=0;
        for(auto&sq:squares){
            double y=sq[1],l=sq[2];
            totArea+=l*l;
            low=min(low,y);
            high=max(high,y+l);
        }
        double halfArea=totArea/2.0;
        for(int i=0;i<100;i++){
            double mid=low+(high-low)/2.0;
            if(calculateArea(squares,mid)>=halfArea)high=mid;
            else low=mid;
        }
        return high;
    }

    double calculateArea(vector<vector<int>>&squares,double curY){
        double area=0;
        for(auto&sq:squares){
            double y=sq[1],l=sq[2];
            double top=y+l;
            if(y>=curY)continue;
            else if(top<=curY)area+=l*l;
            else{
                area+=l*(curY-y);
            }
        }
        return area;
    }
};
