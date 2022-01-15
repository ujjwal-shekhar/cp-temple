#include<bits/stdc++.h>
using namespace std;


/***********************************************************************/
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1) //for loop from k to n in correct order
#define ll long long
#define si(x)	scanf("%d",&x)        //scan int
#define sl(x)	scanf("%lld",&x)      //scan long long
#define ss(s)	scanf("%s",s)         //scan string
#define pi(x)	printf("%d\n",x)      //print int
#define pl(x)	printf("%lld\n",x)    //print long long
#define ps(s)	printf("%s\n",s)      //print string
/***********************************************************************/




/***********************************************************************/
#define deb(x) cout << #x << "=" << x << endl  //prints /name of x/ = /value of x/
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl 

#define pb push_back
#define mp make_pair

#define F first
#define S second

#define all(x) x.begin(), x.end()

#define clr(x) memset(x, 0, sizeof(x))

#define sortall(x) sort(all(x))

#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
/***********************************************************************/




/***********************************************************************/
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;    //pair of two integers
typedef pair<ll, ll>	pll;    //pair of two long long
typedef vector<int>		vi;     // int vector
typedef vector<ll>		vll;    // long long vector
typedef vector<pii>		vpii;   // vector of pair of int int
typedef vector<pll>		vpll;   //vector of pair of long long, long long
typedef vector<vi>		vvi;    //2d vector ov int
typedef vector<vll>		vvll;   //2d vector of long long
/***********************************************************************/




/***********************************************************************/
//mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//int rng(int lim) {
//    uniform_int_distribution<int> uid(0,lim-1);
//    return uid(rang);
//}

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

bool isPowerTwo(int n)
{
    int rem=1;

    while(rem<n)
    {
        rem*=2;
    }

    if(rem==n){
        return true;
    }else{
        return false;
    }
    
}

int gcd(int a, int b)
{
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
    
}

// gcd(56,133) = 7
// gcd(21, 56)
// gcd(14 ,21)
// gcd(0 , 7) = 7



void solve() {
    int n ;
    si(n);

    // a + b + c = n;
    // c = 1

    // c++;

    // k + m = 2y + 1

    // x + y = 2n;
    // x = 2k +1
    // y = 2m + 1

    //k+ m = n-1; --> n even

    //k + m = n-1; --> n is odd 

    // n = 2**k 

    // 

    // a+ b = 2**k -2;

    // p + q = 2**(k-1) - 1;

    // 
    
    int op1,op2,op3;

    if(n%2==0){

        op3 = 1;
        int sum = n-1;

        op1 = sum/2;
        op2 = op1 + 1;

    }
    
    
    
    else{
        // EVEN HO GAYA
        op3 = 1;

        // op2 = n - op1 -1
        // 

        op1 = 3;
        op2 = n-4;

        while(op1 < (n-1)/2)
        {
            if(gcd(min(op1, op2), max(op1,op2))==1){
                break;
            }else{
                op1+=2;
                op2-=2;
            }
        }

        //  n = 19;
        //  op1 + op2 = 18;
        //  3 , 15 --> 
        // 5, 13 -->
        // 7, 11 -->
        // 9 , 9 X



    }
    

}///





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int main() {
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
