 class string_concat  {
    public static void main(String[] args) {
        String str1 = new String("hello");
        String str2 = new String(" world");
        String str3 = str1 + str2;
        boolean isSameObject = (str3 == str1);
        //str1 = str1.concat(str2);
        System.out.println("Is str3 pointing to the same object as str1? " + isSameObject);
    }
}