/*
 * Copyright (C) 2015 Xianguang Zhou <xianguang.zhou@outlook.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <typeinfo>
#include "light_skip_list.h"

class SkipListNode {
};
class SkipListDataNode;
class SkipListLevelNode: public SkipListNode {
public:
	SkipListNode * next;
	SkipListLevelNode * down;
	SkipListDataNode * data;
};
class SkipListDataNode: public SkipListNode {
public:
	std::string key;
	std::string value;
	SkipListNode * next;
};
class SkipListBeginNode: public SkipListNode {
public:
	SkipListNode * next;
	SkipListBeginNode * down;
};
class SkipListEndNode: public SkipListNode {
};

SkipList::SkipList() {
	this->endNode = new SkipListEndNode();
	this->beginNode = new SkipListBeginNode();
	this->beginNode->next = this->endNode;
}

SkipListIter SkipList::put(const std::string& key, const std::string& value) {
	
}

SkipListIter SkipList::get(const std::string& key) const {
}

void SkipList::remove(const std::string& key) {
}

SkipListIter SkipList::begin() const {
}

SkipListIter SkipList::end() const {
}

SkipList::~SkipList() {
}
