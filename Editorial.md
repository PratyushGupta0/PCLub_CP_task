The weak and strong points cam be very similiarly dtermined. Here we demonstrate the procedure for finding weak points. We are given an array of 'n' elements whose
values are unknown to us. But we know the minimum in the array is 1. So we can designate the 'n+1'th value and the '0'th values to be n+1. Or a separate check at the corner
cases can also be applied.

Then the problem reduces to finding one of the local minimas in the array. This can be done by looping through the array, but that would be an O(n) procedure. There exists a 
shorter approach. We know that there exists a minima between 1 and 'n' inclusive. Let 'left'=1 and 'right'=n. These denote the indices between which we are sure that a minima
exists. We know examine the center value, that is (left+right)/2. We can now query the interactor for the height of this peak and both its neighbours. 

If the height of the peak is less than both of them then we are done.

If it is greater than the left side neighbour then observe that there must exist a weak point between 'left' and the 'center-1' value. So we can reduce our search range
by a factor of two . Similiarly if the peak height is greater than its right neighbour then we know there exists a minima between the 'center+1' and 'right' inclusive.

Let us take the first case, that is we pick the left side. Now suppose that there is no weak point in 'left' to 'center-1', If that is the case, it means that all the numbers from
'left' to 'center-1' are in decreasing order. This would also mean that the the number at the index just before 'center-1' is greater than then the number at 'center-1'. This
makes the center-1  positon a minima, which is in contradiction to our earlier assumption. So there will exist a minima from 'left' to 'center-1' inclusive.

Now the above procedure can be applied once again on the new range we have obtained.

The procedure must be performed till we have only a single element in our range and that will be one of the weak points.
This solution runs in O(logn) time. The strong point can be detected in a similiar fashion. 
