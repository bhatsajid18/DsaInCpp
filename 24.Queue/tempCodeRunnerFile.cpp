 (front->prior==p)
        {
            node* todelete=front;
            front=front->next;
            delete todelete;
            return;
        }