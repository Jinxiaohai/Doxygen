  !> Build the restriction matrix for the aggregation
  !> method.
  !> \param aggr informaton about the aggregates
  !> \todo Handle special case
subroutine intrestbuild(A, aggr, Restrict, A_ghost)
  implicit none
  Type(SpMtx), intent(in)::A !< out fine level matrix
  Type(Aggrs), intent(in)::aggr
  Type(SpMtx), intent(out)::Restrict !< Our restriction matrix
end subroutine intrestbuild
