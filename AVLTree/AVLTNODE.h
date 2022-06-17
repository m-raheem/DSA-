#include <iostream>
class AVLTNode
{
      public:
              int   value;
              int   height;
              AVLTNode* lc;
              AVLTNode* rc;
              
              AVLTNode()
               {
                    value = 0;
                    height = 1;
                    lc = NULL;
                    rc = NULL;
                }
                
                AVLTNode(int v)
               {
                    value = v;
                    height = 1;
                    lc = NULL;
                    rc = NULL;
                }
};
