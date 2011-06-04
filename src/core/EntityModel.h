#ifndef ENTITY_MODEL_H
#define ENTITY_MODEL_H

#include "Entity.h"



class EntityModel : public Entity
{
public:
    EntityModel( const Ogre::String& name, const Ogre::String file_name, Ogre::SceneNode* node );
    virtual ~EntityModel();

    virtual void Update();

    // model related
    virtual void SetVisible( const bool visible );
    virtual const bool IsVisible() const;

    // animation related
    virtual void PlayAnimation( const Ogre::String& animation, EntityAnimation state, const float start, const float end );

private:
    EntityModel();

private:
    Ogre::Entity* m_Model;
    Ogre::AnimationState* m_AnimationCurrent;
};



#endif // ENTITY_MODEL_H