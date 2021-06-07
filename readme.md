# 链表容器

## 问题描述

设某容器中存储着一系列表达指向关系的节点，其中：`fid`代表出发节点，`tid`代表到达节点，指向表达为`fid->tid`。

```c
struct Node {
  uint32_t fid;
  uint32_t tid;
  ... 
};
```

> 说明1
> 
> * fid/tid **并非** 用于表示节点序号 

于是，这一容器可以用来存储多个节点所构成的复杂指向信息。针对这一容器，有以下 **4** 项约束条件:

1. `Rule1` 节点禁止保存自指向关系，即`fid` 与 `tid` **不能** 相同；
2. `Rule2` 容器 **禁止保存重复** 指向关系节点；
3. `Rule3` 容器中指向关系节点所构成的指向信息 **禁止闭合成环** ；
4. `Rule4` 容器中指向关系节点所构成的指向信息 **允许扇出** ，**禁止扇入** 。

> 说明2
> 
> * 若已有3个指向关系节点`1->2`,`2->3`,`3->4`存在于容器中时，则不允许新节点`4->1`加入容器，否则将出现闭合环，；
> * 扇出指“一指多”，扇入指“多指一”，即容器可以保存`1->2`,`1->3`，但不允许保存`1->3`,`2->3`。

## 作答要求

请在 **60分钟** 内挑选`C`或者`C++`实现所要求的的函数/方法。请注意：

1. 不允许更改已给出的任何结构定义、函数声明等内容；
2. 仅允许使用`stdc`或`stl`，禁止使用任何其他第三方库；
3. 允许添加必要的子函数；
4.  **在线作答必须完成`C`版本** ，有余力者尽量完成`C++`版本；
5.  在线作答 **请勿folk**，请克隆本地上传，或其他方式发送。

### 参考资料

* [C 参考手册](https://zh.cppreference.com/w/c)
* [C++ 参考手册](https://zh.cppreference.com/w/cpp)

## 原型声明

### C版本

完成`insert_node`与`remove_node` **2** 个函数。

```c
struct Node {
  uint32_t fid;
  uint32_t tid;

  struct Node* prev;
  struct Node* next;
};

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

### C++版本

完成`insert`与`sort` **2** 个函数。

```cpp
struct Node{
  std::string fid;
  std::string tid;
};

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

