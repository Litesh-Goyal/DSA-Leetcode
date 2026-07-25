class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string reverseVowels(string s)
    {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            while(l<r && !isVowel(s[l])){l++;}
            while(l<r && !isVowel(s[r])){r--;}
            if(l<r){swap(s[l++],s[r--]);}
        }
        return s;
        // vector<int> ans;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        //     {
        //         ans.push_back(i);
        //     }
        // }
        // for(int i=0;i<ans.size()/2;i++)
        // {
        //     swap(s[ans[i]],s[ans[ans.size()-i-1]]);
        // }
        // return s;
    }
};