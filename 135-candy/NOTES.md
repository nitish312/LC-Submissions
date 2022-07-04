int n = rat.size();
vector<int> ans(n,1);
for(int i=1;i<n;i++)
{
if(rat[i] > rat[i-1] && ans[i]<=ans[i-1])
ans[i]=ans[i-1]+1;
}
for(int i=n-2;i>=0;i--)
{
if(rat[i] > rat[i+1] && ans[i]<=ans[i+1])
ans[i]=ans[i+1]+1;
}
long long sum=0;
for(auto xx : ans)
{
sum+=xx;
// cout<<xx<<" ";
}
return sum;