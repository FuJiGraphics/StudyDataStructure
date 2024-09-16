#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_
#pragma once
#include <iostream>

namespace fz {

	template <typename T>
	struct Node
	{
		T		Value;
		Node*	Next;
	};

	// declaration
	template <typename T>
	class SinglyLinkedList
	{
	public:
		explicit		SinglyLinkedList();
		explicit		SinglyLinkedList(T& val);
		virtual			~SinglyLinkedList();

		template<typename ...Args>
		void			AppendToTail(const T& val, const Args& ...args);
		void			DeleteNode(unsigned int index);
		void			Print();
		unsigned int	GetSize() const;
		T&				operator[](unsigned int index);

	protected:
		void			AppendToTail() {}
		void			AppendToTail(const T& val);


	private:
		Node<T>* m_Head;
		Node<T>** m_Tail;
		unsigned int	m_Size;
	};

	// definition
	template<typename T>
	inline SinglyLinkedList<T>::SinglyLinkedList()
		: m_Head(nullptr)
		, m_Tail(nullptr)
		, m_Size(0)
	{
		m_Tail = &m_Head;
	}

	template<typename T>
	inline SinglyLinkedList<T>::SinglyLinkedList(T& val)
		: m_Head(nullptr)
		, m_Tail(nullptr)
		, m_Size(0)
	{
		m_Head = new Node<T>();
		m_Head->Value = val;
		m_Head->Next = nullptr;
		m_Tail = &(m_Head->Next);
		m_Size = m_Size + 1;
	}

	template<typename T>
	inline SinglyLinkedList<T>::~SinglyLinkedList()
	{
		Node<T>* begin = nullptr;
		Node<T>* del = nullptr;
		begin = m_Head;
		while (begin != nullptr)
		{
			del = begin;
			begin = begin->Next;
			delete del;
			del = nullptr;
			m_Size = m_Size - 1;
		}
		m_Head = nullptr;
		m_Tail = nullptr;
	}

	template<typename T>
	inline void SinglyLinkedList<T>::DeleteNode(unsigned int index)
	{
		if (index >= m_Size)
		{
			// TODO: 사이즈 범위 초과
			return;
		}

		Node<T>* prev = nullptr;
		Node<T>* target = m_Head;
		for (unsigned int i = 0; i < index; ++i)
		{
			prev = target;
			target = target->Next;
		}

		if (target != m_Head)
		{
			prev->Next = target->Next;
		}
		else
		{
			if (m_Head == *m_Tail)
				m_Tail = &target->Next;
			m_Head = target->Next;
		}
		Node<T>* del = target;
		if (del != nullptr)
		{
			delete del;
			m_Size = m_Size - 1;
		}
	}

	template<typename T>
	inline void SinglyLinkedList<T>::Print()
	{
		for (unsigned int i = 0; i < m_Size; ++i)
		{
			std::cout << this->operator[](i);
			if (i + 1 < m_Size)
				std::cout << ", ";
		}
		std::cout << std::endl;
	}

	template<typename T>
	inline unsigned int SinglyLinkedList<T>::GetSize() const
	{
		return (m_Size);
	}

	template<typename T>
	inline T& SinglyLinkedList<T>::operator[](unsigned int index)
	{
		if (index >= m_Size)
		{
			// TODO: 범위 초과 에러
		}

		Node<T>* target = m_Head;
		for (int i = 0; i < index; ++i)
		{
			target = target->Next;
		}
		return (target->Value);
	}

	template<typename T>
	inline void SinglyLinkedList<T>::AppendToTail(const T& val)
	{
		(*m_Tail) = new Node<T>();
		Node<T>* next = (*m_Tail);
		next->Value = val;
		next->Next = nullptr;
		m_Tail = &(next->Next);
		m_Size = m_Size + 1;
	}

	template<typename T>
	template<typename ...Args>
	inline void SinglyLinkedList<T>::AppendToTail(const T& val, const Args & ...args)
	{
		this->AppendToTail(val);
		this->AppendToTail(args...);
	}

} // namespace fz

#endif