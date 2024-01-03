#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T val1, T val2) {
	T tmp;

	tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template <typename T>
T min(T &first, T &second) {
	return (second <= first) ? second : first;
}

template <typename T>
T max(T &first, T &second) {
	return (second >= first) ? second : first;
}

#endif // !WHATEVER_HPP
