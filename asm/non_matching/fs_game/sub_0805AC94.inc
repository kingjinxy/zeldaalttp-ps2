	THUMB_FUNC_START sub_0805AC94
sub_0805AC94: @ 0x0805AC94
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #100
	ldr r1, [r7]
	ldr r2, [r7]
	add r0, r2, #0
	add r2, r2, #100
	ldrh r3, [r2]
	sub r0, r3, #1
	add r2, r1, #0
	add r1, r1, #100
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r0, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r1]
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _0805AD1C  @ =0x0000FFFF
	cmp r0, r1
	bne _0805AD0C
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	mov r2, #192
	lsl r2, r2, #8
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0805AD0C:
	ldr r0, [r7]
	bl sub_0805AD74
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805AD1C:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0805AC94

