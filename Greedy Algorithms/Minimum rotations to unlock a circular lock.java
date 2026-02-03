class Main{
    static int minimumRotations(int currentCode,int unlockCode){
        int totalRotations=0;
        while(currentCode>0 || unlockCode>0){
            int currentDigit=currentCode%10;
            int targetDigit=unlockCode%10;

            int diff=Math.abs(currentDigit-targetDigit);
            totalRotations+=Math.min(diff,10-diff);

            currentCode/=10;
            unlockCode/=10;
        }
        return totalRotations;
    }
    public static void main(String[] args){
        int currentCode=2345;
        int unlockCode=5432;
        System.out.println(minimumRotations(currentCode,unlockCode));
    }
}
