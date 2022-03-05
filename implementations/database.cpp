#include "../headers/database.h"
#include "../headers/collection.h"
#include "../headers/key.h"

#include <bits/stdc++.h>

using namespace std;

Database::Database(string _backupFilePath = "~/imdb/backup/") {
  backupFilePath = _backupFilePath;
}

void Database::createCollection(string newCollection) {
  for (auto collection : collections) {
    if (collection.getName() == newCollection)
      return;
  }

  collections.insert(Collection(newCollection));
}

void Database::dropCollection(string collectionName) {
  for (auto collection : collections) {
    if (collection.getName() == collectionName) {
      collections.erase(collection);
      break;
    }
  }
}

Collection Collection::getCollection(string collectionName) {
  for (auto collection : collections) {
    if (collection.getName() == collectionName)
      return collection;
  }

  return Collection("NULL");
}

void Database::backup() {

  for (auto collection : collections) {
    string filePath = backupFilePath + collection.getName() + ".txt";
    ofstream backupFile(filePath);

    for (auto record : collection.getRecords()) {
      if (not record.first.isNull() || not record.second.isNull())
        backupFile << record.first.getData() << " : " << record.second.getData()
                   << endl;
    }
  }
}

unordered_set<Collection> Database::getCollections() { return collections; }