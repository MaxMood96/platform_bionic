#if defined(__cplusplus)
extern "C" {
#endif

int always_available();

int also_always_available() __INTRODUCED_IN(9);


#if __ANDROID_API__ >= 13
int needs_guard() __INTRODUCED_IN(13);
#endif /* __ANDROID_API__ >= 13 */


#if __ANDROID_API__ >= 12

#if __ANDROID_API__ >= 13
int needs_guard_2() __INTRODUCED_IN(13);
#endif /* __ANDROID_API__ >= 13 */

#endif

#if __ANDROID_API__ >= 13
int already_guarded() __INTRODUCED_IN(13);
#endif

#if __ANDROID_API__ > 13
int already_guarded_2() __INTRODUCED_IN(13);
#endif

#if defined(__arm__)

#if __ANDROID_API__ >= 14
int specific_arch() __INTRODUCED_IN(14);
#endif /* __ANDROID_API__ >= 14 */


#if __ANDROID_API__ >= 14
int specific_arch_already_guarded() __INTRODUCED_IN(14);
#endif

#if __ANDROID_API__ > 14
int specific_arch_already_guarded_2() __INTRODUCED_IN(14);
#endif
#endif

#if defined(__arm__) || defined(__i386__)

#if __ANDROID_API__ >= 14
int multiple_archs() __INTRODUCED_IN(14);
#endif /* __ANDROID_API__ >= 14 */

#endif

// __INTRODUCED_IN_64(21) should be ignored.

#if (!defined(__LP64__) && __ANDROID_API__ >= 13) || (defined(__LP64__))
int multiple_introduced_1() __INTRODUCED_IN_ARM(13) __INTRODUCED_IN_X86(13) __INTRODUCED_IN_64(21);
#endif /* (!defined(__LP64__) && __ANDROID_API__ >= 13) || (defined(__LP64__)) */



#if (!defined(__LP64__) && __ANDROID_API__ >= 13) || (defined(__LP64__) && __ANDROID_API__ >= 22)
int multiple_introduced_2() __INTRODUCED_IN_ARM(13) __INTRODUCED_IN_X86(13) __INTRODUCED_IN_64(22);
#endif /* (!defined(__LP64__) && __ANDROID_API__ >= 13) || (defined(__LP64__) && __ANDROID_API__ >= 22) */


// This produces both an LP64 and a not-LP64 check, but it doesn't need to check for all 64-bit
// targets separately.

#if (!defined(__LP64__) && __ANDROID_API__ >= 23) || (defined(__LP64__) && __ANDROID_API__ >= 23)
int multiple_introduced_3() __INTRODUCED_IN_32(23) __INTRODUCED_IN_64(23);
#endif /* (!defined(__LP64__) && __ANDROID_API__ >= 23) || (defined(__LP64__) && __ANDROID_API__ >= 23) */



#if (!defined(__LP64__) && __ANDROID_API__ >= 12) || (defined(__LP64__))
int group_lp32() __INTRODUCED_IN_ARM(12) __INTRODUCED_IN_X86(12);
#endif /* (!defined(__LP64__) && __ANDROID_API__ >= 12) || (defined(__LP64__)) */


#if defined(__cplusplus)
}
#endif
