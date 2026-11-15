	THUMB_FUNC_START sub_0802DC2C
sub_0802DC2C: @ 0x0802DC2C
	push {r4-r6,lr}
	mov r2, #0
	ldr r5, _0802DC58  @ =gUnknown_03000E20
	mov r6, #3
	ldr r4, _0802DC5C  @ =gUnknown_03005E10
	mov r3, #0
_0802DC38:
	ldrb r1, [r5, #17]
	add r0, r6, #0
	and r0, r0, r1
	cmp r2, r0
	beq _0802DC48
	lsl r0, r2, #1
	add r0, r0, r4
	strh r3, [r0]
_0802DC48:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #3
	bls _0802DC38
	pop {r4-r6}
	pop {r0}
	bx r0
_0802DC58:
	.4byte gUnknown_03000E20
_0802DC5C:
	.4byte gUnknown_03005E10
	THUMB_FUNC_END sub_0802DC2C

