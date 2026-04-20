#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 1e9+7;
const int INF = 1e18;

// lmin = 34 8 8 3 2 2 2 2 2 1
// rmax = 80 80 80 80 80 80 80 33 33 1

// Ý tưởng: Thay vì tìm mỗi i thì j lớn nhất là bao nhiêu, ta tạo hai mảng lmin (Giá trị min
// khi tính đến i từ bên trái) và rmax (Giá trị max khi tính đến i từ bên phải). Xuất phát từ
// việc so sánh i = 0 và j =0 ta nhận thấy rằng ở vị trí `0` thì ở bên trái tồn tại một giá
// trị nhỏ hơn bên phải (Giá trị đó chính là lmin[i] < rmax[j]) -> Ta tự tin mở rộng j sang
// bên phải để tìm một con j lớn hơn mà vẫn thỏa mãn là bên phải tồn tại phần tử lớn hơn
// bên trái. Ta tạm coi j tăng từ 0->n-1 là phân tử bé nhất nên nếu lmin thay đổi giá trị sang
// bé hơn thì ta đang đứng ở phần tử bé nhất đó còn các phần tử lớn hơn sau đó chỉ có nhiệm 
// vụ là lưu vết "Không còn ai bé hơn cậu vừa rồi nữa đâu" -> Ta thấy i tăng từ bên trái rất chậm
//  và nếu sai thì sẽ đi hàng loạt luôn => Thể hiện hai điều đó là phần tử nhỏ nhất luôn
// ở bên trái ngoài cùng và nếu các phần tử sau lớn hơn thì sẽ đi hàng loạt không cần xét
// đến nữa vì không có trường hợp nào tốt hơn đâu.

// Lí do cách này có hiệu quả: Xét mỗi vị trí i và coi đó là phần tử bé nhất thì sẽ mở rộng
// được đến đâu sang bên phải xa nhất. Nếu ta mò bằng các cho con trỏ j chạy đến cuối rồi
// lưu kỉ lục thì lại O(n^2) còn ta giữ mảng trạng thái lớn nhất thì ta không cần biết phần
// tử tại j lớn hay bé hơn tại i chỉ cần biết là phần tử lớn hơn i cuối cùng vẫn đang ở bên phải.

// Chốt lại mấu chốt của cách làm: Mảng lmin dùng để lưu trạng thái nhỏ nhất cho đến i và duyệt
// từ trái cùng sang cho ta thấy là ta quan tâm đến phần tử bé xa nhất (càng xa càng tốt)
// rồi với mỗi vị trí phần tử bé đó ta mở rộng sang bên phải vì mảng rmax lưu giá trị lớn nhất
// từ phải sang cho đến j. Phát biểu bằng lời: "Bạn là nhỏ nhất đúng không, ở tít bên kia tôi 
// vẫn có phần tử lớn hơn bạn để tôi đi tìm cho. Nếu như giá trị lớn nhất nhưng nhỏ hơn giá trị 
// kia của tôi nhỏ hơn bạn rồi thì bạn dịch sang giá trị nhỏ thứ 2 đi xem có mở rộng ra được
// tí nào nữa không."

signed main() {
    fastio;
    
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int &x:a) cin >> x;
        int lmin[n], rmax[n];
        lmin[0] = a[0], rmax[n-1] = a[n-1];
        for (int i = 1; i < n-1; i++) lmin[i] = min(lmin[i-1], a[i]);
        for (int i = n - 2; i >= 0; i--) rmax[i] = max(rmax[i+1], a[i]);
        int i = 0, j = 0, ans = -1;
        while (i < n && j < n){
            if (lmin[i] < rmax[j]){
                ans = max(ans, j-i);
                j++;
            }
            else i++;
        }
        cout << ans << endl;
    }
    return 0;
}