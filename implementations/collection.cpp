#include "../headers/collection.h"
#include "../headers/key.h"
#include "../headers/value.h"

#include <bits/stdc++.h>

using namespace std;

Collection::Collection(string _name) { name = _name; }

void Collection::setRecord(Key key, Value value) { records[key] = value; }

pair<Key, Value> Collection::getRecord(Key key) {
  if (records.find(key) == records.end())
    return {Key("NULL"), Value("NULL")};
  else
    return {key, records[key]};
}

void Collection::deleteRecord(Key key) {
  pair<Key, Value> record = getRecord(key);
  if (record.first.isNull() && record.second.isNull())
    return;

  records.erase(key);
}

bool Collection::isNull() const { return "NULL" == name; }

void Collection::setName(string _name) { name = _name; }

string Collection::getName() const { return name; }

unordered_map<Key, Value> Collection::getRecords() const { return records; }