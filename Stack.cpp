#include<iostream>

using namespace std;
 
const int MaxN = 1e6 + 1;
 
int n, a[MaxN];

/*
    stack : một 'cấu trúc dữ liệu' 
            hoạt động theo nguyên tắc LAST In First Out
*/

struct CustomStack{
    int sz = 0; // Kích thước stack
    int a[int(1e6 + 1)]; // Mảng được giả làm stack với 
                        //kích thước tối đa 1e6
    // Thêm phần tử vào stack
    void push(int element){
        a[sz] = element;
        sz++;
    }
    // Xoá phần tử khỏi stack
    void pop(){
        if(sz) sz--;
    }
    // Lấy giá trị cuối cùng trong stack
    int top(){
        if(sz) return a[sz - 1];
    }
    // Lấy kích thước stack
    int size(){
        return sz;
    }
};


void dost(){

}
 
int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);


    CustomStack iStk;
    // them ptu vao stack
    iStk.push(1);
    iStk.push(4);

    cout<<"Phan tu cuoi trong stack : "<<iStk.top()<<endl;
    cout<<"Kich thuoc hien tai cua stack : "<<iStk.size()<<endl;

    //loai bo ptu khoi stack
    iStk.pop();

    CustomStack st;
    cin >> n;
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    for(int i = 0 ; i < n ; ++i){
        // empty() luôn phải được đặt 
        // trước khi gọi top() hoặc pop()
        while(a[st.top()] < a[i]) st.pop();
            cout << st.top() + 1 << " ";
        st.push(i);
    }

    // cin >> n;
    // for(int i = 0 ; i < n ; ++i) cin >> a[i];
    // for(int i = 0 ; i < n ; ++i){
    //     int pos = -1; // Khởi tạo giá trị kết quả ban đầu
    //     for(int j = i - 1 ; j >= 0 ; --j)
    //     if(a[j] > a[i]){
    //         // Nếu tìm thấy vị trí j thoả mãn thì ghi lại và dừng vòng lặp
    //         pos = j;
    //         break;
    //     }
    //     // Kiểm tra xem có tồn tại vị trí j không, nếu có thì giá trị pos sẽ nằm trong đoạn [0, n – 1]
    //     // In ra phải cộng 1 do chỉ số mảng trong C++ bắt đầu từ 0
    //     if(pos >= 0) cout << pos + 1 << " ";
    //     else cout << -1 << " ";
    // }
 
    return 0;
}
