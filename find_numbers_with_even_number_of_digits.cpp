int findNumbers(int* nums, int numsSize){
int count1=0,count=0,i;
    for(i=0;i<numsSize;i++){
    while(nums[i]!=0){
       nums[i]= nums[i]/10;
        count1++;
    }
        if(count1%2==0){
            count++;
        }
        count1=0;
}
    return count;
}
