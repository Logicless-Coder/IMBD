#include "../headers/key.h"
#include <bits/stdc++.h>

using namespace std;

Key::Key(string _data) { data = _data; }

bool Key::isNull() const { return "NULL" == data; }

string Key::getData() const { return data; }

void Key::setData(string _data) { data = _data; }

bool Key::operator<(const Key &a, const Key &b) { return a.data < b.data; }

namespace std {

template <> struct hash<Key> {
  std::size_t operator()(const Key &k) const {
    using std::hash;
    using std::size_t;
    using std::string;

    return hash<string>()(k.getData());
  }
};

} // namespace std