#include <iostream>

using namespace std;

int main()
{
    int nt, np;
    int cont;
    int total, pontos;
    string nn; //parei aqui

    while(cin >> nt >> np && nt != 0)
        {
     total = 0;
     for(cont = 0; cont < nt; cont++) {
      cin >> nn ;
      cin >> pontos ;
      total += pontos;
     }

     cout << (np*3)-total << endl;
 }

    return 0;
}
