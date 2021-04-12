/*******************************************************************************
 * Copyright (c) 2021, Initialsoft, Inc.
 * All rights reserved.
 *
 * main : [description]
 *
 * filename : main.cc
 * author   : hunt978(hunt978@initialsoft.com)
 * create   : 2021-03-15 03:15:35 UTC
 * modified : 2021-03-17 16:24:15 UTC
\******************************************************************************/

////////////////////////////////////////////////////////////////////////////////
// Headers
//
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
// Typedefs & Constants
//
#define nullptr NULL

////////////////////////////////////////////////////////////////////////////////
// Inner Scope Objects
//
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
 *               1) from id and to id **CANNOT** be the same
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
struct Node* insert_node(struct Node* head, uint32_t fid, uint32_t tid)
{
  // \TODO add your code here
  return nullptr;
}

/**
 * @brief      remove a node from list
 *
 * @param      head  The head
 * @param[in]  fid   The fid
 * @param[in]  tid   The tid
 *
 * @return     new head
 */
struct Node* remove_node(struct Node* head, uint32_t fid, uint32_t tid)
{
  // \TODO add your code here
  return nullptr;
}

/**
 * @brief      Dumps a list.
 *
 * @param      head  The head
 */
void dump_list(struct Node* head)
{
  printf("---------------------------\n");
  struct Node* node = head;
  while (node) {
    printf("  %d -> %d\n", node->fid, node->tid);
    node = node->next;
  }
}

/**
 * @brief      Does a test.
 */
void do_test()
{
  struct Node* head = nullptr;

  head = insert_node(head, 1, 2);
  dump_list(head);
  head = insert_node(head, 2, 4);
  dump_list(head);
  head = insert_node(head, 2, 3);
  dump_list(head);
  head = insert_node(head, 3, 4);
  dump_list(head);
  head = insert_node(head, 4, 1);
  dump_list(head);
  head = insert_node(head, 1, 2);
  dump_list(head);

  while (head) {
    head = remove_node(head, head->fid, head->tid);
  }
}

////////////////////////////////////////////////////////////////////////////////
// Classes
//

////////////////////////////////////////////////////////////////////////////////
// Functions
//
int main(int argc, char const* argv[])
{
  do_test();

  return 0;
}

////////////////////////////////// EOF /////////////////////////////////////////
