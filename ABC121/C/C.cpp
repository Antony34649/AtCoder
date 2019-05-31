#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,i;
    long long ans = 0;
    cin >> n >> m;
    vector<pair<long,long>> ab(n);

    for(i=0;i<n;i++) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.begin(),ab.end());

    for(i=0;i<n;i++){
        if(ab[i].second < m){
            ans += ab[i].first * ab[i].second;
            m -= ab[i].second;
        }else{
            ans += ab[i].first * m;
            break;
        }
    }

    cout << ans << endl;
}