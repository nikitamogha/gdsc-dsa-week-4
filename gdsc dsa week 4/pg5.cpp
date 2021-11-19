  void reverseString(vector<char>& s) {
       //using recursion
        revstring(s,0,s.size()-1);
        return;
    }
    void revstring(vector<char>&s,int left,int right)
    {
        if(left>=right)
            return;
        swap(s[right],s[left]);
        right--;
        left++;
        revstring(s,left,right);
    }
};