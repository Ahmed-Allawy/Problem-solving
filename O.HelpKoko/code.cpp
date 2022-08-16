#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#include <map>
#include <cmath>
#include <set>
#include<string>
#include <hash_map>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <bitset>
#include<stack>
#define re return 0;
#define lo long long
#define PI  3.1415926535897932384626
#define mod (1000000000+7)
#define endl '\n'

#define MAX 10
#define mx_all(c)    *max_element((c).begin(), (c).end())
#define mn_all(c)    *min_element((c).begin(), (c).end())
#define all(c) (c).begin(), (c).end()
#define ull  unsigned long long
#define sonik ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'

using namespace std;

bool isPrime(lo n)
{
    for (lo i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void operations(int number, int operation, int p){
	if(operation==1)
		if(number<=1) cout<<-1<<' ';
		else if(number==2) cout<<0<< ' ';
		else
			if(isPrime(number))
				cout<<5<<' ';
			else cout<<-1<<' ';

	else
		cout<<0<<' ';
}
//__builtin_popcount() -> to count the number of one’s(set bits) in an integer.

const int m=1e9+7;

int main() {
  //freopen("girls.in", "r", stdin);
// freopen("input.txt", "rt", stdin);
//freopen("girls.in", "wt", stdout);
    sonik
    lo listSize,power;
    cin>>listSize>>power;
    vector<lo>number(listSize),operation(listSize);
    for (int i = 0; i <listSize ; ++i) {
        cin>>number[i];
    }
    for (int i = 0; i <listSize ; ++i) {
        cin>>operation[i];
    }
    for (int i = 0; i <listSize ; ++i) {
        operations(number[i], operation[i], power);
    }
}
