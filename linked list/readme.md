# <h1 align="center">LINKED LIST<h1>

## 🛠️ Compile Command
```sh
g++ filename.cpp -o <output_file_name>
```

## 🛠️ Run Command
```sh
./<output_file_name>
```

# Example: 
```sh
g++ basic.cpp -o linkedlist

./linkedlist
```

## 🚀 Features Implemented

- `pushFront(int)` – Add node at the beginning  
- `pushBack(int)` – Add node at the end  
- `popFront()` – Remove node from beginning  
- `popBack()` – Remove node from end  
- `insert(int, int)` – Insert node at a given position  
- `search(int)` – Search and return the index of a given value  
- `printLinkedlist()` – Print the entire linked list  

---

## 🧠 How It Works

- A `Node` contains:
  - `data`: integer value
  - `next`: pointer to the next node

- The `List` class manages:
  - `head` and `tail` pointers
  - All operations like insertion, deletion, and search

---