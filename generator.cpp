#include<iostream>
#include<random>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int inside = 0; // number of points inside the circle
    double total = 100000000; // total number of points to be generated. More points -> better results
    float x, y, vec_len; 
    for (int i = 0; i < total; i++){
        x = (float)rand() / (float)RAND_MAX; //generating point's coordinates [0, 1]
        y = (float)rand() / (float)RAND_MAX;
        vec_len = pow(x,2) + pow(y,2); // calculate the distance from [0, 0] to [x, y]
        if (vec_len <= 1){ //determine whether the point is inside th circle (circle radius is 1)
            inside++;
        }
    }
    double pi = (double)(inside/total)*4.0;  // calculate pi using areas' formulae
    cout << fixed << setprecision(10) << pi << endl;
    return 0;
}