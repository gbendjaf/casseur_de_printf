/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoufi <musoufi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:26:52 by musoufi           #+#    #+#             */
/*   Updated: 2020/12/08 12:26:53 by musoufi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libftprintf.h"

// % [flag] [width] [[.]precision] specificier

int main()
{
    int r1, r2;

    char *p = (char*)malloc(sizeof(char));

    r1 = ft_printf("salut %-19.15p|%-3.2i|%.03*x moi c'est %s~\n", p, 7, 6, 2345678, "luis");
    r2 = printf("salut %-19.15p|%-3.2i|%.03*x moi c'est %s~\n", p, 7, 6, 2345678, "luis");
    //if (r1 != r2)
    //    printf("printf : %d ; ft_printf : %d\n", r1, r2);

}

//https://github.com/cclaude42/PFT_2019
//git clone https://github.com/gavinfielder/pft.git pft_2019 && echo "pft_2019/" >> .gitignore && cd pft_2019 && rm unit_tests.c && rm options-config.ini && git clone https://github.com/cclaude42/PFT_2019.git temp && cp temp/unit_tests.c . && cp temp/options-config.ini . && rm -rf temp
//make re

//https://github.com/Tripouille/printfTester
//cd printfTester && make vm