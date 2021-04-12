# Linked List

## Question

There are sets of from & to relationship elements stored in a container. Let's say they are `fid` and `tid` who are represented in the form of `fid->tid`.

There are 4 strains for the overall container:

1) `fid` and `tid` **CANNOT** be the same, and
2) it should **NOT** hold duplicated node, neither
3) it should **NOT** hold circled link, and at last
4) fan-out is allowed while fan-in is **NOT**.

Please implement **2** methods based on your choice between C++ or C in **60** minutes.

**NOTE** online test **SHOULD** complete both C++ and C project.

**DONOT** alter given declaration or function prototype, while adding necessary helpers are allowed.

### Reference

* cppreference

## CPP

### Declaration

```cpp
struct Node{
  std::string fid;
  std::string tid;
};
```

```cpp
std::vector<Node> nodes;
```

### Prototype

```cpp
/**
 * @brief      insert a new pair into the list
 *
 *             there are 4 strains for the container :
 *
 *               1) `fid` and `tid` **CANNOT** be the same
 *               2) it should **NOT** hold duplicated node
 *               3) it should **NOT** hold circled link
 *               4) fan-out is allowed while fan-in is **NOT**.
 *
 * @param      nodes  The nodes
 * @param[in]  fid    The fid
 * @param[in]  tid    The tid
 *
 * @return     success with true returned
 */
bool insert(
  std::vector<Node>& nodes, const std::string& fid, const std::string& tid);

/**
 * @brief      sort nodes
 *
 * @param      nodes   The nodes
 * @param[in]  accend  The accend
 */
void sort(std::vector<Node>& nodes, bool accend);
```

## C

### Declaration

```c
struct Node {
  uint32_t fid;
  uint32_t tid;

  struct Node* prev;
  struct Node* next;
};
```

```c
struct Node* head;
```

### Prototype

```c
/**
 * @brief      insert a node into list
 *
 *             there are 4 strains for the container :
 *
 *               1) `fid` and `tid` **CANNOT** be the same
 *               2) it should **NOT** hold duplicated node
 *               3) it should **NOT** hold circled link
 *               4) fan-out is allowed while fan-in is **NOT**.
 *
 * @param      head  The head
 * @param[in]  fid   The fid
 * @param[in]  tid   The tid
 *
 * @return     new head
 */
struct Node* insert_node(struct Node* head, uint32_t fid, uint32_t tid);

/**
 * @brief      remove a node from list
 *
 * @param      head  The head
 * @param[in]  fid   The fid
 * @param[in]  tid   The tid
 *
 * @return     new head
 */
struct Node* remove_node(struct Node* head, uint32_t fid, uint32_t tid);
```
