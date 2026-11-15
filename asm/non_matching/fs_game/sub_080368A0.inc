	THUMB_FUNC_START sub_080368A0
sub_080368A0: @ 0x080368A0
	push {r7,lr}
	mov r7, sp
	ldr r1, _080368BC  @ =gUnknown_03000FD0
	add r0, r1, #0
	bl sub_0800C658
	ldr r1, _080368BC  @ =gUnknown_03000FD0
	add r0, r1, #0
	mov r1, #20
	bl zero_memory
	pop {r7}
	pop {r0}
	bx r0
_080368BC:
	.4byte gUnknown_03000FD0
	THUMB_FUNC_END sub_080368A0

