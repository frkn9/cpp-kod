StringNode* StringLinkedList::second_last() const {
    StringNode* current = head;
    while(current->next->next != NULL) {
        current = current->next;
    }
    return current;
}