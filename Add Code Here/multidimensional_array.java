/* 
 multidimensional array
 int[][] a  = new int [4][8]; //    here we create  a multidimensiomal array named a  it ius a 2d array of length 32

 // 3d array
 int [][][] a = new int [4][6][2] // it is a 3d element  that can hold maximum of 48 element of int type

// initialize 2d array
int[][] a = {
    {4,5},
    {1,2,3},
    {7,8,9,6},
};

*/
public class multidimensional_array{
    public static void main(String[] args) {
        int[][] a = {
            {4,5},
            {1,2,3},
            {7,8,9,6},
        };
        for(int i=0;i<a.length;i++){
            for(int j = 0;j<a[i].length;j++){
                System.out.println("all elements are" +a[i][j]);
            }
        }
        System.out.println("length of row 1 is   " +a[0].length);
        System.out.println("2nd element of row 1 is  "+a[0][1]);
    }
}
/*
Another way to access all the elements of 2d array

 public class multidimensional_array{
    public static void main(String[] args) {
        int[][] a = {
            {4,5},
            {1,2,3},
            {7,8,9,6},
        };
        for(int[] b:a){
            for(int c:b){
                    System.out.println(c); 
            }
        }
   
    }
}
 */



 /*
  3d array 

class ThreeArray {
    public static void main(String[] args) {

        // create a 3d array
        int[][][] test = {
            {
              {1, -2, 3}, 
              {2, 3, 4}
            }, 
            { 
              {-4, -5, 6, 9}, 
              {1}, 
              {2, 3}
            } 
        };

        // for..each loop to iterate through elements of 3d array
        for (int[][] array2D: test) {
            for (int[] array1D: array2D) {
                for(int item: array1D) {
                    System.out.println(item);
                }
            }
        }
    }
}

  */


