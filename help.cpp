#include<bits/stdc++.h>
#include <sstream>
using namespace std;

//#define tr(container, it) for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)

/***********************************************************************/
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
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


bool mycomp(pair < pair <int ,string>, int > &p1, pair< pair <int , string>, int > &p2)
{
    return (p1.second > p2.second);
}

bool mycomp2(pair < pair <int ,string>, int > &p1, pair< pair <int , string>, int > &p2)
{
    return (p1.first.first > p2.first.first)&&(p1.second == p2.second);
}




void solve() {
    int n, k;

    scanf("%d %d", &n, &k);

    vector < pair < pair < int, string > , int > > v;

    map < string , int > m;

    vector < pair < pair < int, string > , int > > vcount;

    for(int i=0; i<3*n; i++)
    {
        string temp,buf;
        //char z[55];

        //while (cin.peek() != '\n')
        //{
        //    cin>>z;
        //    temp+=z;
        //    if(cin.peek()=='\n')
        //    break;
        //}

        //scanf(“%[^\n]”, temp);

        //stringstream ss(temp);
        //vector<string> tokens;
        //vector<string>::iterator ii;
        //while(ss >> buf)
            //tokens.push_back(buf);


        

        //cin.ignore();
        //cin.clear();
        //cin.getline(temp, '\n');

        //fgets(temp);


        //cout << ' ';
        //cin.

        //cout;

        //cout<<'\n';

        //cin>>temp;
        
        //(cin, temp);

        cin.ignore();

        getline(temp);

        //cout<<endl;
        //cin.ignore();

        //cin.ignore();
        //cin.get();
        //cin.getline(temp, STRLEN);
        //if (cin.fail()) {
        //    cin.clear();
         //   cin.ignore(numeric_limits<streamsize>::max(), '\n');
        //}


        //cin.clear();
        //fflush(stdin);

        //scanf("%s", &z);

        //scanf("%[^\n]", &temp);
        //cin.clear();

        m[temp]++;

        v.pb(mp(mp(i,temp),0));
         

    }


    //for(auto it = m.begin(); it!=m.end();it++)
    //{       
    //    cout << it->first << " : " << it->second << endl;
    //}

    //cout << endl;

    /*

    for(auto element:v)
    {
        //cout << element.first.first << " " << m[element.first.second] << endl;
        element.second += m[element.first.second];
        cout << element.first.first << " " << m[element.first.second] << endl;
        
    }
    cout << endl;
    */
    //;
    
    for(auto elem : v)
    {
        //cout << element.first.first << " , " << element.first.second << " : " <<element.second << endl;

        vcount.pb(mp(mp( elem.first.first , elem.first.second), m[elem.first.second]));

    }
    //printf("AGYE\n");

    sort(vcount.begin(),vcount.end(), mycomp);
    sort(vcount.begin(), vcount.end(), mycomp2);

    //for(auto element : vcount)
    //{
    //    cout << element.first.first << " : " << element.first.second <<" : "<< element.second << endl;
    //}

    vector < string > ans;
    //string temporar = "";

    for(int i=1; i<3*n+1; i++)
    {
       if(vcount[i].F.S  != vcount[i-1].F.S){
           ans.pb(vcount[i-1].first.second);
       }else{
           continue;
       }
        //ans.pb(vcount[i].first.second);


    }

    for(int i=0 ; i<k; i++)
    {
        cout<<ans[i]<<endl;
        //cin.get();
    }


    
    

}





/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int main() {
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    //int t = 1;
    //cin >> t;
    //while(t--) {
      solve();
    //}

    return 0;
}
