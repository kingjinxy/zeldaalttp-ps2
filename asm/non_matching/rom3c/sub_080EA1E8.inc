	THUMB_FUNC_START sub_080EA1E8
sub_080EA1E8: @ 0x080EA1E8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EA2A2
	ldr r2, _080EA2B4  @ =gRam
	ldr r1, _080EA2B8  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r7, #2
	mov r8, r2
	ldr r2, _080EA2BC  @ =0x00000969
	add r2, r2, r8
	mov r10, r2
_080EA228:
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldr r0, _080EA2C0  @ =gUnknown_08177CD3
	mov r3, r9
	add r6, r7, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r5, #0
	ldrsh r1, [r1, r5]
	add r1, r1, r0
	ldr r2, _080EA2C4  @ =0x00000964
	add r2, r2, r8
	ldr r0, _080EA2C8  @ =gUnknown_08177CE5
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r3, #0
	ldrsh r2, [r2, r3]
	add r2, r2, r0
	ldr r0, _080EA2CC  @ =gUnknown_03003E74
	sub r3, r7, #2
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080EA2D0  @ =gUnknown_08177CF7
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080EA2D4  @ =gUnknown_08177D09
	add r4, r6, r4
	ldrb r4, [r4]
	mov r5, r10
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080EA2D8  @ =gUnknown_08177D1B
	add r6, r6, r4
	ldrb r5, [r6]
	mov r4, #2
	and r4, r4, r5
	lsl r4, r4, #24
	lsr r4, r4, #24
	str r4, [sp]
	bl sub_080C6368
	sub r7, r7, #1
	cmp r7, #0
	bge _080EA228
_080EA2A2:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA2B4:
	.4byte gRam
_080EA2B8:
	.4byte 0x00000F92
_080EA2BC:
	.4byte 0x00000969
_080EA2C0:
	.4byte gUnknown_08177CD3
_080EA2C4:
	.4byte 0x00000964
_080EA2C8:
	.4byte gUnknown_08177CE5
_080EA2CC:
	.4byte gUnknown_03003E74
_080EA2D0:
	.4byte gUnknown_08177CF7
_080EA2D4:
	.4byte gUnknown_08177D09
_080EA2D8:
	.4byte gUnknown_08177D1B
	THUMB_FUNC_END sub_080EA1E8

