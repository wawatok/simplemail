/***************************************************************************
 SimpleMail - Copyright (C) 2000 Hynek Schlawack and Sebastian Bauer

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
***************************************************************************/

/**
 * @file string_lists.h
 */

#ifndef SM__STRING_LISTS_H
#define SM__STRING_LISTS_H

#ifndef SM__LISTS_H
#include "lists.h"
#endif

struct string_node
{
	struct node node; /* embedded node struct */
	char *string;
};

struct string_list
{
	struct list l;
};

/**
 * Initialize the string list.
 *
 * @param list to be initialized
 */
void string_list_init(struct string_list *list);

/**
 * Return the first string node of the given string list.
 *
 * @param list of which the first element should be returned
 * @return the first element or NULL if the list is empty
 */
struct string_node *string_list_first(const struct string_list *list);

/**
 * @return the node following the given node.
 */
struct string_node *string_node_next(const struct string_node *node);

/**
 * Insert the given string node at the tail of the given list.
 *
 * @param list the list at which the node should be inserted
 * @param node the node to be inserted
 */
void string_list_insert_tail_node(struct string_list *list, struct string_node *node);

/**
 * Insert the given node after the other given node.
 */
void string_list_insert_after(struct string_list *list, struct string_node *newnode, struct string_node *prednode);

/**
 * Inserts a string into the end of a string list. The string will
 * be duplicated. Nothing will be inserted if the string's length was 0.
 *
 * @param list the list to which to add the string.
 * @param string the string to be added. The string will be duplicated.
 * @return the newly created node that has just been inserted or NULL on memory
 *  failure or if length of string was 0.
 */
struct string_node *string_list_insert_tail(struct string_list *list, const char *string);

/**
 * Inserts a string into the end of a string list. The string will
 * be duplicated.
 *
 * @param list the list to which to add the string.
 * @param string the string to be added. The string will be duplicated.
 * @return the newly created node that has just been inserted or NULL on memory
 *  failure.
 */
struct string_node *string_list_insert_tail_always(struct string_list *list, const char *string);

/**
 * Remove the head from the given string list.
 *
 * @param list the list from which the node should be removed.
 * @return the head that has just been removed or NULL if the list was empty.
 */
struct string_node *string_list_remove_head(struct string_list *list);

/**
 * Remove the tail of the given string list.
 *
 * @param list the list from which the node should be removed.
 * @return the tail that has just been removed or NULL if the list was empty.
 */
struct string_node *string_list_remove_tail(struct string_list *list);

/**
 * Clears the complete list by freeing all memory (including strings) but does
 * not free the memory of the list itself.
 *
 * @param list the list whose element should be freed.
 */
void string_list_clear(struct string_list *list);

/**
 * Exchange the contents of the two given string lists.
 *
 * @param a the first string list
 * @param b the second string list
 */
void string_list_exchange(struct string_list *a, struct string_list *b);

/**
 * Shortcut for calling string_list_clear() and free().
 *
 * @param list the list that should be cleared and freed.
 */
void string_list_free(struct string_list *list);

/**
 * Looks for a given string node in the list and returns it.
 * Search is case insensitive
 *
 * @param list
 * @param str
 * @return
 */
struct string_node *string_list_find(struct string_list *list, const char *str);

/**
 * Locate the string_node of the given index.
 *
 * @return the string_node or NULL if it the list is not large enough.
 */
struct string_node *string_list_find_by_index(struct string_list *list, int index);


#endif
