// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void is_in_array(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            printf("Yes\n");
            return;
        }
    }

    printf("No\n");
}

int index_of_ele(int arr[], int size, int ele) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == ele) {  
            return i;
        }
    }
    return -1;
}

int char_to_ascii(char a) {
    return a - 0;
}


int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int element = 9;
    int size = 10;
    int ar2[23] = {1, 2, 3, 4, 5, 6};

    is_in_array(arr, size, element);
    is_in_array(ar2, 6, 5);

    int index = index_of_ele(arr, size, element);
    printf("%d\n", index);

    printf("%d", char_to_ascii('a'));
    return 0;
}
