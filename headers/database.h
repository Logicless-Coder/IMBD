#ifndef _DATABASE_H_INCLUDED
#define _DATABASE_H_INCLUDED

#include "./collection.h"
#include <bits/stdc++.h>

using namespace std;

class Database {
private:
  unordered_set<Collection> collections;
  string backupFilePath;

public:
  Database(string _backupFilePath = "~/imdb/backup/");

  void createCollection(string newCollection);
  void dropCollection(string collectionName);
  Collection getCollection(string collectionName);
  void backup();

  unordered_set<Collection> getCollections();
};

#endif