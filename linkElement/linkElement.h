#pragma once

#ifndef LINKELEMENT_H
#define LINKELEMENT_H

#include <memory>
#include <map>
#include <set>
#include <vector>

class linkElement;

typedef std::shared_ptr<linkElement> pLinkElement;

typedef  std::vector<pLinkElement> pLinkElementArray;

class linkElement
{
public:
    linkElement();
    virtual ~linkElement();

    void addLink(const pLinkElement& linkElement, const size_t index);
    void delLink(const pLinkElement& linkElement, const size_t index);

private:
    std::map<pLinkElement,std::set<size_t> > m_linkElementInfo;
};
#endif // LINKELEMENT_H
