import java.util.*;

class BinaryTree{

    static class Node{
        int val;
        Node left;
        Node right;
        Node(int x){
            val=x;
            left=null;
            right=null;
        }
    }

    Node root;

    BinaryTree(){
        root=null;
    }

    // insert
    void insert(int x){
        Node n=new Node(x);
        if(root==null){
            root=n;
            return;
        }
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            Node temp=q.poll();
            if(temp.left==null){
                temp.left=n;
                return;
            }else q.add(temp.left);
            if(temp.right==null){
                temp.right=n;
                return;
            }else q.add(temp.right);
        }
    }

    // BFS
    void bfs(){
        if(root==null) return;
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            Node temp=q.poll();
            System.out.print(temp.val+" ");
            if(temp.left!=null) q.add(temp.left);
            if(temp.right!=null) q.add(temp.right);
        }
        System.out.println();
    }

    // DFS(in)
    void inorder(Node root){
        if(root==null) return;
        inorder(root.left);
        System.out.print(root.val+" ");
        inorder(root.right);
    }

    // DFS(pre)
    void preorder(Node root){
        if(root==null) return;
        System.out.print(root.val+" ");
        preorder(root.left);
        preorder(root.right);
    }

    // DFS(post)
    void postorder(Node root){
        if(root==null) return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.val+" ");
    }

    public static void main(String[] args){
        BinaryTree bt=new BinaryTree();
        bt.insert(1);
        bt.insert(2);
        bt.insert(3);
        bt.insert(4);
        bt.insert(5);

        System.out.print("BFS: ");
        bt.bfs();
        System.out.print("Inorder: ");
        bt.inorder(bt.root);
        System.out.println();
        System.out.print("Preorder: ");
        bt.preorder(bt.root);
        System.out.println();
        System.out.print("Postorder: ");
        bt.postorder(bt.root);
        System.out.println();
    }
}
