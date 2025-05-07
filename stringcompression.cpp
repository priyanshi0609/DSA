int compress(vector<char>& chars) {
    int idx=0;
    int n= chars.size();
    int i;
    for(i=0;i<n;i++){
        int ch = chars[i];
        int count =0;
        while(i<n && chars[i]==ch){
            count ++;
            i++;
        }
     if(count==1){
        chars[idx++]=ch;
         }
     else{
        chars[idx++]=ch;
        string str= to_string(count);
        for(char dig : str){
            chars[idx++]= dig;
         }
       }
     i--;
    }
    
    chars.resize(idx);
    return idx;
}
