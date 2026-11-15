	THUMB_FUNC_START sub_080346F8
sub_080346F8: @ 0x080346F8
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #114
	ldrh r2, [r1]
	mov r0, #128
	lsl r0, r0, #1
	cmp r2, r0
	bls _08034722
	sub r2, r2, #32
	mov r3, #0
	strh r2, [r1]
	ldr r0, _08034728  @ =gUnknown_03000488
	sub r1, r1, #2
	ldrh r1, [r1]
	strh r1, [r0]
	strh r2, [r0, #2]
	strh r3, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
_08034722:
	pop {r4}
	pop {r0}
	bx r0
_08034728:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_080346F8

