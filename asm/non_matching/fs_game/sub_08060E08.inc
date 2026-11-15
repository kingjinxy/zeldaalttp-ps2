	THUMB_FUNC_START sub_08060E08
sub_08060E08: @ 0x08060E08
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08060E84  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x0800238C
	ldr r0, [r7]
	bl 0x08003828
	ldr r0, _08060E84  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	cmp r1, #0
	beq _08060E8C
	ldr r0, _08060E88  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08060E82
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #28
	lsr r1, r3, #28
	mov r2, #7
	eor r1, r1, r2
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
_08060E82:
	b _08060EE0
_08060E84:
	.4byte gUnknown_03006A30
_08060E88:
	.4byte gUnknown_03000E20
_08060E8C:
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
	beq _08060EDA
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
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r0, r1, #0
	add r1, r0, #0
	add r1, r1, #8
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl 0x08003870
	b _08060EE0
_08060EDA:
	ldr r0, [r7]
	bl DeleteThisEntity
_08060EE0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08060E08

