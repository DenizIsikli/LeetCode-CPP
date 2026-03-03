#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformatDate(string date) {
        map<string,string>month={{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}};
        string ans="";
        stringstream ss(date);
        string day,mon,year;
        ss>>day>>mon>>year;
        day=day.substr(0,day.size()-2);
        if(day.size()==1)day="0"+day;
        ans+=year+"-"+month[mon]+"-"+day;
        return ans;
    }
};
