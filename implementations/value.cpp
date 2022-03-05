#include "../headers/value.h"
#include <bits/stdc++.h>

using namespace std;

Value::Value(string _data) { data = _data; }

bool Value::isNull() const { return "NULL" == data; }

string Value::getData() const { return data; }

void Value::setData(string _data) { data = _data; }