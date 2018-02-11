nums = [13, 9, 1, 3, 5]

for i in range(1, len(nums)):
    tmp = nums[i]
    j = i - 1
    while j > -1 and nums[j] > tmp:
        nums[j+1] = nums[j]
        j = j - 1

    nums[j+1] = tmp

print(nums)
