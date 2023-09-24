class arr{
    public static void main(String args[]) {
        int s[][]= new int [2][3];
        s[0][0]=10;
        s[0][1]=20;
        s[0][2]=30;
        s[1][0]=40;
        s[1][1]=50;
        s[1][2]=60;
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                System.out.println(s[i][j]);
            }
        }

    }
}


// ***********************************************************************************************

// // implementation of string array
// class arr
// {
// public static void main(String args[])
// {
// String s[]={"hi","good","day"};
// System.out.println("Entered elements are...");
// for(int i=0;i<s.length;i++)
// System.out.println(s[i]);
// }
// }