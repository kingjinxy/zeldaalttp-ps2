	THUMB_FUNC_START sub_08042CB8
sub_08042CB8: @ 0x08042CB8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _08042D88
	ldr r0, _08042D58  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _08042D86
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #101
	ldrb r0, [r1]
	cmp r0, #0
	beq _08042D02
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #101
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #101
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #101
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08042D02:
	ldr r0, _08042D5C  @ =gUnknown_0842875C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	beq _08042D86
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08042D60
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08042D86
_08042D58:
	.4byte gUnknown_03000C00
_08042D5C:
	.4byte gUnknown_0842875C
_08042D60:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08042D86:
	b _08042D9C
_08042D88:
	ldr r0, _08042DAC  @ =gUnknown_0842875C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08042D9C:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08042DAC:
	.4byte gUnknown_0842875C
	THUMB_FUNC_END sub_08042CB8

