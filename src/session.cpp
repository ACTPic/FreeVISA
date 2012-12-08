#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "session.h"

namespace freevisa {

session::session()
{
}

ViStatus session::Close()
{
        delete this;
        return VI_SUCCESS;
}

ViStatus session::GetAttribute(ViAttr attr, void *attrState)
{
        return GetObjectAttribute(attr, attrState);
}

ViStatus session::SetAttribute(ViAttr attr, ViAttrState attrState)
{
          return SetObjectAttribute(attr, attrState);
}

}

