class gradeevaluation{
    public static void main(String[]args){
        int marksinmaths=80;
        int marksinscience=85;
        int marksinhistory=90;
        int average=(marksinmaths+marksinscience+marksinhistory)/3;
        if(average>=90){
            System.out.println("Grade:A");
        }else if (average>70&&average<89){
            System.out.println("Grade:B");
        }else if(average>50&&average<69){
            System.out.println("Grade:C");
        }else if(average>30&&average<49){
            System.out.println("Grade:D");
        }else{
            System.out.println("Fail");
        }
    }
}

