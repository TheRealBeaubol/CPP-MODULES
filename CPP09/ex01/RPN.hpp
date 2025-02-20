/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:30:44 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/20 17:12:08 by lboiteux         ###   ########.fr       */
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
        std::stack<double> _stack;
    public:
        RPN();
        RPN(const RPN &rpn);
        RPN &operator=(const RPN &other);
        ~RPN();
        std::stack<double> getStack() const;
};

#endif