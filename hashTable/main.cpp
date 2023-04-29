#include <iostream>

using namespace std;

// hash table entry
struct HashTableEntry
{
    string key;
    int value;
};

// A class to represent a hash table
class HashTable
{
    // The hash table size
    int size;
    // The hash table entries
    HashTableEntry *entries;

public:
    // Constructor
    HashTable(int size) : size(size), entries(new HashTableEntry[size])
    {
        for (int i = 0; i < size; i++)
        {
            entries[i] = {"", 0};
        }
    }

    // Destructor
    ~HashTable()
    {
        delete[] entries;
    }

    // Insert a key-value pair into the hash table
    void insert(string key, int value)
    {
        // Calculate the hash index of the key
        int hashIndex = hash(key);

        // Linear probing to find an empty slot
        while (entries[hashIndex].key != "")
        {
            hashIndex = (hashIndex + 1) % size;
        }

        // Insert the key-value pair
        entries[hashIndex].key = key;
        entries[hashIndex].value = value;
    }

    // Search for a key in the hash table
    int search(string key)
    {
        // Calculate the hash index of the key
        int hashIndex = hash(key);

        // Linear probing to find the key
        while (entries[hashIndex].key != key)
        {
            hashIndex = (hashIndex + 1) % size;
        }

        // Return the value of the key
        return entries[hashIndex].value;
    }

private:
    // A hash function to convert a string to an integer
    int hash(string key)
    {
        int hash = 0;
        for (int i = 0; i < key.length(); i++)
        {
            hash = hash * 31 + key[i];
        }
        return hash;
    }
};

int main()
{
    HashTable table(200);

    // Insert some key-value pairs into the hash table
    table.insert("apple", 1);
    table.insert("banana", 2);
    table.insert("grape", 3);

    // Search for a key in the hash table
    int value = table.search("apple");
    cout << "The value of 'apple' is " << value << endl;

    return 0;
}
