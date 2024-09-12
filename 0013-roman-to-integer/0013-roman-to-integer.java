class Solution {
    public int romanToInt(String s) {
    char[] ch = s.toCharArray();
        int[] arr = new int[ch.length];
        int ans = 0;
        for(int i = 0 ; i < ch.length ; i++){
            if(ch[i] == 'I'){
                arr[i] = 1;
            }else if(ch[i]=='V'){
                arr[i] = 5;
            }else if(ch[i]=='X'){
                arr[i] = 10;
            }else if(ch[i]=='L'){
                arr[i] = 50;
            }else if(ch[i]=='C'){
                arr[i] = 100;
            }else if(ch[i]=='D'){
                arr[i] = 500;
            }else if(ch[i]== 'M'){
                arr[i] = 1000;
            }else{
                System.out.println("Invalid -_-");
            }
        }
        for(int i=0;i<ch.length-1;i++){
            if(arr[i] < arr[i+1]){
                arr[i] = arr[i+1] - arr[i];
                arr[i+1] =0;
                i = i + 1;
            }
        }
        for(int i=0; i<ch.length;i++){
            ans = ans + arr[i];
        }
     return ans;
    }
}