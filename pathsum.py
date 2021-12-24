class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        
        if not root:
            return False
        
        
        # Why 2 values hmm
        stack =[(root, root.val)] 
        
        # While stack not empty
        while (stack):
            # 2 pair in stack
            # Curr is pointer to current node while val holds current sum
            curr, val = stack.pop() 
            
            if not curr.right and not curr.left and val == targetSum:
                return True
            
            if curr.right:
                stack.append((curr.right, val + curr.right.val))
                             
            if curr.left:
                stack.append((curr.left, val + curr.left.val))            
        return False