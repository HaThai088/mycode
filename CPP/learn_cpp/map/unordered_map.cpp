/*
begin(): Trả về iterator đầu tiên của unordered_map.
end(): Trả về iterator cuối cùng của unordered_map.
find(key): Tìm kiếm key trong unordered_map và trả về iterator đến phần tử có key đó.
count(key): Kiểm tra xem key có tồn tại trong unordered_map hay không.
insert(pair): Thêm một phần tử mới vào unordered_map.
erase(key): Xóa phần tử có key khỏi unordered_map.
size(): Trả về số lượng phần tử trong unordered_map.
empty(): Kiểm tra xem unordered_map có rỗng hay không.
clear(): Xóa tất cả các phần tử khỏi unordered_map.
operator[]: Truy cập giá trị của phần tử có key cho trước.
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, int> myMap;

  // Thêm các phần tử vào map
  myMap["a"] = 1;
  myMap["b"] = 2;
  myMap["c"] = 3;

  // Truy cập giá trị dựa trên key
  cout << myMap["a"] << endl; // In ra 1

  // Tìm kiếm key trong map
  auto it = myMap.find("b");
  if (it != myMap.end()) {
    cout << "Key 'b' tồn tại trong map" << endl;
  }

  // Xóa phần tử khỏi map
  myMap.erase("c");

  // Duyệt qua map
  for (auto it = myMap.begin(); it != myMap.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}
