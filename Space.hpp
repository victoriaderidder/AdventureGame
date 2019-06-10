/*******************************************************************************
 ** Author:       Victoria Fisher
 ** Date:         6/11/2019
 ** Description:  Space class specification file.
 *******************************************************************************/

#ifndef Space_hpp
#define Space_hpp
class Character;

class Space {
protected:
    bool visited;
    int beenHereBefore = 0;
    Space *forward, *back, *left, *right;
    Character *character;
public:
    Space(){};
    ~Space(){};
    void setLocation(Space *w, Space *s, Space *a, Space *d, Character *c);
    virtual int getVisited() {return visited;};
    virtual void setVisited();
    virtual void lookAround() = 0;
    virtual void interact() = 0;
    Space * getLeft();
    Space * getRight();
    Space * getUp();
    Space * getDown();
};

#endif /* Space_hpp */
