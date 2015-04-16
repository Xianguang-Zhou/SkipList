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
#ifndef LIGHT_SKIP_LIST_H_
#define LIGHT_SKIP_LIST_H_

#include <string>
#include <boost/noncopyable.hpp>

class SkipListIter;
class SkipListBeginNode;
class SkipListEndNode;
class SkipListNode;

class SkipList: public boost::noncopyable {
public:
	SkipList();
	SkipListIter put(const std::string& key, const std::string& value);
	SkipListIter get(const std::string& key) const;
	void remove(const std::string& key);
	SkipListIter begin() const;
	SkipListIter end() const;
	virtual ~SkipList();
private:
	SkipListBeginNode * beginNode;
	SkipListEndNode * endNode;
};

class SkipListIter {
public:
	SkipListIter& operator++();
	std::string key() const;
	std::string value() const;
private:
	SkipListNode * SkipListNode;
};

#endif
