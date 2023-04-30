# Description of files in  `0x13-more_singly_linked_lists` folder

0. **`0-print_listint.c`** - a function that prints all the elements of a `listint_t` list.
    - Prototype: `size_t print_listint(const listint_t *h);`
    - Return: the number of nodes.

1. **`1-listint_len.c`** - a function that returns the number of elements in a linked `listint_t` list.
    - Prototype: `size_t listint_len(const listint_t *h);`

2. **`2-add_nodeint.c`** - a function that adds a new node at the beginning of a `listint_t` list.
    - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
    - Return: the address of the new element, or `NULL` if it failed.

3. **`3-add_nodeint_end.c`** - a function that adds a new node at the end of a `listint_t` list.
    - Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
    - Return: the address of the new element, or `NULL` if it failed.

4. **`4-free_listint.c`** -  a function that frees a listint_t list.
    - Prototype: `void free_listint(listint_t *head);`

5. **`5-free_listint2.c`** - a function that frees a `listint_t` list.
    - Prototype: `void free_listint2(listint_t **head);`
    - The function sets the head to `NULL`.

6. **`6-pop_listint.c`** - a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
    - Prototype: `int pop_listint(listint_t **head);`
    - If the linked list is empty it returns 0.

7. **`7-get_nodeint.c`** - a function that returns the nth node of a `listint_t` linked list.
    - Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
    - where `index` is the index of the node, starting at `0`
    - If the node does not exist, it returns `NULL`

8. **`8-sum_listint.c`** - a function that returns the sum of all the data (n) of a `listint_t` linked list.
    - Prototype: `int sum_listint(listint_t *head);`
    - If the list is empty, it returns `0`.

9. **`9-insert_nodeint.c`** - a function that inserts a new node at a given position.
    - Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
    - where `idx` is the index of the list where the new node should be added. Index starts at `0.`
    - Returns: the address of the new node, or `NULL` if it failed
    - If it is not possible to add the new node at index `idx`, the new node is not added and `NULL` is returned.

10. **`10-delete_nodeint.c`** - a function that deletes the node at index index of a `listint_t` linked list.
    - Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
    - where `index` is the index of the node that should be deleted. Index starts at `0`.
    - Returns: `1` if it succeeded, `-1` if it failed.

11. **`100-reverse_listint.c`** - a function that reverses a `listint_t` linked list.
    - Prototype: `listint_t *reverse_listint(listint_t **head);`
    - Returns: a pointer to the first node of the reversed list.
    - The function  use more than 1 loop.
    - The functions does not use `malloc`, `free` or arrays and only declares a maximum of two variables.

12. **`101-print_listint_safe.c`** - a function that prints a `listint_t` linked list.
    - Prototype: `size_t print_listint_safe(const listint_t *head);`
    - Returns: the number of nodes in the list.
    - This function can print lists with a loop while going though the list only once.
    - If the function fails, the program exits with status `98`.

13. **`102-free_listint_safe.c`** -  a function that frees a `listint_t` list.
    - Prototype: `size_t free_listint_safe(listint_t **h);`
    - This function can free lists with a loop while going though the list only once.
    - Returns: the size of the list that was free’d.
    - The function sets the head to `NULL`.

14. **`103-find_loop.c`** - a function that finds the loop in a `listint_t` list.
    - Prototype: `listint_t *find_listint_loop(listint_t *head);`
    - Returns: The address of the node where the loop starts, or NULL if there is no loop.
    - The functions does not use `malloc`, `free` or arrays and only declares a maximum of two variables.
