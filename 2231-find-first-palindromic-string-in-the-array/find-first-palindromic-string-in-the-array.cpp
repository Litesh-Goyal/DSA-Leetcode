class Solution {
public:
    bool pa(string s)
    {
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-1-i]){return false;}
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    {
        for(int i=0;i<words.size();i++)
        {
            if(pa(words[i])){return words[i];}
        }
        return "";
        
    }
};