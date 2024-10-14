//#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 108;

int a[maxn], b[maxn], aa[maxn], bb[maxn];

signed main(signed argc,char *argv[]) 
{
    freopen(argv[1],"r",stdin);
    int n, k;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort (b + 1, b + 1 + n);
    cin >> k;
    int head = 1, num = 0;
    for (int i = 1; i <=n; i++) {
        if(a[i] > b[head]) {
            num ++;
            head ++;
        }
    }
    if (num < k) {
        cout << "Normal" <<endl;
        return 0;
    }
    for (int i = 1; i <= n - k; i++) {
        aa[i] = a[i];
    }
    for (int i = k + 1; i <= n; i++) {
        bb[i - k] = b[i];
    }
    int tail = n - k;
    num = 0;
    for(int i = n - k; i >= 1; i--) {
        while (bb[i] < aa[tail] && tail > 0) {
            tail--;
        }
        if (tail <= 0) {
            break;
        }
        tail--;
        num++;
    }
    if (num > (n/2)) {
        cout << "HUST!" <<endl;
    }
    else {
        cout << "WHU!" <<endl;
    }
    return 0;
}