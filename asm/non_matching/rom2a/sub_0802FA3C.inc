	THUMB_FUNC_START sub_0802FA3C
sub_0802FA3C: @ 0x0802FA3C
	push {r4,lr}
	add r4, r0, #0
	add r0, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_0800D67C
	ldr r3, _0802FA88  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldr r0, _0802FA8C  @ =gUnknown_02016D60
	strb r4, [r0, #15]
	ldr r1, _0802FA90  @ =gUnknown_0202A7E0
	lsl r0, r4, #2
	add r0, r0, r4
	lsl r0, r0, #2
	add r1, r1, #12
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, #3
	strb r0, [r1, #20]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FA88:
	.4byte gUnknown_02000010
_0802FA8C:
	.4byte gUnknown_02016D60
_0802FA90:
	.4byte gUnknown_0202A7E0
	THUMB_FUNC_END sub_0802FA3C

