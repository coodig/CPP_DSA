# 📁 C++ File Handling Notes

## ✅ Overview
File handling allows C++ programs to **store data permanently** by reading from or writing to files.

---

## 📚 Required Header
- `#include <fstream>`: Needed for file I/O operations.

---

## 🔄 File Stream Classes

| Class      | Description              |
|------------|--------------------------|
| `ifstream` | Input File Stream (read) |
| `ofstream` | Output File Stream (write) |
| `fstream`  | File Stream (read & write) |

---

## ⚙️ File Open Modes

You can control how a file is opened using these flags:

| Mode          | Meaning                                 |
|---------------|------------------------------------------|
| `ios::in`     | Open for reading                         |
| `ios::out`    | Open for writing                         |
| `ios::app`    | Append to the end                        |
| `ios::trunc`  | Truncate existing file content           |
| `ios::binary` | Open in binary mode                      |

You can combine modes using `|` (bitwise OR).  
Example: `ios::in | ios::binary`

---

## 🔍 File Functions

| Function              | Description                           |
|-----------------------|---------------------------------------|
| `.open("file")`       | Open the file manually                |
| `.close()`            | Close the file                        |
| `.eof()`              | Returns true if end of file reached   |
| `getline(stream, str)`| Read an entire line into a string     |

---

## 📂 File Handling Steps

1. **Include header**: `<fstream>`
2. **Create file stream object**
3. **Open the file**
4. **Read/write data**
5. **Close the file**

---

## 🔐 File Error Checking

To ensure a file exists or opened properly:

- `if (!file)`  
  → File failed to open

---

## 🧠 Key Points

- C++ does **not** throw an error if a file doesn't exist (use `.fail()` or `!file` to check).
- Use `.eof()` in loops to read until the file ends.
- Always `.close()` the file after reading/writing.
- File streams can be declared and opened in the same line:
  - `ofstream fout("data.txt");`

---

## 📌 Real-World Uses

- Log systems (store user activity)
- Save configuration settings
- Store and retrieve structured data (e.g., CSV)
- Read input from text files for batch processing

