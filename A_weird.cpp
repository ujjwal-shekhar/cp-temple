#include <bits/stdc++.h>
using namespace std;
#define tr(container, it) for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)


int main()
{
    int n,k;

    cin>>n>>k;

    set < string > sv;
    vector < pair <int, string> > v;

    //vector < pair < int , map <string , int> > > v;


    for(int i=0; i<3*n; ++i)
    {
        string temp;

        //if(i!=0){
        cin.ignore();
        //}
        
        //sv.insert(temp);
        getline(cin, temp);

        sv.insert(temp);
        v.push_back(make_pair(i , temp));


        //mp[make_pair(i , temp)]++;

        
        //v.push_back(make_pair(i , ));
        
        
    }

    vector <pair <int, string> > vcount;



    for(auto elem:sv)
    {
        for(int i=0; i<3*n;++i)
        {
            if(elem == v[i].second){
                
            }
        }
    }





    //set < string > sv(v.begin(), v.end());

    //for(auto elem : sv)
    //{
    ////    cout<<elem<<" ";
    //}
    //cout<<endl;

        //sort(v.begin(), v.end(), myCompare);



    //for(int i=0; i<3*n; i++)
   // {
        
    //    cout<<v[i].first << " : " <<  v[i].second << endl;

    //}

    /*
        for(int i=0; i<=3*n; ++i)
        {
            string temp;
            //scanf("%s", &temp);


            getline(cin, temp);


            M[temp]++;
        }




        tr(M,it)
        {
            string iterer = it->first;
            int iterar = it->second;

            cout<<iterer << " : "<<iterar<<"\n";
        }

        //sort(M.begin(),M.end(), )

        //cout<<endl;
    */
    return 0;
}
