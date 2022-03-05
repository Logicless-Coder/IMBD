#ifndef _COLLECTION_H_INCLUDED
#define _COLLECTION_H_INCLUDED

#include "./key.h"
#include "./value.h"
#include <bits/stdc++.h>

using namespace std;

class Collection {
private:
  string name;
  unordered_map<Key, Value> records;

public:
  Collection(string _name);

  void setRecord(Key key, Value value);
  pair<Key, Value> getRecord(Key key);
  void deleteRecord(Key key);

  bool isNull() const;

  void setName(string _name);
  string getName() const;
  unordered_map<Key, Value> getRecords() const;
};

#endif