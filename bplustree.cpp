#include "bplustree.h"
using namespace std;

char* search(string key){
  node* current = root;
  while (!current ->is_leaf){
    for (int i = 0; i<= current->key_n; i++)
      if (i == current->key_n || key < current->key[i]){
	current = (node*) current-> children[i];
	break;
      }
  }

  for (int i =0; i<current->key_n; i++)
    if (key == current->key[i])
      return (char*) current -> children(i+1);
  return NULL;
} 
