#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	static int longestBalanced(vector<int>&nums){
		int n=nums.size(),len=0;
		for(int l=0;l<n;l++){
			unordered_map<int,int>freq;
			int cnt[2]={0,0};
			for(int r=l;r<n;r++){
				int x=nums[r];
				if(++freq[x]==1)cnt[x&1]++;
				if(cnt[0]==cnt[1])
					len=max(len,r-l+1);
			}
		}
		return len;
	}
};
