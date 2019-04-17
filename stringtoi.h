class Solution {
public:
    int myAtoi(string str) {
        string nums = "0123456789";
        string posneg = "+-";
        string ret = "";
        int sign = 1;
        int sncnt = 0;
        int retu = 0;
        int spccnt = 0;
        
        if(str.size() == 0) return 0;
        
        for(char c : str){
            if(isspace(c) == false){
                if(posneg.find(c) != string::npos && sncnt == 0 && ret.size() == 0){
                    sncnt++;
                    if(c == '-') sign = -1;
                }
                
                else if(nums.find(c) != string::npos){
                    ret.push_back(c);
                    retu = retu*10+(c-'0');
                }
                
                else{
                    break;
                }
            }
            
            else if(isspace(c) != false && ret.size() >= 1){
                break;
            }
            else if(isspace(c) != false && sncnt > 0){
                return 0;
            }
        }        
        cout << retu << endl;
                        
        while(ret[0] == '0'){
            ret.erase(0,1);
        }
        
        if(retu == 0 && (ret == "0" || ret == "")) return 0;
        
        string current = ret;
        cout << current << " " << retu << endl;

        
        if(current != to_string(retu)){
           return (sign == -1)? INT_MIN : INT_MAX;
        }
        
        return retu*sign;
    }
};