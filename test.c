/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:42:19 by sabderra          #+#    #+#             */
/*   Updated: 2024/11/03 21:17:27 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// int main()
// {
	//char buffer[10];
	//ft_memset(buffer, 'a', 4);
	//printf("%s", buffer);
	//printf("%c", 'x');
	//printf("%s",ft_memset(buffer, 'a', 5));
	//printf("%s",ft_memset(buffer,'0',9));
	//char s1[9] = "hello";
	// s2[9] = "world";
	//printf("%d",ft_memcmp(s1, s2, 4));
	//printf("%s",memcpy(s1,s2, 5));
	
	////*for memove;
	// char src1[] = "Hello, World!";
    // char dest1[20];
	// printf("%s",ft_memmove(dest1, src1, 2));
	
	////*for strlpy;
	// char src[] = "HELLOO";
    // char dst[10];
	// printf("%lu", ft_strlcpy(dst, src, 5));

	////*for memchr;
	// char src[] = "HELLOOBOOO";
	// printf("%s",ft_memchr(src, 'B', 7));

	////*for strnstr;
	// const char *haystack = "Hello, welcome to the world of C programming!";
    // const char *needle = "welcome";
	// printf("%s",ft_strnstr(haystack, needle,15));

	////*for ft_putnbr_fd;
	//ft_putnbr_fd(-2147483648, 1);

	//*for ft_putchar_fd;
	// ft_putchar_fd('A', 2);

	////*for ft_putstr_fd;
	//ft_putstr_fd("SKAZI BEATS", 1);
	
	////*for ft_substr;
	// char *s = "AbCd";
	// printf("%s", ft_substr(s, 2, 2));

	//*for ft_putendl_fd;
	// char *s = "AbCd";
	// ft_putendl_fd(s, 1);

	//*for ft_strjoin;
	// char *s1 = "abcd";
	// char *s2 = "efghi";
	// printf("%s",ft_strjoin(s1, s2));

	//*for ft_strtrim;
		// char *s = "lkELElk";
		// char *set = "kfwhbl";
		// printf("%s",ft_strtrim(s, set));
// }




// void test_ft_substr() 
// {
//     char *s1 = "Hello, World!";
//     char *s2 = "Test string for substr";

//     // Test case 1: Basic usage
//     char *result1 = ft_substr(s1, 7, 5);
//     printf("Test 1: %s\n", result1); // Expected: "World"
//     free(result1);

//     // Test case 2: Start index out of bounds
//     char *result2 = ft_substr(s1, 20, 5);
//     printf("Test 2: '%s'\n", result2); // Expected: ""
//     free(result2);

//     // Test case 3: Length exceeds remaining string
//     char *result3 = ft_substr(s1, 0, 50);
//     printf("Test 3: %s\n", result3); // Expected: "Hello, World!"
//     free(result3);

//     // Test case 4: Start index is the beginning
//     char *result4 = ft_substr(s2, 0, 4);
//     printf("Test 4: %s\n", result4); // Expected: "Test"
//     free(result4);

//     // Test case 5: Start index in the middle
//     char *result5 = ft_substr(s2, 5, 6);
//     printf("Test 5: %s\n", result5); // Expected: "string"
//     free(result5);

//     // Test case 6: Start index is the end
//     char *result6 = ft_substr(s1, 13, 5);
//     printf("Test 6: '%s'\n", result6); // Expected: ""
//     free(result6);
// }

// int main() {
//     test_ft_substr();
//     return 0;
// }




// Assuming ft_strlen, ft_strchr, and ft_substr are defined elsewhere
// size_t ft_strlen(const char *s);
// char *ft_strchr(const char *s, int c);
// char *ft_substr(const char *s, unsigned int start, size_t len);
// char *ft_strtrim(const char *s1, const char *set);

// void test_ft_strtrim() {
//     char *result;

//     // Test case 1: Trimming whitespace
//     result = ft_strtrim("   Hello, World!   ", " ");
//     printf("Result 1: '%s' (Expected: 'Hello, World!')\n", result);
//     free(result);

//     // Test case 2: Trimming specific characters
//     result = ft_strtrim("***Hello, World!***", "*");
//     printf("Result 2: '%s' (Expected: 'Hello, World!')\n", result);
//     free(result);

//     // Test case 3: No trimming needed
//     result = ft_strtrim("Hello, World!", " ");
//     printf("Result 3: '%s' (Expected: 'Hello, World!')\n", result);
//     free(result);

//     // Test case 4: Empty string
//     result = ft_strtrim("", " ");
//     printf("Result 4: '%s' (Expected: '')\n", result);
//     free(result);

//     // Test case 5: All characters trimmed
//     result = ft_strtrim("******", "*");
//     printf("Result 5: '%s' (Expected: '')\n", result);
//     free(result);

//     // Test case 6: Trimming from both sides
//     result = ft_strtrim("   **Hello, World!**   ", "* ");
//     printf("Result 6: '%s' (Expected: 'Hello, World!')\n", result);
//     free(result);

//     // Test case 7: No characters to trim
//     result = ft_strtrim("NoTrimHere", "xyz");
//     printf("Result 7: '%s' (Expected: 'NoTrimHere')\n", result);
//     free(result);

//     // Test case 8: Trimming in a string of special characters
//     result = ft_strtrim("!!!@@@Hello@@@!!!", "!@");
//     printf("Result 8: '%s' (Expected: 'Hello')\n", result);
//     free(result);
// }

// int main() {
//     test_ft_strtrim();
//     return 0;
// }

// int main()
// {
// #include <stdlib.h>
// #include <stdio.h>



// char *s = "214748364999999999999";
// printf("%d",atoi(s));
// }

// int main()
// {
// 	printf("%s",ft_itoa(-2147483647));
// }

// int main()
// {
// 	printf("%d",ft_atoi("2147483647"));
// }





// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>


// void	print_split_result(char **result) 
// {
//     if (result) 
// 	{
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("\"%s\"", result[i]);
//             if (result[i + 1] != NULL) {
//                 printf(", ");
//             }
//         }
//     }
//     printf("\n");
// }

// int main() 
// {
//     // Test case 1
//     const char *str1 = "hello world";
//     char set1 = ' ';
//     char **sp1 = ft_split(str1, set1);
//     printf("Test 1: ");
//     print_split_result(sp1); // Expected: ["hello", "world"]

//     // Test case 2
//     const char *str2 = "";
//     char set2 = ' ';
//     char **sp2 = ft_split(str2, set2);
//     printf("Test 2: ");
//     print_split_result(sp2); // Expected: []

//     // Test case 3
//     const char *str3 = "helloworld";
//     char set3 = ' ';
//     char **sp3 = ft_split(str3, set3);
//     printf("Test 3: ");
//     print_split_result(sp3); // Expected: ["helloworld"]

//     // Test case 4
//     const char *str4 = "     ";
//     char set4 = ' ';
//     char **sp4 = ft_split(str4, set4);
//     printf("Test 4: ");
//     print_split_result(sp4); // Expected: ["", "", "", "", "", ""]

//     // Test case 5
//     const char *str5 = " hello world ";
//     char set5 = ' ';
//     char **sp5 = ft_split(str5, set5);
//     printf("Test 5: ");
//     print_split_result(sp5); // Expected: ["hello", "world"]

//     // Test case 6
//     const char *str6 = "hello  world";
//     char set6 = ' ';
//     char **sp6 = ft_split(str6, set6);
//     printf("Test 6: ");
//     print_split_result(sp6); // Expected: ["hello", "", "world"]

//     // Test case 7
//     const char *str7 = "hello\tworld";
//     char set7 = '\t';
//     char **sp7 = ft_split(str7, set7);
//     printf("Test 7: ");
//     print_split_result(sp7); // Expected: ["hello", "world"]

//     // Test case 8
//     const char *str8 = "hello\nworld";
//     char set8 = '\n';
//     char **sp8 = ft_split(str8, set8);
//     printf("Test 8: ");
//     print_split_result(sp8); // Expected: ["hello", "world"]

//     // Test case 9
//     const char *str9 = "a-b-c";
//     char set9 = '-';
//     char **sp9 = ft_split(str9, set9);
//     printf("Test 9: ");
//     print_split_result(sp9); // Expected: ["a", "b", "c"]

//     // Test case 10
//     const char *str10 = "abcdef";
//     char set10 = '-';
//     char **sp10 = ft_split(str10, set10);
//     printf("Test 10: ");
//     print_split_result(sp10); // Expected: ["abcdef"]

//     // Test case 11
//     const char *str11 = "-abc";
//     char set11 = '-';
//     char **sp11 = ft_split(str11, set11);
//     printf("Test 11: ");
//     print_split_result(sp11); // Expected: ["", "abc"]

//     // Test case 12
//     const char *str12 = "abc-";
//     char set12 = '-';
//     char **sp12 = ft_split(str12, set12);
//     printf("Test 12: ");
//     print_split_result(sp12); // Expected: ["abc", ""]

//     // Test case 13
//     const char *str13 = "///";
//     char set13 = '/';
//     char **sp13 = ft_split(str13, set13);
//     printf("Test 13: ");
//     print_split_result(sp13); // Expected: ["", "", "", ""]

//     // Test case 14
//     const char *str14 = "This is a test";
//     char set14 = ' ';
//     char **sp14 = ft_split(str14, set14);
//     printf("Test 14: ");
//     print_split_result(sp14); // Expected: ["This", "is", "a", "test"]

//     // Test case 15
//     const char *str15 = "";
//     char set15 = ',';
//     char **sp15 = ft_split(str15, set15);
//     printf("Test 15: ");
//     print_split_result(sp15); // Expected: []

//     // Test case 16
//     const char *str16 = ",hello,world,";
//     char set16 = ',';
//     char **sp16 = ft_split(str16, set16);
//     printf("Test 16: ");
//     print_split_result(sp16); // Expected: ["", "hello", "world", ""]

//     // Test case 17
//     const char *str17 = "hello,,world";
//     char set17 = ',';
//     char **sp17 = ft_split(str17, set17);
//     printf("Test 17: ");
//     print_split_result(sp17); // Expected: ["hello", "", "world"]

//     // Test case 18
//     const char *str18 = "hello!@#world";
//     char set18 = '!';
//     char **sp18 = ft_split(str18, set18);
//     printf("Test 18: ");
//     print_split_result(sp18); // Expected: ["hello", "@#world"]

//     // Test case 19
//     const char *str19 = "hello world again";
//     char set19 = ' ';
//     char **sp19 = ft_split(str19, set19);
//     printf("Test 19: ");
//     print_split_result(sp19); // Expected: ["hello", "world", "again"]

//     // Test case 20
//     const char *str20 = "123 456 789";
//     char set20 = ' ';
//     char **sp20 = ft_split(str20, set20);
//     printf("Test 20: ");
//     print_split_result(sp20); // Expected: ["123", "456", "789"]

//     // Test case 21
//     const char *str21 = "!!";
//     char set21 = '!';
//     char **sp21 = ft_split(str21, set21);
//     printf("Test 21: ");
//     print_split_result(sp21); // Expected: ["", ""]

//     // Test case 22
//     const char *str22 = "a b c";
//     char set22 = ' ';
//     char **sp22 = ft_split(str22, set22);
//     printf("Test 22: ");
//     print_split_result(sp22); // Expected: ["a", "b", "c"]

//     // Test case 23
//     const char *str23 = "one   two   three";
//     char set23 = ' ';
//     char **sp23 = ft_split(str23, set23);
//     printf("Test 23: ");
//     print_split_result(sp23); // Expected: ["one", "", "", "two", "", "", "three"]

//     // Test case 24
//     const char *str24 = "mixed-123-delimiters";
//     char set24 = '-';
//     char **sp24 = ft_split(str24, set24);
//     printf("Test 24: ");
//     print_split_result(sp24); // Expected: ["mixed", "123", "delimiters"]

//     // Test case 25
//     const char *str25 = "a/b/c";
//     char set25 = '/';
//     char **sp25 = ft_split(str25, set25);
//     printf("Test 25: ");
//     print_split_result(sp25); // Expected: ["a", "b", "c"]

//     // Test case 26
//     const char *str26 = "abc";
//     char set26 = 'd';
//     char **sp26 = ft_split(str26, set26);
//     printf("Test 26: ");
//     print_split_result(sp26); // Expected: ["abc"]

//     // Test case 27
//     const char *str27 = "abc def ghi";
//     char set27 = ' ';
//     char **sp27 = ft_split(str27, set27);
//     printf("Test 27: ");
//     print_split_result(sp27); // Expected: ["abc", "def", "ghi"]

//     // Test case 28
//     const char *str28 = "1,2,3,4";
//     char set28 = ',';
//     char **sp28 = ft_split(str28, set28);
//     printf("Test 28: ");
//     print_split_result(sp28); // Expected: ["1", "2", "3", "4"]

//     // Test case 29
//     const char *str29 = "hello  \n world";
//     char set29 = '\n';
//     char **sp29 = ft_split(str29, set29);
//     printf("Test 29: ");
//     print_split_result(sp29); // Expected: ["hello  ", " world"]

//     // Test case 30
//     const char *str30 = " \t leading and trailing spaces \t ";
//     char set30 = ' ';
//     char **sp30 = ft_split(str30, set30);
//     printf("Test 30: ");
//     print_split_result(sp30); // Expected: ["", "leading", "and", "trailing", "spaces", ""]

//     return 0;
// }
