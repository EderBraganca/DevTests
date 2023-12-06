class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int cont1 = 0, cont2 = 0, tam = n + m;
        int[] result = new int[tam];

        for (int i = 0; i < tam; i++) {
            if (cont1 < m) {
                if (cont2 >= n || nums1[cont1] < nums2[cont2]) {
                    result[i] = nums1[cont1];
                    cont1++;
                } else {
                    result[i] = nums2[cont2];
                    cont2++;
                }
            } else {
                result[i] = nums2[cont2];
                cont2++;
            }
        }
        System.arraycopy(result, 0, nums1, 0, tam);
    }
}
