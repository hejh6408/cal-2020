#include "linkElement.h"

linkElement::linkElement()
{

}

void linkElement::addLink(const pLinkElement linkElement)
{
    this->m_linkElementArray.push_back(linkElement);
}
