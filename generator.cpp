#include<iostream>
#include<random>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int inside = 0;
    double total = 100000000;
    float x, y, vec_len;
    for (int i = 0; i < total; i++){
        x = (float)rand() / (float)RAND_MAX;
        y = (float)rand() / (float)RAND_MAX;
        vec_len = pow(x,2) + pow(y,2);
        if (vec_len <= 1){
            inside++;
        }
    }
    double ans = (double)(inside/total)*4.0;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}