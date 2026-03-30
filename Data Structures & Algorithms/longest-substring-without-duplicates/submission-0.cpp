class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>visited(256,false);

        int start=0,end=0,ans=0;

        while(end<s.size()){
            if(!visited[s[end]]){
                visited[s[end]]=true;
                ans=max(ans,end-start+1);
                end++;
                
            }
            else{
            visited[s[start]]=false;
            start++;
            }
        }
        return ans;
    }
};
