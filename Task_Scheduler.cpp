class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) return tasks.size();
        unordered_map<char,int>mp;
        for(auto x:tasks)mp[x]++;
        int maxFreq=0;
        for(auto x:mp)maxFreq=max(maxFreq,x.second);
        int countOfMaxFreq=0;
        for(auto x:mp) if(x.second==maxFreq)countOfMaxFreq++;
        int result= (maxFreq-1)*(n+1);
        result+=countOfMaxFreq;
        return max((int)tasks.size(),result);
    }
};

/*
-lengt hof arr
-cooling time int of double of ?
-just 26 tpyes of elemnt in arr
-


items that are occuring max no of times will impact it most eg

a=4 , b=2 , n=2 , we can have a task at 0,3,6,9
b->1,4

which has max frequnce & which elemnts have max frequency , we just need to find those
last set is most imp , 
eg a-> 4 
3*3+1





*/
