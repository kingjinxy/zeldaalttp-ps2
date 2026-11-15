	THUMB_FUNC_START sub_080CCF20
sub_080CCF20: @ 0x080CCF20
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080CD048  @ =gRam
	ldr r2, _080CD04C  @ =0x00000D4B
	add r0, r1, r2
	add r3, r6, r0
	ldrb r0, [r3]
	add r4, r0, #0
	add r5, r1, #0
	cmp r4, #0
	beq _080CCF3A
	b _080CD08C
_080CCF3A:
	mov r0, #160
	strb r0, [r3]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	strb r4, [r0]
	mov r1, #15
	ldr r2, _080CD050  @ =0x00000FA2
	add r2, r2, r5
	mov r12, r2
	ldr r3, _080CD054  @ =0x00000FF2
	add r7, r5, r3
	add r4, r0, #0
_080CCF54:
	lsl r0, r1, #24
	asr r2, r0, #24
	mov r3, r12
	add r1, r2, r3
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080CCF72
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #143
	bne _080CCF72
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080CCF72:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r3, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CCF54
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	ble _080CCF90
	b _080CD090
_080CCF90:
	mov r0, #143
	add r1, r6, #0
	mov r2, #12
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _080CD090
	ldr r3, _080CD058  @ =0x000016D5
	add r0, r5, r3
	ldrb r2, [r0]
	lsr r2, r2, #1
	ldr r0, _080CD05C  @ =0x000016C4
	add r1, r5, r0
	ldr r0, _080CD060  @ =gUnknown_081729F8
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080CD064  @ =gUnknown_08172A00
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080CD068  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r5, r0
	ldr r0, _080CD06C  @ =gUnknown_081729FC
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080CD070  @ =gUnknown_08172A04
	add r2, r2, r0
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080CD074  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080CD078  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
	ldr r2, _080CD07C  @ =0x000010F2
	add r0, r5, r2
	add r0, r4, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CD080  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	sub r2, r2, #144
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r3, _080CD084  @ =0x00000F82
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _080CD088  @ =0x00001082
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #31
	and r1, r1, r0
	mov r0, #16
	orr r1, r1, r0
	strb r1, [r2]
	b _080CD090
_080CD048:
	.4byte gRam
_080CD04C:
	.4byte 0x00000D4B
_080CD050:
	.4byte 0x00000FA2
_080CD054:
	.4byte 0x00000FF2
_080CD058:
	.4byte 0x000016D5
_080CD05C:
	.4byte 0x000016C4
_080CD060:
	.4byte gUnknown_081729F8
_080CD064:
	.4byte gUnknown_08172A00
_080CD068:
	.4byte 0x00000EE2
_080CD06C:
	.4byte gUnknown_081729FC
_080CD070:
	.4byte gUnknown_08172A04
_080CD074:
	.4byte 0x00000ED2
_080CD078:
	.4byte 0x00001142
_080CD07C:
	.4byte 0x000010F2
_080CD080:
	.4byte 0x00000F52
_080CD084:
	.4byte 0x00000F82
_080CD088:
	.4byte 0x00001082
_080CD08C:
	sub r0, r0, #1
	strb r0, [r3]
_080CD090:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CCF20

	.byte 0x00
	.byte 0x00
