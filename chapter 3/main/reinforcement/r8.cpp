int StringLinkedList::size() const {
    int i = 0;
    
    StringNode* current = head;
    while(current != NULL) {
        current = current->next;
        i++;
    }
    return i;
}