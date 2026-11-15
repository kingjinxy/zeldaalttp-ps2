	THUMB_FUNC_START sub_0812C5F0
sub_0812C5F0: @ 0x0812C5F0
	push {r4,lr}
	add r3, r1, #0
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0812C624  @ =gUnknown_03001C88
	add r4, r1, r0
	add r2, r4, #0
	add r2, r2, #66
	ldrb r0, [r2]
	cmp r0, #0
	beq _0812C61E
	mov r1, #0
	mov r0, #2
	strb r0, [r2]
	strh r1, [r4, #56]
	strh r3, [r4, #58]
	ldrh r0, [r4, #52]
	neg r0, r0
	add r1, r3, #0
	bl __divsi3
	strh r0, [r4, #54]
_0812C61E:
	pop {r4}
	pop {r0}
	bx r0
_0812C624:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C5F0

