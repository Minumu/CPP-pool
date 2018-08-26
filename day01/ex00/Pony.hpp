// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:48:50 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:07:23 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {

public:
	Pony(void);
	~Pony();
	std::string	getPonyName(void) const;
	std::string getPonyColor(void) const ;
	void		setPonyName(void);
	void		setPonyColor(void);

private:
	std::string _ponyName;
	std::string _ponyColor;
};

#endif
