	THUMB_FUNC_START sub_0805E4F8
sub_0805E4F8: @ 0x0805E4F8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0805E542
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
_0805E542:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0805E5D0
	ldr r0, _0805E5B8  @ =0x03000030
	ldr r1, _0805E5BC  @ =gUnknown_08429300
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	mov r3, #254
	lsl r3, r3, #5
	add r1, r2, r3
	ldr r0, [r0]
	add r1, r1, r0
	add r0, r1, #0
	mov r1, #15
	mov r2, #1
	bl load_palette
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	cmp r2, #5
	beq _0805E5C0
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r3, r2, #1
	add r1, r3, #0
	b _0805E5C2
_0805E5B8:
	.4byte 0x03000030
_0805E5BC:
	.4byte gUnknown_08429300
_0805E5C0:
	mov r1, #0
_0805E5C2:
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0805E5D0:
	ldr r0, _0805E600  @ =gUnknown_02016D60
	ldr r1, [r7]
	ldrb r0, [r0, #8]
	ldrb r1, [r1, #11]
	cmp r0, r1
	beq _0805E5F6
	ldr r0, _0805E604  @ =0x03000030
	ldr r2, [r0]
	mov r0, #253
	lsl r0, r0, #5
	add r1, r2, r0
	add r0, r1, #0
	mov r1, #15
	mov r2, #1
	bl load_palette
	ldr r0, [r7]
	bl DeleteThisEntity
_0805E5F6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805E600:
	.4byte gUnknown_02016D60
_0805E604:
	.4byte 0x03000030
	THUMB_FUNC_END sub_0805E4F8

