#include <iostream>
#include <string> 
#include <cmath>

using namespace std;

struct  urav
{
    long long int vv;
    long long int v;
    long long int n;

};

int main()
{
    urav lol[2];
    string kekw, Kurisu;
    long long int Maki[9];

    cin >> kekw; cin >> Kurisu;
    
    int size = kekw.size() / 2;


    int x = 1;
    for (size_t i = 0; i < size-1; i++)
    {
        x = x * 10;
    }
    int one = 1;
    //cout << size << endl;
    if (kekw.size() > 4)
    {
        for (size_t i = 4; i < kekw.size(); i = i + 2)
        {
            one++;
        }
    }
    cout << one << endl;

    lol[0].n = stoi(kekw.substr(kekw.size() - size + 1, size - 1));  
    cout << lol[0].n << endl;

    kekw.erase(kekw.size() - one);
    lol[0].v = stoi(kekw.substr(kekw.size() - size + 1, size - 1));
    cout << lol[0].v << endl;
    
    kekw.erase(kekw.size() - one);
    lol[0].vv = stoi(kekw.substr());
    cout << lol[0].vv << endl;

    cout << "///////////////////" << endl;

    lol[1].n = stoi(Kurisu.substr(Kurisu.size() - size + 1, size - 1));
    cout << lol[1].n << endl;

    Kurisu.erase(Kurisu.size() - one);
    lol[1].v = stoi(Kurisu.substr(Kurisu.size() - size + 1, size - 1));
    cout << lol[1].v << endl;

    Kurisu.erase(Kurisu.size() - one);
    lol[1].vv = stoi(Kurisu.substr());
    cout << lol[1].vv << endl;

    cout << "///////////////////" << endl;

    Maki[0] = lol[0].vv * lol[1].vv;
    Maki[1] = lol[0].vv * lol[1].v;
    Maki[2] = lol[0].vv * lol[1].n;

    Maki[3] = lol[0].v * lol[1].vv;
    Maki[4] = lol[0].v * lol[1].v;
    Maki[5] = lol[0].v * lol[1].n;

    Maki[6] = lol[0].n * lol[1].vv;
    Maki[7] = lol[0].n * lol[1].v;
    Maki[8] = lol[0].n * lol[1].n;

    Maki[1] += Maki[3];
    Maki[2] += Maki[4] + Maki[6];
    Maki[3] = Maki[5] + Maki[7];
    Maki[4] = Maki[8];
   

    for (size_t i = 0; i < 5; i++)
    {
        cout << Maki[i] << endl;
    }
   
    cout << "///////////////////" << endl;

    Maki[0] = Maki[0] * (pow(x, 4));
    cout << Maki[0] << endl;
    Maki[1] = Maki[1] * (pow(x, 3));
    cout << Maki[1] << endl;
    Maki[2] = Maki[2] * (pow(x, 2));
    cout << Maki[2] << endl;
    Maki[3] = Maki[3] * x;
    cout << Maki[3] << endl;
   
    cout << "///////////////////" << endl;
    for (size_t i = 1; i < 4; i++)
    {
        Maki[0] += Maki[i];
    }
   
    cout << "///////////////////" << endl;
    cout << Maki[0] << endl;
}

