class Solution {
public:
    int minArray(vector<int>& numbers) {
        return binarySearch(numbers,0,numbers.size()-1);
    }
private:
    int binarySearch(vector<int>& numbers,int start,int end){
        if(start+1 >= end) return min(numbers[start],numbers[end]);
        int mid = (start+end)/2;
        if(numbers[mid]>numbers[end]){
            return binarySearch(numbers,mid,end);
        }else if(numbers[mid] <numbers[end] ){
            return binarySearch(numbers,start,mid);
        }else{
            return binarySearch(numbers,start,end-1);
        }
    }
};