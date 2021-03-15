/*
Assignment 7 Hashtable with chaining
Mico Santiago

Like part 1 we take a string -> hash code -> index. But unlike the first part we
resolve collisions by using a linkend list. We're going to have this hash table
that has an array that holds the data. That array will be a linkedlist of the values
we want. Then when someone wants to put the value of mico, put the value Mico mapping to
this person, we call the hash function and map the hash code to the index and that gets us
to the index in the array and then we put it into a linkedlist.
*/
#include <iostream>
#include <list>
using namespace std;

/* Hashtable implementation */

class hashtable {
    int bucket; // number of buckets in the hashtable

    list<int> *table; // points to an array holding buckets

    public:
        hashtable(int C); //constructor

        void insert(int num); // inserts a key into the hashtable

        void deletes(int key); // deletes a key from the hashtable

        int hash_function(int num) { 
            return (num % bucket); 
        }

        void display();
};

hashtable::hashtable(int num)
{
    this->bucket = num;
    table = new list<int>[bucket];
}

/*insert function
Move to the bucket is the key % number of buckets and inserts the new node 
at the end of the list.
*/
void hashtable::insert(int key)
{
    int index = hash_function(key);
    table[index].push_back(key); 
}

/*display function*/
void hashtable::display() {
    for (int i = 0; i < bucket; i++) {
        cout << i;
        for (auto num : table[i])
        cout << " --> " << num;
        cout << endl;
    }
}

/*deletes function
To delete a node, it calculates the hash index for the key->goes to the bucket
that corresponds to the hash index->search the list to get and remove the node key. 
*/
void hashtable::deletes(int key)
{
    int index = hash_function(key); //retrieve the has index of key

    list <int> :: iterator iterate;
    for (iterate = table[index].begin(); iterate != table[index].end(); iterate++){
        if (*iterate == key)
        break;
    }

    if (iterate != table[index].end())
    table[index].erase(iterate);

}

/*driver.*/
int main()
{
    int a[] = {12, 14, 32, 9, 44}; // mapping keys to the array
    int n = sizeof(a)/sizeof(a[0]);
    
    // insert the keys into the hash table
    hashtable hash(7);   // 7 is count of buckets in the hashtable
        for (int i = 0; i < n; i++) 
        hash.insert(a[i]);  
    
    hash.deletes(32); // delete 32 from hash table

    hash.display(); // displays the table
    
    return 0;
}