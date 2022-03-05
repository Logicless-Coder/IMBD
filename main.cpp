#include "headers/database.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  Database db;
  db.createCollection("users");
  Collection users = db.getCollection("users");

  users.setRecord(Key("name"), Value("Abhishek"));

  for (auto user : users.getRecords()) {
    cout << user.first.getData() << ' ' << user.second.getData() << endl;
  }

  return 0;
}
