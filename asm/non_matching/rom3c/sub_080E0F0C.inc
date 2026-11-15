	THUMB_FUNC_START sub_080E0F0C
sub_080E0F0C: @ 0x080E0F0C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	bl sub_080C6340
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E0FDA
	ldr r2, _080E0FEC  @ =gRam
	ldr r1, _080E0FF0  @ =0x00000F92
	add r0, r2, r1
	add r0, r0, r9
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r5, #2
	mov r8, r5
	add r7, sp, #4
	mov r10, r2
_080E0F50:
	ldr r6, [sp, #8]
	add r6, r6, r8
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080E0FF4  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r10
	ldr r1, _080E0FF8  @ =gUnknown_08176866
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E0FFC  @ =0x00000964
	add r3, r3, r10
	ldr r2, _080E1000  @ =gUnknown_08176875
	add r2, r6, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E1004  @ =gUnknown_08176884
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080E1008  @ =gUnknown_08176893
	add r4, r6, r4
	ldrb r4, [r4]
	ldr r5, _080E100C  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080E1010  @ =gUnknown_081768A2
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6004
	mov r0, r8
	lsl r1, r0, #24
	mov r5, #255
	lsl r5, r5, #24
	add r1, r1, r5
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r0, r1, #24
	mov r8, r0
	cmp r1, #0
	bge _080E0F50
	mov r0, r9
	bl sub_080C6230
_080E0FDA:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E0FEC:
	.4byte gRam
_080E0FF0:
	.4byte 0x00000F92
_080E0FF4:
	.4byte gUnknown_03003E74
_080E0FF8:
	.4byte gUnknown_08176866
_080E0FFC:
	.4byte 0x00000964
_080E1000:
	.4byte gUnknown_08176875
_080E1004:
	.4byte gUnknown_08176884
_080E1008:
	.4byte gUnknown_08176893
_080E100C:
	.4byte gUnknown_03002B99
_080E1010:
	.4byte gUnknown_081768A2
	THUMB_FUNC_END sub_080E0F0C

