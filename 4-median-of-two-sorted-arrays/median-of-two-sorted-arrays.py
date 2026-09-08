class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in range(len(nums2)):
            nums1.append(nums2[i])
        nums1=sorted(nums1)
        index=len(nums1)//2
        if len(nums1)%2==0:
            return (nums1[index]+nums1[index-1])/2
        return nums1[index]