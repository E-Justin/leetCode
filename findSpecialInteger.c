// 5ms
// 7.19MB

int findSpecialInteger(int* arr, int arrSize) {
    int quarter = arrSize / 4;

    int count = 0;
    int curr_num = arr[0];

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == curr_num) {
            count++;
        }
        else {
            curr_num = arr[i];
            count = 1;
        }
        
        if (count > quarter) {
            printf("Returning %d\n", curr_num);
            return curr_num;
        }
    }
    return 0;
}
