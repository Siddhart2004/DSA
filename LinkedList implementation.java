class linked_list {
    class node {
        int val;
        node next;
    }
    node head;
    linked_list() {
        head=null;
    }
    //insert at beginning
    void insert_front(int x) {
        node n=new node();
        n.val=x;
        n.next=head;
        head=n;
    }
    // insert at position 
    void insert_at(int pos,int x) {
        if(pos==1) {
            insert_front(x);
            return;
        }
        node temp=head;
        for(int i=1;i<pos-1&&temp!=null;i++) {
            temp=temp.next;
        }
        if(temp==null) return;
        node n=new node();
        n.val=x;
        n.next=temp.next;
        temp.next=n;
    }
    // delete from front
    void delete_front() {
        if(head==null) return;
        head=head.next;
    }
    // delete at position
    void delete_at(int pos) {
        if(head==null) return;
        if(pos==1) {
            delete_front();
            return;
        }
        node temp=head;
        for(int i=1;i<pos-1&&temp.next!=null;i++) {
            temp=temp.next;
        }
        if(temp.next==null) return;
        temp.next=temp.next.next;
    }
    // print ll
    void print() {
        node temp=head;
        while(temp!=null) {
            System.out.print(temp.val+" -> ");
            temp=temp.next;
        }
        System.out.println("NULL");
    }
}

class Main {
    public static void main(String[] args) {
        linked_list ll=new linked_list();
        ll.insert_front(1);
        ll.insert_front(2);
        ll.insert_front(3);
        ll.insert_at(2,4);
        ll.insert_front(5);
        ll.insert_at(3,6);
        ll.print();
        ll.delete_front();
        ll.print();
        ll.delete_at(2);
        ll.print();
    }
}
