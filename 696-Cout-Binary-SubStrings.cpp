ass Solution {
public:
    int countBinarySubstrings(string s) {
        int number = s.size();
        int counter = 0;
        int cPre = 0;
        int cCur = 1;
        char pre;
        char cur = s[0];
        for(int i=1; i< number; i++){
            if(cur != s[i]){
                pre = cur;
                cPre = cCur;
                cur = s[i];
                cCur = 1;
            }else{
                cCur = cCur+1;
            }
            if(cur!= pre & cPre>=cCur){
                counter++;
            }
        }
        return counter;
    }
};
