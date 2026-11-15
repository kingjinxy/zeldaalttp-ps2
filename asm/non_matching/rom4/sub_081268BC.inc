	THUMB_FUNC_START sub_081268BC
sub_081268BC: @ 0x081268BC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_08126030
	ldr r0, _08126910  @ =gUnknown_03000050
	mov r12, r0
	mov r2, r12
	add r2, r2, #48
	add r2, r4, r2
	ldr r0, _08126914  @ =gUnknown_08180944
	lsl r3, r4, #1
	add r0, r3, r0
	ldrh r1, [r0]
	strb r1, [r2]
	mov r0, r12
	add r0, r0, #56
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	mov r2, r12
	add r2, r2, #72
	add r2, r4, r2
	ldr r0, _08126918  @ =gUnknown_0818094A
	add r3, r3, r0
	ldrh r1, [r3]
	strb r1, [r2]
	mov r0, r12
	add r0, r0, #80
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, r12
	add r0, r0, #16
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_08126910:
	.4byte gUnknown_03000050
_08126914:
	.4byte gUnknown_08180944
_08126918:
	.4byte gUnknown_0818094A
	THUMB_FUNC_END sub_081268BC

