class Main{

    static class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x){
            val=x;
            left=null;
            right=null;
        }
    }
    static boolean isMirror(TreeNode a,TreeNode b){
        if(a==null&&b==null) return true;
        if(a==null||b==null) return false;
        if(a.val!=b.val) return false;
        return isMirror(a.left,b.right)&&isMirror(a.right,b.left);
    }
    static boolean isSymmetric(TreeNode root){
        if(root==null) return true;
        return isMirror(root.left,root.right);
    }
    public static void main(String[] args){
        TreeNode root1=new TreeNode(1);
        root1.left=new TreeNode(2);
        root1.right=new TreeNode(2);
        root1.left.left=new TreeNode(3);
        root1.left.right=new TreeNode(4);
        root1.right.left=new TreeNode(4);
        root1.right.right=new TreeNode(3);
        TreeNode root2=new TreeNode(1);
        root2.left=new TreeNode(2);
        root2.right=new TreeNode(2);
        root2.left.right=new TreeNode(3);
        root2.right.right=new TreeNode(3);

        System.out.print("Tree 1: ");
        if(isSymmetric(root1)) System.out.println("true");
        else System.out.println("false");
        System.out.print("Tree 2: ");
        if(isSymmetric(root2)) System.out.println("true");
        else System.out.println("false");
    }
}
