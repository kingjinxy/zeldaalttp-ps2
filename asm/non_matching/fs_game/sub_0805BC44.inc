	THUMB_FUNC_START sub_0805BC44
sub_0805BC44: @ 0x0805BC44
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805BC8E
	cmp r0, #1
	bgt _0805BC5E
	cmp r0, #0
	beq _0805BC68
	b _0805BD00
_0805BC5E:
	cmp r0, #2
	beq _0805BCB4
	cmp r0, #3
	beq _0805BCDA
	b _0805BD00
_0805BC68:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #122
	ldrh r1, [r1, #54]
	ldrh r2, [r3]
	sub r1, r1, r2
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805BD00
_0805BC8E:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldr r1, [r7]
	ldrh r2, [r2]
	ldrh r3, [r1, #50]
	sub r1, r2, r3
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805BD00
_0805BCB4:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	ldr r1, [r7]
	ldrh r2, [r2]
	ldrh r3, [r1, #54]
	sub r1, r2, r3
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805BD00
_0805BCDA:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #120
	ldrh r1, [r1, #50]
	ldrh r2, [r3]
	sub r1, r1, r2
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805BD00
_0805BD00:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805BC44

