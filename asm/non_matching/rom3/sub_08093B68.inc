	THUMB_FUNC_START sub_08093B68
sub_08093B68: @ 0x08093B68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _08093BE8  @ =gRam
	ldr r0, _08093BEC  @ =0x00001708
	add r0, r0, r2
	mov r12, r0
	ldrb r0, [r0]
	mov r6, #7
	add r4, r6, #0
	and r4, r4, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r2
	mov r8, r1
	strb r4, [r1]
	ldr r3, _08093BF0  @ =0x000016C4
	add r0, r2, r3
	ldrb r3, [r0]
	ldr r7, _08093BF4  @ =0x00000978
	add r0, r2, r7
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _08093BA4
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_08093BA4:
	ldr r1, _08093BF8  @ =0x0000172E
	add r0, r5, r1
	ldrb r2, [r0]
	lsl r0, r2, #2
	ldr r7, _08093BFC  @ =0x00000961
	add r1, r5, r7
	strb r0, [r1]
	and r3, r3, r6
	add r0, r0, r3
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08093C00  @ =0x000016E4
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08093C4C
	mov r4, r12
	ldrb r0, [r4]
	add r1, r6, #0
	and r1, r1, r0
	add r7, r7, #3
	add r0, r5, r7
	strb r1, [r0]
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	bne _08093C04
	mov r0, #8
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _08093C0A
_08093BE8:
	.4byte gRam
_08093BEC:
	.4byte 0x00001708
_08093BF0:
	.4byte 0x000016C4
_08093BF4:
	.4byte 0x00000978
_08093BF8:
	.4byte 0x0000172E
_08093BFC:
	.4byte 0x00000961
_08093C00:
	.4byte 0x000016E4
_08093C04:
	add r0, r1, #0
	add r0, r0, #8
	add r2, r0, #0
_08093C0A:
	ldr r1, _08093C40  @ =0x00000964
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _08093C44  @ =gUnknown_08167D02
	add r0, r3, r0
	ldrb r0, [r0]
	sub r0, r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08093C48  @ =0x000016D6
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08093CDE
	cmp r0, #0
	bge _08093C34
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_08093C34:
	mov r4, #150
	lsl r4, r4, #4
	add r0, r5, r4
	strb r2, [r0]
	b _08093C58
	.byte 0x00
	.byte 0x00
_08093C40:
	.4byte 0x00000964
_08093C44:
	.4byte gUnknown_08167D02
_08093C48:
	.4byte 0x000016D6
_08093C4C:
	ldr r0, _08093C88  @ =gUnknown_08167D02
	add r0, r3, r0
	ldrb r0, [r0]
	sub r0, r0, r4
	mov r7, r8
	strb r0, [r7]
_08093C58:
	ldr r1, _08093C8C  @ =0x000016D6
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08093CDE
	cmp r0, #0
	bge _08093C90
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	ble _08093CDE
	mov r4, #182
	lsl r4, r4, #5
	add r1, r5, r4
	ldrh r7, [r1]
	add r0, r0, r7
	strh r0, [r1]
	mov r2, #8
	b _08093CB8
_08093C88:
	.4byte gUnknown_08167D02
_08093C8C:
	.4byte 0x000016D6
_08093C90:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _08093CDE
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r3, _08093CE8  @ =0xFFFFFF00
	add r2, r3, #0
	orr r1, r1, r2
	ldrh r4, [r0]
	add r1, r1, r4
	strh r1, [r0]
	mov r2, #4
_08093CB8:
	ldr r7, _08093CEC  @ =0x0000172B
	add r4, r5, r7
	strb r2, [r4]
	mov r3, #2
	ldr r1, _08093CF0  @ =0x00000978
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _08093CD0
	mov r3, #3
_08093CD0:
	ldr r0, _08093CF4  @ =gUnknown_08167D22
	add r0, r3, r0
	ldrb r0, [r0]
	mov r1, #16
	orr r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4]
_08093CDE:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08093CE8:
	.4byte 0xFFFFFF00
_08093CEC:
	.4byte 0x0000172B
_08093CF0:
	.4byte 0x00000978
_08093CF4:
	.4byte gUnknown_08167D22
	THUMB_FUNC_END sub_08093B68

