#include "iostream"
#include "stdio.h"
#include "string"
#include "vector"
#include "algorithm"
#include "math.h"
#include "iomanip"
//#include "unordered_set"
#define push push_back
#define ADD append
#define var auto
#define MAIN int main()
#define tostr(a) to_string(a)
#define VECINT vector<int>
#define INTMAX 2147483647
#define INTMIN -2147483648
#define MIN(a,b) (a<b ? a : b)
#define MAX(a,b) (a>b ? a : b)
#define ABS(a) (a > 0 ? a :-a)
#define all(a) begin(a),end(a)
#define rall(a) rbegin(a),rend(a)
#define int_pair pair<int,int>
#define sz(x) ((int)x.size())
#define len(A) ((int)a.length())
#define mkpair make_pair
#define MOD 1e9+7
#define sort(A) sort(A.begin(),A.end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define RFOR(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define REP(i,a) for(int i=0;i<(a);++i)
#define RREP(i,a) for(int i=(a)-1;i>=0;--i)
#define pow2(x) (1<<(x))
#define foreach(a,b) for(auto a : b)
#define in :
//#define a[] vector<a>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;

void trimLeftTrailingSpaces(string &input) {input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {return !isspace(ch);}));}

void trimRightTrailingSpaces(string &input) {input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {return !isspace(ch);}).base(), input.end());}

int stringToInteger(string input) {return stoi(input);}

string integerToString(int i){return to_string(i);}

string integerVectorToString(vector<int> list, int length = -1) {if (length == -1) length = list.size();if (length == 0)return "";string result;for(int index = 0; index < length; index++) {int number = list[index];result += to_string(number) + ", ";}return result.substr(0, result.length() - 2);}

string boolToString(bool a){return a?"true":"false";}

bool stringToBool(string a){return a=="true"?true:false;}

vector<int> stringToIntegerVector(string input) {vector<int> output;input = input.substr(0, input.length() - 1);stringstream ss;ss.str(input);string item;char delim = ' ';while (getline(ss, item, delim)) output.push_back(stoi(item));return output;}

static bool unlockStandardInputOutputStream = [](){ios::sync_with_stdio(0);cin.tie(nullptr);return 1;};

void reverse(vector<int> &a){int n = a.size();int hn = n >> 1;for(int i = 0;i< hn;i++)swap(a[i],a[n-i]);}

void reverse(vector<string> &a){int n = a.size();int hn = n >> 1;for(int i = 0;i< hn;i++)swap(a[i],a[n-i]);}

void reverse(vector<string> &a,int left,int right){if(right < left)swap(right,left);if(right == left||right > a.size())return;while(left < right){swap(a[left],a[right]);left++;right--;} }

int binaryfind(vector<int> a,int i){int left = 0,right = a.size();while(left<=right){int mid = left + (right-left)/ 2;if(a[mid] == i)return mid;if(a[mid] < i)mid = left + 1;else mid = left - 1;}return -1;}

int traversefind(vector<int> a,int f){for(int i = 0;i < a.size();i++)if(a[i] == f)return i;return -1;}

int findIndex(vector<int> a,int i,bool ordered){return ordered?binaryfind(a,i):traversefind(a,i);}

long long mypow(int n,int m){if(m==0)return 1;else if(m==1)return n;else if(m%2==0)return f(n*n,m/2);return f(n*n,m/2)*n;}
int quick_pow(int x,int m){long long answer = mypow(x,m);return answer <= INTMAX?answer:0;}
//----------------------------end-----------------------------

/*pattern of getting args
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        getline(cin, line);
        int target = stringToInteger(line);
        
        vector<int> ret = twoSum(nums, target);

        string out = integerVectorToString(ret);
        cout << out << endl;
    }
*/


int main(){
    
    
    return 0;
}


