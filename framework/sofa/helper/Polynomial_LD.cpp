/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 beta 4      *
*                (c) 2006-2009 MGH, INRIA, USTL, UJF, CNRS                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                              SOFA :: Framework                              *
*                                                                             *
* Authors: M. Adam, J. Allard, B. Andre, P-J. Bensoussan, S. Cotin, C. Duriez,*
* H. Delingette, F. Falipou, F. Faure, S. Fonteneau, L. Heigeas, C. Mendoza,  *
* M. Nesme, P. Neumann, J-P. de la Plata Alcade, F. Poyer and F. Roy          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include "Polynomial_LD.inl"

namespace sofa
{

namespace helper
{

using namespace sofa::defaulttype;
using namespace std;


#ifdef SOFA_DOUBLE
template class Monomial_LD<double,1>;
template class Monomial_LD<double,2>;
template class Monomial_LD<double,3>;
template class Monomial_LD<double,4>;
template class Monomial_LD<double,5>;

template class Polynomial_LD<double,1>;
template class Polynomial_LD<double,2>;
template class Polynomial_LD<double,3>;
template class Polynomial_LD<double,4>;
template class Polynomial_LD<double,5>;

#endif



#ifdef SOFA_FLOAT

template class Monomial_LD<float,1>;
template class Monomial_LD<float,2>;
template class Monomial_LD<float,3>;
template class Monomial_LD<float,4>;
template class Monomial_LD<float,5>;

template class Polynomial_LD<float,1>;
template class Polynomial_LD<float,2>;
template class Polynomial_LD<float,3>;
template class Polynomial_LD<float,4>;
template class Polynomial_LD<float,5>;

#endif



} // namespace helper

} // namespace sofa

