#include "../src/matrix_multiplication.hpp"
using namespace std;

void see_output(vector<vector<int>>a){
    for(int i = 0; i < (int)a.size(); i++){
        for(int j = 0; j < (int)a[0].size(); j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }
}


bool test1(int verdict){
    int rows1 = 3, rows2 = 3, cols1 = 3, cols2 = 3; 
    vector<vector<int>>a = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>b = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>res = {{30,36,42}, {66,81,96}, {102,126,150}};
    vector<vector<int>>ans = matrix_mul(a, b, rows1, cols1, rows2, cols2);
    if(res.size() != ans.size() || res[0].size() != ans[0].size()){
        return false;
    }
    for(int i = 0; i < (int)res.size(); i++){
        for(int j = 0; j < (int)res[0].size(); j++){
            if(res[i][j] != ans[i][j]){
                return false;
            }
        }
    }
    if(verdict){
        cout << "INPUT MATRIX 1 : " << endl;
        see_output(a);
        cout << "INPUT MATRIX 2 : " << endl;
        see_output(b);
        cout << "OUTPUT MATRIX : " << endl;
        see_output(ans);
    }
    return true;
}


bool test2(int verdict){
    int rows1 = 3, rows2 = 3, cols1 = 3, cols2 = 3; 
    vector<vector<int>>a = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>b = {{1,0,0}, {0,1,0}, {0,0,1}};
    vector<vector<int>>res = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>ans = matrix_mul(a, b, rows1, cols1, rows2, cols2);
    if(res.size() != ans.size() || res[0].size() != ans[0].size()){
        return false;
    }
    for(int i = 0; i < (int)res.size(); i++){
        for(int j = 0; j < (int)res[0].size(); j++){
            if(res[i][j] != ans[i][j]){
                return false;
            }
        }
    }
    if(verdict){
        cout << "INPUT MATRIX 1 : " << endl;
        see_output(a);
        cout << "INPUT MATRIX 2 : " << endl;
        see_output(b);
        cout << "OUTPUT MATRIX : " << endl;
        see_output(ans);
    }
    return true;
}


int main(){
    bool failed = false;
    bool one = test1(false);
    if(!one){
        failed = true;
        cerr << "TEST 1 FAILED\n" << endl;
    }else{
        cerr << "TEST 1 PASSED\n";  
        test2(true);
    }
    bool two = test2(false);
    if(!two){
        failed = true;
        cerr << "TEST 2 FAILED\n" << endl;
    }else{
        cerr << "TEST 2 PASSED\n";
        test2(true);
    }

    if(!failed){
        cerr << "BOTH TEST CASES PASSED, HURRAY!\n" << endl;
    }



}






