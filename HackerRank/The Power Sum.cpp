//https://www.hackerrank.com/challenges/the-power-sum/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */
int if_nth_root_exists(int X, int N)
{
    int nth_root = pow(X, 1.0/N);
    if(pow(nth_root, N)==X)
        return 1;
    else 
        return 0;
}

int powerSumFinder(int remaining_sum, int power,  int where_to_check_from) {

    int result = pow(where_to_check_from, power);
    
    if(result==remaining_sum)
        return 1;
    else if(result>remaining_sum)
        return 0;
    //else
    
    int x = powerSumFinder(remaining_sum - result, power, where_to_check_from + 1);
    int y = powerSumFinder(remaining_sum, power, where_to_check_from + 1);
    
    return x+y;
    
    
    // else
    // {
    //     int nth_root = pow(X, 1.0/N);
    //     for(int i=0; i<= nth_root; ++i)
    //     {
    //         int the_other_number = X - pow(i,N);
    //         if(if_nth_root_exists(th_other_number, N)==1)
    //             count++;
    //     }
    // }

}

int powerSum(int X, int N)
{
    return powerSumFinder(X,N,1);
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
