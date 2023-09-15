// For the number of handshakes to be maximum, every person should hand-shake with every other person in the room

// i.e. all persons present should shake hands.

// For the first person, there will be N-1 people to shake hands with
// For second person, there will be N -1 people available but as he has already shaken hands with the first person, there will be N-1-1 = N-2 shake-hands
// For third person, there will be N-1-1-1 = N-3, and So On…
// Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.


#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
      int n ;
       cin >> n ; 
        cout << (n * (n-1))/2<<endl;
}