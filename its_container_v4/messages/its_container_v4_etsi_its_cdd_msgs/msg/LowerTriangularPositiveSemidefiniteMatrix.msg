#*                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                   *
#*                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore        *
#*                                                                                 *
#* This program and the accompanying materials are made available under the        *
#* terms of the Eclipse Public License 2.0 which is available at                   *
#* http://www.eclipse.org/legal/epl-2.0.                                           *
#*                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                *
#*                                                                                 *
#*                                                                                 *
#* File automatically generated with DLR Wind v2                                   *
#*                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF represents a lower triangular positive semi-definite matrix.
# 
#  It shall include the following components:
# 
#  @field componentsIncludedIntheMatrix: the indication of which components of a @ref PerceivedObject are included in the matrix.
#  This component also implicitly indicates the number n of included components which defines the size (n x n) of the full correlation matrix "A".
# 
#  @field matrix: the list of cells of the lower triangular positive semi-definite matrix ordered by columns and by rows.
# 
#  The number of columns to be included "k" is equal to the number of included components "n" indicated by componentsIncludedIntheMatrix minus 1: k = n-1.
#  These components shall be included in the order or their appearance in componentsIncludedIntheMatrix.
#  Each column "i" of the lowerTriangularCorrelationMatrixColumns contains k-(i-1) values.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    componentsIncludedIntheMatrix MatrixIncludedComponents,
#    matrix LowerTriangularPositiveSemidefiniteMatrixColumns 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LowerTriangularPositiveSemidefiniteMatrix **********
#

MatrixIncludedComponents                         components_included_inthe_matrix # the indication of which components of a @ref PerceivedObject are included in the matrix.
LowerTriangularPositiveSemidefiniteMatrixColumns matrix                           # the list of cells of the lower triangular positive semi-definite matrix ordered by columns and by rows.

# ********** END of LowerTriangularPositiveSemidefiniteMatrix   **********
