class Solution {
public:
    void generate(string s , vector<string> &result , int n){
        if(s.size() == n){
            result.push_back(s);
            return;
        }

        s.push_back('0');
        generate(s , result , n);
        s.pop_back();

        if(s.empty() || s.back() != '1'){
            s.push_back('1');
            generate(s , result , n);
            s.pop_back();
        }
    }

    vector<string> generateBinaryStrings(int n) {
        string s;
        vector<string> result;

        generate(s , result , n);

        return result;
    }
};