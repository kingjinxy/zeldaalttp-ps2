	THUMB_FUNC_START sub_08046D3C
sub_08046D3C: @ 0x08046D3C
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	add r1, r7, #4
	add r2, r7, #4
	add r3, r7, #4
	ldrb r4, [r3, #3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strb r5, [r3, #3]
	ldrb r3, [r2, #2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2, #2]
	ldrb r2, [r1, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #1]
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #24
	lsr r2, r1, #24
	add r1, r0, r2
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	mov r2, #3
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r0, r0, r1
	add r1, r7, #4
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #124
	ldrb r2, [r3]
	mov r3, #3
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #1
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	lsr r2, r1, #2
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #24
	lsr r2, r1, #24
	add r1, r0, r2
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	lsr r2, r1, #2
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r0, r0, r1
	add r1, r7, #4
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #124
	ldrb r2, [r3]
	lsr r3, r2, #2
	add r2, r3, #0
	mov r3, #3
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #1
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #24
	lsr r2, r1, #24
	add r1, r0, r2
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r0, r0, r1
	add r1, r7, #4
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #124
	ldrb r2, [r3]
	lsr r3, r2, #4
	add r2, r3, #0
	mov r3, #3
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #1
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldrb r1, [r0, #1]
	cmp r1, #0
	bne _08046EA0
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
	b _08046EDA
_08046EA0:
	add r0, r7, #4
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _08046EB2
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #1
	strb r1, [r0]
	b _08046EDA
_08046EB2:
	add r0, r7, #4
	ldrb r1, [r0, #3]
	cmp r1, #0
	bne _08046EC4
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #2
	strb r1, [r0]
	b _08046EDA
_08046EC4:
	add r4, r7, #0
	add r4, r4, #8
	bl sub_0800099C
	add r1, r0, #0
	add r0, r1, #0
	mov r1, #3
	bl __umodsi3
	add r1, r0, #0
	strb r1, [r4]
_08046EDA:
	add r1, r7, #0
	add r1, r1, #8
	ldrb r0, [r1]
	cmp r0, #1
	beq _08046F18
	cmp r0, #1
	bgt _08046EEE
	cmp r0, #0
	beq _08046EF4
	b _08046F6C
_08046EEE:
	cmp r0, #2
	beq _08046F42
	b _08046F6C
_08046EF4:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #14
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #1
	bl sub_08003870
	mov r0, #178
	bl sub_08003DFC
	b _08046F6C
_08046F18:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #23
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	b _08046F6C
_08046F42:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	b _08046F6C
_08046F6C:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrb r3, [r2]
	lsl r1, r3, #2
	add r2, r7, #0
	add r2, r2, #8
	ldrb r3, [r2]
	add r2, r3, #1
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #124
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
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046D3C

	.byte 0x00
	.byte 0x00
