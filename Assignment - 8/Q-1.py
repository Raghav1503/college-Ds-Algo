class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data  = data
        self.left  = left
        self.right = right

class Binary_Search_Tree:
    def __init__(self):
        self.root = None

    def _insert(self, data, current_node):
        if current_node.data == data:
            print(f"Insertion Error: Value {data} already present.")
            return
        elif current_node.data > data:
            # add node to left side
            if current_node.left is None:
                current_node.left = Node(data)
            else:
                self._insert(data, current_node.left)
        else:
            # add node to right side
            if current_node.right is None:
                current_node.right = Node(data)
            else:
                self._insert(data, current_node.right)

    def insert(self, data):
        if self.root is None:
            self.root = Node(data)
            return
        else:
            self._insert(data, self.root)
    
    def _search_tree(self, data, current_node):
        if current_node.data == data:
            print(f'Found element {data}.')
            return True
            print("IN HERE")

        elif current_node.data > data and current_node.left is not None:
            # search to the left
            self._search_tree(data, current_node.left)
        elif current_node.data < data and current_node.right is not None:
            # search to the right
            self._search_tree(data, current_node.right)
        return False

    def search_tree(self, data):
        if self.root is None:
            return
        else:
            found = self._search_tree(data, self.root)
            print("in here")
            print(found)
            if found:
                print("hello")
                return True

    def delete_node(self, data):
        pass
    
    def _print_tree_in_order_traversal(self, current_node):
        if current_node is not None:
            self._print_tree_in_order_traversal(current_node.left)
            print(current_node.data, end=" ")
            self._print_tree_in_order_traversal(current_node.right)
    
    def print_tree_in_order_traversal(self):
        if self.root is None:
            print("Tree is Empty.")
            return
        else:
            self._print_tree_in_order_traversal(self.root)
        print("\b")
    
    def _print_tree_pre_order_traversal(self, current_node):
        if current_node is not None:
            print(current_node.data, end=" ")
            self._print_tree_pre_order_traversal(current_node.left)
            self._print_tree_pre_order_traversal(current_node.right)
    
    def print_tree_pre_order_traversal(self):
        if self.root is None:
            print("Tree is Empty.")
            return
        else:
            self._print_tree_pre_order_traversal(self.root)
        print("\b")

    def _print_tree_post_order_traversal(self, current_node):
        if current_node is not None:
            self._print_tree_post_order_traversal(current_node.left)
            self._print_tree_post_order_traversal(current_node.right)
            print(current_node.data, end=" ")
    
    def print_tree_post_order_traversal(self):
        if self.root is None:
            print("Tree is Empty.")
            return
        else:
            self._print_tree_post_order_traversal(self.root)
        print("\b")

if __name__ == '__main__':
    bst = Binary_Search_Tree()
    bst.insert(15)
    bst.insert(27)
    bst.insert(12)
    bst.insert(7)
    bst.insert(14)
    bst.insert(20)
    bst.insert(88)
    bst.insert(23)

    bst.print_tree_in_order_traversal()
    bst.print_tree_pre_order_traversal()
    bst.print_tree_post_order_traversal()
    bst.search_tree(88)
