#ifndef _VALUE_H_INCLUDED
#define _VALUE_H_INCLUDED

#include <bits/stdc++.h>

using namespace std;

class Value {
private:
  string data;

public:
  Value(string _data);

  bool isNull() const;

  string getData() const;
  void setData(string _data);
};

#endif