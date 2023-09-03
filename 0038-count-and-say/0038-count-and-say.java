class Solution {
    public String countAndSay(int n) {
        if (n <= 0) {
            return "";
        }

        StringBuilder result = new StringBuilder("1");

        for (int i = 1; i < n; i++) {
            StringBuilder temp = new StringBuilder();
            char currentChar = result.charAt(0);
            int count = 1;

            for (int j = 1; j < result.length(); j++) {
                if (result.charAt(j) == currentChar) {
                    count++;
                } else {
                    temp.append(count);
                    temp.append(currentChar);
                    currentChar = result.charAt(j);
                    count = 1;
                }
            }

            temp.append(count);
            temp.append(currentChar);
            result = temp;
        }

        return result.toString();
    }
}
