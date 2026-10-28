/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) 
{
   
    int* ans = (int*)malloc((size_t)(2 * n) * sizeof(int));
    if (ans == NULL) 
    {          
        *returnSize = 0;
        return NULL;
    }
    *returnSize=2*n;
    int xi=0;
    int yi=n;
    for(int pos=0;pos<2*n;pos++)
    {
        if(pos%2==0)
        {
            ans[pos]=nums[xi];
            xi++;
        }
        if(pos%2!=0)
        {
            ans[pos]=nums[yi];
            yi++;
        }
    }
    
    return ans;

}
