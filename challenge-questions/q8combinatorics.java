import java.util.*;
public class q8combinatorics {
    public static int count = 0;
    public static void permute(List<String> lst, int n, int len) {
        if (len == 0) {
            for (int i = 0; i < n; i++) lst.add(Character.toString('A' + i));
            for (String elem : lst) { System.out.println(elem); count++; }
        } else {
            int s = lst.size();
            for (int j = (len == 1)? 0 : n; j < s; j++) {
                for (int i = 0; i < n; i++) {
                    if (!lst.get(j).contains(lst.get(i))) {
                        lst.add(lst.get(j) + lst.get(i));
                        System.out.println(lst.get(j) + lst.get(i));
                        count++;
                    }
                }
            }
            if (len != 1) { for (int i = 0; i < s - n; i++) lst.remove(n); }
        }
    }

    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        Scanner s = new Scanner(System.in);
        System.out.print("n: ");
        int n = s.nextInt();
        s.close();
        for (int i = 0; i < n; i++) {
            permute(list, n, i);
        }
        System.out.println("count: " + count);
    }
}
