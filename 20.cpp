class Solution {
public:
    bool isValid(string s) {
        stack<char>res;
        for(int i=0;i<s.length();i++){
        	if(res.empty()){
        		res.push(s[i]);
			}
			else{
				char tmp=res.top();
				if(	(s[i]==']'&&tmp=='[')	||	(s[i]=='}'&&tmp=='{')	||		(s[i]==')'&&tmp=='(')	){
	        		//cout<<"取出"<<tmp<<endl;
	        		res.pop();
	        		
				}
				else{
					//cout<<"放入"<<s[i]<<endl;
					res.push(s[i]);
				}
			}
		}
		if(res.empty())return true;
		else return false;
    }
};
