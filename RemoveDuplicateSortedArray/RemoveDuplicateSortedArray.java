class Solution {
    public int removeDuplicates(int[] nums) {
        int tam = nums.length;
        int k = 1, c = tam - 1;
        int[] result = new int[tam];

        result[0] = nums[0];
        for(int i = 1; i < tam; i++){
            if(nums[i] != nums[i-1]){
                result[k] = nums[i];
                k++;
            }
            else{
                result[c] = 0;
                c--;
            }
        }
        System.arraycopy(result, 0, nums, 0, tam);
        return k;
    }
}