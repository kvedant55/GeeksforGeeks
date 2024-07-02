class Solution:
    # Function to remove duplicates from a string.
    def removeDuplicates(self, string):
        # Creating a dictionary to store frequency of characters.
        hash_table = {}
        # Declaring a string to store the final answer.
        ans = ""
        # Iterating over every character in the string.
        for c in string:
            # If the character is encountered for the first time,
            # adding it to the answer string and updating its frequency.
            if c not in hash_table:
                ans += c
                hash_table[c] = 1
        # Returning the answer string without duplicates.
        return ans






#{ 
 # Driver Code Starts
#Initial Template for Python 3





if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        str = input().strip()
        ob = Solution()
        ans = ob.removeDuplicates(str)
        print(ans)
        tc -= 1

# } Driver Code Ends