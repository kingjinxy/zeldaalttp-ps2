	THUMB_FUNC_START sub_081219DC
sub_081219DC: @ 0x081219DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r6, _08121A3C  @ =gRam
	ldr r1, _08121A40  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	mov r8, r0
	cmp r0, #0
	bne _08121A94
	ldr r2, _08121A44  @ =0x00000E1F
	add r0, r6, r2
	add r4, r7, r0
	ldrb r0, [r4]
	cmp r0, #3
	bne _08121A58
	add r0, r7, #0
	mov r1, #2
	bl sub_080BF880
	lsl r0, r0, #24
	cmp r0, #0
	beq _08121A94
	ldr r1, _08121A48  @ =0x00001810
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121A94
	ldr r2, _08121A4C  @ =0x00001702
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121A94
	ldr r1, _08121A50  @ =0x00000E15
	add r0, r6, r1
	add r0, r7, r0
	mov r2, r8
	strb r2, [r0]
	ldr r1, _08121A54  @ =0x00001776
	add r0, r6, r1
	strb r2, [r0]
	mov r0, #20
	bl sub_080A1588
	b _08121AFE
_08121A3C:
	.4byte gRam
_08121A40:
	.4byte 0x000009AD
_08121A44:
	.4byte 0x00000E1F
_08121A48:
	.4byte 0x00001810
_08121A4C:
	.4byte 0x00001702
_08121A50:
	.4byte 0x00000E15
_08121A54:
	.4byte 0x00001776
_08121A58:
	ldr r2, _08121B0C  @ =0x00000A88
	add r0, r6, r2
	add r5, r7, r0
	ldrb r0, [r5]
	sub r0, r0, #2
	strb r0, [r5]
	add r0, r7, #0
	bl sub_080C1768
	add r0, r7, #0
	mov r1, #0
	bl sub_080BF804
	ldr r1, _08121B10  @ =0x00000A92
	add r0, r6, r1
	add r2, r7, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _08121A94
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r1, _08121B14  @ =gUnknown_08180388
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	mov r0, r8
	strb r0, [r2]
_08121A94:
	add r0, r7, #0
	bl sub_080C17A8
	ldr r1, _08121B18  @ =gRam
	mov r8, r1
	ldr r0, _08121B10  @ =0x00000A92
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08121AB8
	mov r2, #255
	lsl r2, r2, #8
	add r0, r2, #0
	orr r1, r1, r0
_08121AB8:
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r8
	ldrh r0, [r5]
	sub r0, r0, r1
	strh r0, [r5]
	ldr r6, _08121B1C  @ =gUnknown_03003E74
	ldrh r0, [r6]
	ldr r1, _08121B20  @ =0x00000964
	add r1, r1, r8
	ldrh r1, [r1]
	ldrh r2, [r5]
	ldr r3, _08121B24  @ =0x00001724
	add r3, r3, r8
	ldrb r4, [r3]
	mov r3, #4
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #68
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	ldrb r0, [r5]
	cmp r0, #239
	bls _08121AFE
	ldr r0, _08121B28  @ =0x00000E15
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
_08121AFE:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08121B0C:
	.4byte 0x00000A88
_08121B10:
	.4byte 0x00000A92
_08121B14:
	.4byte gUnknown_08180388
_08121B18:
	.4byte gRam
_08121B1C:
	.4byte gUnknown_03003E74
_08121B20:
	.4byte 0x00000964
_08121B24:
	.4byte 0x00001724
_08121B28:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_081219DC

