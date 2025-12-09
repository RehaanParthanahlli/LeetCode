//As function must returning sequence we must use pointer to point out the address.ie int* concatenate();.
//We use pointer for returnSize as its declared in main but its value is assigned outside main. ie &returnSize in main as in main we must give address and to access a address we use pointer ie *int in other func.
// int* returnSize is used as if int returnSize is used then we are changing just address value not the pointer value.
//int nums not used as nums is just address to access seq we must use pointers.


int* getConcatenation(int* nums, int numsSize, int* returnSize) /* If u declare a var in main and wanna change its value in other 
                                                                function u must give adress while calling function in main and   
                                                                pointer in other function as u wanna chnage value of that pointer
                                                                not address */
{
    *returnSize= 2*numsSize;
    //*returnSize= 2*numsSize; we use as if we use returnSize=2*numsSize address will be changed.
    int* new_array=(int*)malloc((*returnSize)*sizeof(int));
    //DSeq declaration int* new_array=(int*)malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numsSize;i++){
        new_array[i]=nums[i];
        new_array[i+numsSize]=nums[i];
    }
    return new_array;
}


#include <stdio.h>
#include <stdlib.h>
int main(){
    int nums[] = {1, 2, 3};
    int returnSize;
    int* ans = concatenate(nums, 3, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ans[i]);
    }
    free(ans);
}
