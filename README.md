## Assignment 7 (Hashtable)
Mico Santiago
1.  Create some tests (at least one per function) that you want your hashtable to pass before you start coding.
-	We will see our implementation to be similar to this![enter image description here](https://www.softwaretestinghelp.com/wp-content/qa/uploads/2019/08/Hash-codes.png)
2.  Create a hashtable that resolves collisions by simply overwriting the old value with the new value, including at least:    
	- this is done in part 1 file of the assignment, we will just implement taking positive numbers in an array->run hash code -> put it into an index.
3.  Describe the way that you decide on hashing a value  
    (this can be simple or complex based on how interesting you find the topic)
    - Our method is simple, hash_index = key % number of buckets
4.  An insert function that places the value at the appropriate location based on its hash value
    - We will have a bucket and move it depending to the hash_index and add the new node at the end of the list.
5.  A contains function that returns whether the value is already in the hashtable
    -	our first program just returns true or false depending if the value is there or not.
    -	our second program displays our table which looks similar to the image above.
6.  (optional) A delete function that removes a value based on its hash and then returns that value…
    -	We use hash_index for the key, move the bucket that corresponds with the calculated hash index, search the list in the current bucket to find and remove the node with the same key.

7.  Then create a smarter hashtable (double hashing or chaining) including at least the same functions as the simple hashtable
    -	we did chaining and the methods are listed above.
8.  Compare some information relating to collisions (frequency) and their effect on complexity (of insert and contains methods)
Performance of chaining can be measured by 
load factor  alpha = number of keys to be inserted in hash table / number of slots in hash table

expected time to search = O(1 + alpha)

expected time to delete= O(1 + alpha)

time to insert = O(1)

time complexity of search, insert and delete is O(1)
