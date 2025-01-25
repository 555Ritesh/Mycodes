#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int> &arr, int target){
    unordered_map<int, int> hash;
    for(int i=0; i<arr.size(); i++){
        int complement = target - arr[i];
        if(hash.find(complement) != hash.end()){
            return {arr[hash[complement]], arr[i]};  // if actual values pair is asked
            // return {hash[complement], i}; // if indices pair is asked
        }
        hash[arr[i]] = i;
    }
    return {};
} // time complexity : O(n)

int main(){

    int target;
    cout << "Enter target : ";
    cin >> target;

    int n;
    cout << "Array size : ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cout << "Enter array elements at [" << i << "] index : ";
        cin >> arr[i];
    }

    cout << "Array : ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> result = twoSum(arr, target);
    cout << "Pair : " << result[0] << "," << result[1];

    return 0;
}