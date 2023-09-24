public class localinner1 {
    private int data=30;
    void display(){
        class local {
            void msg()
            {
                System.out.println(data);
            }
        }
        local l=new local();
        l.msg();
    }
    public static void main(String args[]){
        localinner1 obj= new localinner1();
        obj.display();
    }
}
