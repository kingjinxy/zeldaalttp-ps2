	THUMB_FUNC_START sub_08045FDC
sub_08045FDC: @ 0x08045FDC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _08046018
	ldr r0, [r7]
	bl sub_0804721C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08046016
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #112
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08046016:
	b _0804604C
_08046018:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #4
	bne _0804604C
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #18
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_0804604C:
	ldr r0, [r7]
	bl GetNextFrame
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08045FDC

	.byte 0x00
	.byte 0x00
