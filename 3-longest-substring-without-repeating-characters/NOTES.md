int n = s.size();
int maxi = 0;
unordered_set<char> st;
int start = 0, end = 0;
while(end < n)
if(st.find(s[end]) == st.end()){
st.insert(s[end]);
maxi = max(maxi, st.size());
end++;
}
else{
st.erase(s[start]);
start++;
}
}
return maxi;