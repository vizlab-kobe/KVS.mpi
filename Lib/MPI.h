#pragma once
#include <mpi.h>
#include <kvs/String>


namespace kvs
{

namespace mpi
{

inline const std::string Description()
{
    const std::string description("MPI - Message Passing Interface");
    return description;
}

inline const std::string Version()
{
    const int major_version = MPI_VERSION;
    const int minor_version = MPI_SUBVERSION;

    const std::string version(
        kvs::String::ToString( major_version ) + "." +
        kvs::String::ToString( minor_version ) );
    return version;
}

} // end of namespace mpi

} // end of namespace kvs
