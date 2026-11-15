	THUMB_FUNC_START sub_08011184
sub_08011184: @ 0x08011184
	push {r4,r5,lr}
	lsl r0, r0, #24
	mov r5, #224
	lsl r5, r5, #19
	and r5, r5, r0
	lsr r5, r5, #24
	lsl r4, r5, #6
	ldr r0, _080111C0  @ =gUnknown_0200B250
	add r4, r4, r0
	add r0, r4, #0
	mov r1, #64
	bl zero_memory
	add r0, r4, #0
	add r0, r0, #36
	mov r1, #1
	strb r1, [r0]
	add r4, r4, #37
	strb r1, [r4]
	lsl r5, r5, #4
	ldr r0, _080111C4  @ =gUnknown_0202A6F0
	add r5, r5, r0
	add r0, r5, #0
	mov r1, #16
	bl zero_memory
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080111C0:
	.4byte gUnknown_0200B250
_080111C4:
	.4byte gUnknown_0202A6F0
	THUMB_FUNC_END sub_08011184

