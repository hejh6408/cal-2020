#include "linkElement.h"

linkElement::linkElement()
{

}

linkElement::~linkElement()
{

}

void linkElement::addLink(const pLinkElement &linkElement, const size_t index)
{
    auto linkElementInfoIter = m_linkElementInfo.find(linkElement);

    if(linkElementInfoIter == m_linkElementInfo.end())
    {
        std::set<size_t> indexSet;
        indexSet.insert(index);

        m_linkElementInfo.insert({linkElement, indexSet});
    }
    else
    {
        std::set<size_t>& indexSet = linkElementInfoIter->second;
        auto indexSetIter = indexSet.find(index);

        if(indexSetIter == indexSet.end())
        {
            indexSet.insert(index);
        }
        else
        {
            // do nothing yet;
        }
    }
}

void linkElement::delLink(const pLinkElement &linkElement, const size_t index)
{
    auto linkElementInfoIter = m_linkElementInfo.find(linkElement);

    if(linkElementInfoIter == m_linkElementInfo.end())
    {
        // do nothing yet;
    }
    else
    {
        std::set<size_t>& indexSet = linkElementInfoIter->second;
        auto indexSetIter = indexSet.find(index);

        if(indexSetIter == indexSet.end())
        {
            // do nothing yet;
        }
        else
        {
            indexSet.erase(indexSetIter);
        }
    }
}
