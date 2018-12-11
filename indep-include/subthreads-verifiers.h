/* Autogenerated file */
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_call_function_sync_2(thread_t thread, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_function_sync_(thread, (void *)function, argcount, args...);
}
#define thread_call_function_sync(thread, function, argcount, ...) \
	thread_call_function_sync_2<argcount>(thread, function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_call_function_sync(thread_t thread, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_function_sync_(thread, (void *)function, argcount, args...);
}
#else
#define thread_call_function_sync thread_call_function_sync_
#endif
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_call_function_async_2(thread_t thread, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_function_async_(thread, (void *)function, argcount, args...);
}
#define thread_call_function_async(thread, function, argcount, ...) \
	thread_call_function_async_2<argcount>(thread, function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_call_function_async(thread_t thread, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_function_async_(thread, (void *)function, argcount, args...);
}
#else
#define thread_call_function_async thread_call_function_async_
#endif
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_call_parent_function_sync_2(int *success, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_parent_function_sync_(success, (void *)function, argcount, args...);
}
#define thread_call_parent_function_sync(success, function, argcount, ...) \
	thread_call_parent_function_sync_2<argcount>(success, function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_call_parent_function_sync(int *success, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_parent_function_sync_(success, (void *)function, argcount, args...);
}
#else
#define thread_call_parent_function_sync thread_call_parent_function_sync_
#endif
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_call_parent_function_sync_timer_callback_2(void (*timer_callback)(void *), void *timer_data, int millis, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_parent_function_sync_timer_callback_(timer_callback, timer_data, millis, (void *)function, argcount, args...);
}
#define thread_call_parent_function_sync_timer_callback(timer_callback, timer_data, millis, function, argcount, ...) \
	thread_call_parent_function_sync_timer_callback_2<argcount>(timer_callback, timer_data, millis, function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_call_parent_function_sync_timer_callback(void (*timer_callback)(void *), void *timer_data, int millis, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_call_parent_function_sync_timer_callback_(timer_callback, timer_data, millis, (void *)function, argcount, args...);
}
#else
#define thread_call_parent_function_sync_timer_callback thread_call_parent_function_sync_timer_callback_
#endif
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_push_function_2(R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_push_function_((void *)function, argcount, args...);
}
#define thread_push_function(function, argcount, ...) \
	thread_push_function_2<argcount>(function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_push_function(R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_push_function_((void *)function, argcount, args...);
}
#else
#define thread_push_function thread_push_function_
#endif
#if __cplusplus > 201703L
template<int N, typename R, typename... A, typename... B>
static inline int thread_push_function_delayed_2(int millis, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(N == sizeof...(B));
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_push_function_delayed_(millis, (void *)function, argcount, args...);
}
#define thread_push_function_delayed(millis, function, argcount, ...) \
	thread_push_function_delayed_2<argcount>(millis, function, argcount __VA_OPT__(,) __VA_ARGS__)
#elif __cplusplus >= 201103L
template<typename R, typename... A, typename... B>
static inline int thread_push_function_delayed(int millis, R (*function)(A...), int argcount, B... args)
{
	using namespace simplemail;
	static_assert(sizeof...(A) == sizeof...(B));
	static_assert(is_convertible<tuple<A...>, tuple<B...>>::convertible == true);
	return thread_push_function_delayed_(millis, (void *)function, argcount, args...);
}
#else
#define thread_push_function_delayed thread_push_function_delayed_
#endif