class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        set<char> mys;
        for(int i=0;i<sentence.length();i++)
        {
            mys.insert(sentence[i]);
        }
        return mys.size()==26;
        
    }
};