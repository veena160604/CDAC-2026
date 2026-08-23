class numberpatterns{
    public static void main(String[] args){
        //printing first half
        for(int i=1;i<=5;i++){
             for(int j=1;j<=i;j++){
            System.out.print(i);
            if(j<i){
                System.out.print("*");
            }
             }
             System.out.println();
        }
          //printing second half
           for(int i=5;i>=2;i--){
             for(int j=1;j<=i;j++){
            System.out.print(i);
            if(j<i){
                System.out.print("*");
            }
             }
             System.out.println();
           }

        }
       
    }
