#include <bits/stdc++.h>
using namespace std;


    void merge(vector<int> &nums, vector<int> &temp, int start, int mid, int end)
    {
        int i = start;
        int j = mid + 1;
        int k = start;
        while (i <= mid && j <= end)
        {
            if (nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else
                temp[k++] = nums[j++];
        }
        while (i <= mid)
            temp[k++] = nums[i++];
        while (j <= end)
            temp[k++] = nums[j++];
        while (start <= end)
        {
            nums[start] = temp[start];
            start++;
        }
    }
    void correctPosition(vector<int> &nums,int target,int mid,int end){
        int j=mid+1;
        int count=0;
        while (j<=end)  
        {
            if(target>nums[j]) count++;
            j++;
        }
        j=mid+1;
        while(count>0){
            swap(nums[j],nums[j+1]);
            j++;
            count--;
        }
        
    }
    void inPlaceMergeMethodA(vector<int> &nums,int start,int mid,int end){
        int i=start;
        int j=mid+1;
        while (i<=mid&&j<=end  )
        {
            if(nums[i]<=nums[j]) i++;
            else{
                int target=nums[i];
                swap(nums[i],nums[j]);
                correctPosition(nums,target,mid,end);
                
            }
        }
        

    }
    void mergeSort(vector<int> &nums, vector<int> &temp, int start, int end)
    {
        if (start >= end)
            return;

        int mid = start + (end - start) / 2;
        mergeSort(nums, temp, start, mid);
        mergeSort(nums, temp, mid + 1, end);
        merge(nums, temp, start, mid, end);
    }
    void mergeSortA(vector<int> &nums,  int start, int end)
    {
        if (start >= end)
            return;

        int mid = start + (end - start) / 2;
        mergeSortA(nums,  start, mid);
        mergeSortA(nums,  mid + 1, end);
        inPlaceMergeMethodA(nums,  start, mid, end);
    }
    void inPlaceMergeMethodBetter(vector<int>&nums,int start,int mid,int end){
        int total=end-start+1;
        int gap=total/2+total%2;
        while(gap>0){
            int i=start,j=start+gap;
            while(j<=end){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
                i++;
                j++;
            }
            gap=gap<=1?0: (gap/2)+(gap%2);
        }
    }
    void mergeSortBetter(vector<int>& nums,int start,int end){
        if (start >= end)
            return;

        int mid = start + (end - start) / 2;
        mergeSortBetter(nums,start,mid);
        mergeSortBetter(nums,mid+1,end);
        inPlaceMergeMethodBetter(nums,start,mid,end);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        vector<int> temp(nums.size(), 0);
        mergeSort(nums, temp, 0, nums.size() - 1);
        return nums;
    }

/*
upar jo h woh merge sort h but with an extra space of the temp array but now i want to do this in o(1) solution 
jisme extra array na ho
sabse pehle pehla method dekh rha hu jisme do array given h array 1 1,2,8,9,12,13 and dusra array diya h 3,4,7,10 merko merge sort mei kya do sorted arrays ko hi toh merge karna rehta h na toh mai ab woh karne ka try kar rha hu sabse pehle pointer jo h woh iand j h jo dono 0 se inititalized h sabse pehle mai kya kiya array 1 mei check kar rha hu ki array 1 [0]<arr2[0] toh kuch nhi kiya i ko aage badha diye wapis same condition h toh wapis i aage badha diya ab jo h i ka pointer 8 pe h but 8 toh badha h three se toh mai kya karta hu ki 8 ko utha ke usko 3 ki jagah rakh deta and 3 ko 8 ki jagah in array 1 uske baad ab array ban gyi h 1,2,3,9,12,13 and 8,4,7,10 but ab array 2 sorted nhi h toh mai loop daal ke count karleta hu ki 8 se kitne elements chote h and then mai 8 ko uski sahi jagah daal deta hu
jo method b h usko ek baar revise kar hi lena warna pyhas jayega

*/
int main() {
    vector<int> arr = {5, 35, 95, 28, 44, 88, 68, 10, 15, 37, 95, 87, 54, 86, 13, 69, 80, 99, 13, 44};
    mergeSortA(arr,0,arr.size()-1);
    for(auto it: arr) cout<<it<<" ";
return 0;
}