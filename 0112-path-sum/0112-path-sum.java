class TreeNode{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x){
        val=x;
        left=null;
        right=null;
    }
}
public class Main{
    static boolean hasPathSum(TreeNode root,int targetSum){
        if(root==null) return false;
        if(root.left==null&&root.right==null){
            return root.val==targetSum;
        }
        return hasPathSum(root.left,targetSum-root.val)
            ||hasPathSum(root.right,targetSum-root.val);
    }
    public static void main(String[] args){
        TreeNode root1=new TreeNode(5);
        root1.left=new TreeNode(4);
        root1.right=new TreeNode(8);
        root1.left.left=new TreeNode(11);
        root1.left.left.left=new TreeNode(7);
        root1.left.left.right=new TreeNode(2);
        root1.right.left=new TreeNode(13);
        root1.right.right=new TreeNode(4);
        root1.right.right.right=new TreeNode(1);
        int targetSum1=22;
        if(hasPathSum(root1,targetSum1)) System.out.println("root 1: true");
        else System.out.println("root 1: false");
        TreeNode root2=new TreeNode(1);
        root2.left=new TreeNode(2);
        root2.right=new TreeNode(3);
        int targetSum2=5;
        if(hasPathSum(root2,targetSum2)) System.out.println("root 2: true");
        else System.out.println("root 2: false");
    }
}
