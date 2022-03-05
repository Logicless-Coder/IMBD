#ifndef _KEY_H_INCLUDED
#define _KEY_H_INCLUDED

#include <bits/stdc++.h>

using namespace std;

class Key {
private:
  string data;

public:
  Key(string _data);

  bool isNull() const;

  string getData() const;
  void setData(string _data);

  friend bool operator<(const Key &, const Key &);
};

#endif