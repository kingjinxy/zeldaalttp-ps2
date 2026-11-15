	THUMB_FUNC_START sub_0804B208
sub_0804B208: @ 0x0804B208
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #20]
	cmp r0, #4
	bne _0804B222
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804B2F8
_0804B222:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #6
	bne _0804B252
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804B250
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B250:
	b _0804B2F8
_0804B252:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #24]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0804B2F8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #11
	bne _0804B2CE
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	mov r1, #5
	bl sub_08003870
	mov r0, #182
	bl sub_08003DFC
	b _0804B2F8
_0804B2CE:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	mov r1, #6
	bl sub_08003870
_0804B2F8:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B208

