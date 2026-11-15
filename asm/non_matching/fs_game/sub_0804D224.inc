	THUMB_FUNC_START sub_0804D224
sub_0804D224: @ 0x0804D224
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804D258  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r2, #127
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804D25C
	ldr r0, _0804D258  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r2, #127
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #6
	beq _0804D25C
	b _0804D266
	.byte 0x00
	.byte 0x00
_0804D258:
	.4byte gUnknown_02000010
_0804D25C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #2
	str r1, [r0, #16]
_0804D266:
	mov r0, #0
	b _0804D26A
_0804D26A:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D224

	.byte 0x00
	.byte 0x00
