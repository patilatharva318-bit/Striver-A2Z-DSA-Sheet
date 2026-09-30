// this the better code.
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> merge;
        for (int i=0; i< a.size(); i++)
            merge.push_back(a[i]);
            
            for(int i=0; i<b.size();i++)
                merge.push_back(b[i]);
                
                sort(merge.begin(),merge.end());
                
                vector<int> temp;
                for(int i=0; i<merge.size()-1;i++){
                    if(merge[i]!=merge[i+1])
                    temp.push_back(merge[i]);
                }
                temp.push_back(merge[merge.size()-1]);
                return temp;
        
    }
};
// brute 
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> merge;
        for (int i=0; i< a.size(); i++)
            merge.push_back(a[i]);
            
            for(int i=0; i<b.size();i++)
                merge.push_back(b[i]);
                
                sort(merge.begin(),merge.end());
                
                vector<int> temp;
                for(int i=0; i<merge.size()-1;i++){
                    if(merge[i]!=merge[i+1])
                    temp.push_back(merge[i]);
                }
                temp.push_back(merge[merge.size()-1]);
                return temp;
        
    }
};

//optimal 

