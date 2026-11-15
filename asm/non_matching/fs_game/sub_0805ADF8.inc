	THUMB_FUNC_START sub_0805ADF8
sub_0805ADF8: @ 0x0805ADF8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #23]
	cmp r0, #0
	beq _0805AE0E
	cmp r0, #1
	beq _0805AE40
	b _0805AE5C
_0805AE0E:
	ldr r0, [r7]
	ldr r1, [r0, #16]
	ldr r0, _0805AE3C  @ =0xFFFF8000
	cmp r1, r0
	bge _0805AE32
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
_0805AE32:
	mov r0, #128
	lsl r0, r0, #4
	str r0, [r7, #4]
	b _0805AE5C
	.byte 0x00
	.byte 0x00
_0805AE3C:
	.4byte 0xFFFF8000
_0805AE40:
	ldr r0, [r7]
	ldr r1, [r0, #16]
	mov r0, #128
	lsl r0, r0, #8
	cmp r1, r0
	ble _0805AE58
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
_0805AE58:
	ldr r0, _0805AE94  @ =0xFFFFF800
	str r0, [r7, #4]
_0805AE5C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	ldr r1, [r7, #4]
	sub r2, r2, r1
	str r2, [r0, #16]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r1, [r1, #56]
	ldr r2, [r2, #16]
	sub r1, r1, r2
	str r1, [r0, #56]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	sub r1, r0, #1
	cmp r1, #14
	bgt _0805AE98
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #4
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0805AEA4
	.byte 0x00
	.byte 0x00
_0805AE94:
	.4byte 0xFFFFF800
_0805AE98:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #251
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0805AEA4:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805ADF8

