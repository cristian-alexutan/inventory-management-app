#include "Action.h"

void ActionAdd::executeUndo()
{
    this->repo.remove_dog(this->addedDog);
}

void ActionAdd::executeRedo()
{
    this->repo.add_dog(this->addedDog);
}

void ActionRemove::executeUndo()
{
    this->repo.add_dog(this->removedDog);
}

void ActionRemove::executeRedo()
{
    this->repo.remove_dog(this->removedDog);
}

void ActionUpdate::executeUndo()
{
    this->repo.remove_dog(this->newDog);
    this->repo.add_dog(this->oldDog);
}

void ActionUpdate::executeRedo()
{
    this->repo.remove_dog(this->oldDog);
    this->repo.add_dog(this->newDog);
}