	THUMB_FUNC_START sub_0804C200
sub_0804C200: @ 0x0804C200
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #25]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804C21E
	b _0804C406
_0804C21E:
	ldr r1, [r7]
	ldrb r0, [r1, #9]
	add r2, r0, #0
	lsl r1, r2, #1
	add r1, r1, r0
	lsl r0, r1, #1
	ldr r1, _0804C23C  @ =gUnknown_0813C72C
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0804C240  @ =0x0000FFFE
	cmp r1, r0
	bne _0804C244
	b _0804C406
_0804C23C:
	.4byte gUnknown_0813C72C
_0804C240:
	.4byte 0x0000FFFE
_0804C244:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0804C2D8  @ =0x0000FFFF
	cmp r1, r0
	bne _0804C26E
	ldr r0, _0804C2DC  @ =gUnknown_0813CBB4
	ldr r2, [r7, #4]
	add r1, r2, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #4]
_0804C26E:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	cmp r1, #0
	beq _0804C2EA
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0804C2E0
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #32
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	mov r3, #192
	lsl r3, r3, #2
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	lsr r2, r1, #8
	add r1, r2, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #28]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	b _0804C2EA
_0804C2D8:
	.4byte 0x0000FFFF
_0804C2DC:
	.4byte gUnknown_0813CBB4
_0804C2E0:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, [r7]
	bl sub_0802C070
_0804C2EA:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0804C35C
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0804C358  @ =0x000080FF
	cmp r1, r0
	beq _0804C356
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	ldrh r3, [r2]
	mov r4, #15
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #16
	lsr r2, r3, #16
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_0804C356:
	b _0804C3A8
_0804C358:
	.4byte 0x000080FF
_0804C35C:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	bl sub_0802C2DC
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, [r7]
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_0804C3A8:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	add r1, r2, #0
	ldrb r2, [r0, #27]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldrb r1, [r0, #25]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #25]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #35
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #56
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl 0x08008DD8
_0804C406:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804C200

	.byte 0x00
	.byte 0x00
