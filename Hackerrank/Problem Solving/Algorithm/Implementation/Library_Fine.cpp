#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d2, int m2, int y2, int d1, int m1, int y1) {
    int fine = 0;
    if (y1==y2) {
        if (m1==m2){
            if (d1>=d2) {
                fine = 0;
            }
            else{
                fine=15*(d2-d1);
            }
        }
        else if (m1<m2) {
            fine = 500*(m2-m1);
        }
    }
    else if (y1<y2) {
        fine = 10000*(y2-y1);
    }
    return fine;
}

int main()
{
    int d1, d2, y1, y2, m1, m2;
    cin >>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    int result = libraryFine(d1, m1, y1, d2, m2, y2);

    cout << result << "\n";
    return 0;
}
