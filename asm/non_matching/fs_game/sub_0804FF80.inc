	THUMB_FUNC_START sub_0804FF80
sub_0804FF80: @ 0x0804FF80
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r1, [r7, #4]
	add r1, r7, #0
	strh r0, [r1]
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r0, [r1]
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #2
	beq _0804FFE2
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #8
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804FFCC
	add r0, r7, #0
	ldrh r1, [r0]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #81
	bl sub_08014658
	b _0804FFE0
_0804FFCC:
	add r0, r7, #0
	ldrh r1, [r0]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #80
	bl sub_08014658
_0804FFE0:
	b _08050022
_0804FFE2:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #8
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805000E
	add r0, r7, #0
	ldrh r1, [r0]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #122
	bl sub_08014658
	b _08050022
_0805000E:
	add r0, r7, #0
	ldrh r1, [r0]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #121
	bl sub_08014658
_08050022:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804FF80

	.byte 0x00
	.byte 0x00
