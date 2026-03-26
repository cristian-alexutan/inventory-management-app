#pragma once
#include "repo.h"
#include "dog.h"

class Action {
public:
    virtual ~Action() = default;
    virtual void executeUndo() = 0;
    virtual void executeRedo() = 0;
};

class ActionAdd : public Action {
private:
    Repository& repo;
    Dog addedDog;
public:
    ActionAdd(Repository& repo, const Dog& addedDog) : repo(repo), addedDog(addedDog) {}
    void executeUndo() override;
    void executeRedo() override;
};

class ActionRemove : public Action {
private:
    Repository& repo;
    Dog removedDog;
public:
    ActionRemove(Repository& repo, const Dog& removedDog) : repo(repo), removedDog(removedDog) {}
    void executeUndo() override;
    void executeRedo() override;
};

class ActionUpdate : public Action {
private:
    Repository& repo;
    Dog oldDog;
    Dog newDog;
public:
    ActionUpdate(Repository& repo, const Dog& oldDog, const Dog& newDog) : repo(repo), oldDog(oldDog), newDog(newDog) {}
    void executeUndo() override;
    void executeRedo() override;
};
