	THUMB_FUNC_START sub_0806EDB8
sub_0806EDB8: @ 0x0806EDB8
	push {r4,lr}
	ldr r4, _0806EE14  @ =gRam
	ldr r0, _0806EE18  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0806EE0E
	mov r2, #182
	lsl r2, r2, #5
	add r1, r4, r2
	ldrh r0, [r1]
	sub r0, r0, #2
	strh r0, [r1]
	ldr r3, _0806EE1C  @ =0x00000B5E
	add r0, r4, r3
	ldrh r2, [r0]
	lsr r0, r2, #3
	mov r3, #252
	lsl r3, r3, #1
	add r1, r3, #0
	and r0, r0, r1
	ldr r3, _0806EE20  @ =0x00000964
	add r1, r4, r3
	strh r0, [r1]
	mov r0, #63
	and r0, r0, r2
	lsl r0, r0, #3
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r0, #14
	bl sub_08079844
	ldr r3, _0806EE24  @ =0x00000A1A
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r2, _0806EE28  @ =0x000009AD
	add r0, r4, r2
	strb r1, [r0]
_0806EE0E:
	pop {r4}
	pop {r0}
	bx r0
_0806EE14:
	.4byte gRam
_0806EE18:
	.4byte 0x000009E8
_0806EE1C:
	.4byte 0x00000B5E
_0806EE20:
	.4byte 0x00000964
_0806EE24:
	.4byte 0x00000A1A
_0806EE28:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806EDB8

