/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:30:44 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/19 16:39:03 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <stack>

class RPN {
    private:
        RPN(const RPN &rpn);
        RPN &operator=(const RPN &other);
    public:
        RPN();
        ~RPN();
        void calculate(std::string str);
};

#endif