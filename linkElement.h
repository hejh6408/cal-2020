#pragma once

#ifndef LINKELEMENT_H
#define LINKELEMENT_H

#include <memory>
#include <vector>

class linkElement;

typedef std::shared_ptr<linkElement> pLinkElement;

typedef  std::vector<pLinkElement> pLinkElementArray;

class linkElement
{
public:
    linkElement();
    ~linkElement();

    void addLink(const pLinkElement linkElement);
private:
    pLinkElementArray m_linkElementArray;
};
#endif // LINKELEMENT_H
