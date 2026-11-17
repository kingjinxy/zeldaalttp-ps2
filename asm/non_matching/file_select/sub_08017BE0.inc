	THUMB_FUNC_START sub_08017BE0
sub_08017BE0: @ 0x08017BE0
	push {lr}
	add r3, r0, #0
	mov r0, #113
	add r0, r0, r3
	mov r12, r0
	ldr r2, _08017C28  @ =gUnknown_03006A30
	ldrb r1, [r3, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	add r0, r0, #42
	mov r2, r12
	ldrb r1, [r2]
	ldrb r2, [r0]
	eor r1, r1, r2
	mov r0, #4
	and r1, r1, r0
	cmp r1, #0
	beq _08017C24
	mov r0, r12
	strb r2, [r0]
	add r2, r3, #0
	add r2, r2, #42
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r3, #0
	bl sub_08003870
_08017C24:
	pop {r0}
	bx r0
_08017C28:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08017BE0

