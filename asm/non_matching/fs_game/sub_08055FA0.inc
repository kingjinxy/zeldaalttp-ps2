	THUMB_FUNC_START sub_08055FA0
sub_08055FA0: @ 0x08055FA0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _08055FC0  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08055FC4
	b _0805603C
	.byte 0x00
	.byte 0x00
_08055FC0:
	.4byte gUnknown_03000948
_08055FC4:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08055FE8
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _08056002
_08055FE8:
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
_08056002:
	add r0, r7, #4
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08056044  @ =gUnknown_030004A0
	add r1, r7, #4
	ldrh r2, [r1]
	lsl r1, r2, #12
	add r2, r7, #4
	ldrh r3, [r2]
	lsl r2, r3, #8
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #100
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_0805603C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_08056044:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_08055FA0

