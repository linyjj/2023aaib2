class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None: return root
        left=self.removeLeafNodes(root.left,target)
        right=self.removeLeafNodes(root.right,target)
        if left==None and right==None and root.val==target:
            return None
        root.left=left
        root.right=right
        return root