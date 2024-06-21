/*
int singleNumber(int* nums, int numsSize) {
    int* hashMap = (int*)malloc(numsSize * sizeof(int) * 2); // Allocate memory for the hash map
    int hashMapSize = 0;
    for (int i = 0; i < numsSize; i++) {
        int found = 0;
        for (int j = 0; j < hashMapSize; j += 2) {
            if (hashMap[j] == nums[i]) {
                hashMap[j + 1]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            hashMap[hashMapSize] = nums[i];
            hashMap[hashMapSize + 1] = 1;
            hashMapSize += 2;
        }
    }
    for (int i = 0; i < hashMapSize; i += 2) {
        if (hashMap[i + 1] == 1) {
            int singleNum = hashMap[i];
            free(hashMap);
            return singleNum;
        }
    }

    free(hashMap);
    return -1; // Error case
}
*/
int singleNumber(int* nums, int numsSize){
    int answer = 0;
    for(int i = 0; i< numsSize; i++){
        answer = answer^nums[i];
    }
    return answer;
}

