/** \file RayTracingCUDA.cuh
 * \author Tomasz Jakubczyk
 * \brief Declaration of RayTrace function.
 */

extern "C"
{
    void RayTrace(float3* P2, int VH_length, int Vb_length, HandlesStructures S, float* IM, float3* P);
}
