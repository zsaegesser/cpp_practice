#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int> > store(n, vector<int>(0));

    for(vector<vector<int> >::iterator it = store.begin(); it != store.end(); ++it){
      int x;
      cin >> x;
      it->assign(x, 0);
      for(vector<int >::iterator it2 = it->begin(); it2 != it->end(); ++it2){
        int y;
        cin >> y;
        *it2 = y;
      }
    }
    vector<int > answer(q, 0);
    for(int i=0; i< q; ++i){
      int x, y;
      cin >> x >> y;
      answer[i] = store[x][y];
    }
    for(vector<int >::iterator it = answer.begin(); it != answer.end(); ++it){
      cout << *it << "\n";
    }



    // for(vector<vector<int> >::iterator it = store.begin(); it != store.end(); ++it){
    //   for(vector<int >::iterator it2 = it->begin(); it2 != it->end(); ++it2){
    //     cout << *it2;
    //   }
    //   cout << "\n";
    // }

    return 0;
}
