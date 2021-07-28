/*
    https://www.spoj.com/problems/BSEARCH1/
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, x;
    
    cin >> n >> q;

    vector<int> nums(n);

    for (int a=0; a<n; a++) {
        scanf("%d", &nums[a]);
    } 

    for (int a=0; a<q; a++) {
        scanf("%d", &x);
        
        int left=0, right=n-1, ans = -1;
        while(left<=right) {
            int mid = (left+right)/2;

            if (nums[mid] >= x) {
                if(nums[mid]==x)
                    ans=mid;
                right = mid-1;
            }
            if (nums[mid] < x){
                left = mid+1;
            }
        }

        printf("%d\n", ans);

    }
    return 0; 
}