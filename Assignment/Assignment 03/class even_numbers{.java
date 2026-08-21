class evenNumbers {
    void evenNumber(int i) {
        while (i <= 50) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
            i++;
        }
    }

    public static void main(String[] args) {
        evenNumbers obj = new evenNumbers();
        obj.evenNumber(1);
    }
}
