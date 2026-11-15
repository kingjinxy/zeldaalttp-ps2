	THUMB_FUNC_START sub_08123324
sub_08123324: @ 0x08123324
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_080C177C
	ldr r2, _081233A0  @ =gRam
	ldr r1, _081233A4  @ =0x00000A92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #127
	bls _08123348
	mov r3, #255
	lsl r3, r3, #8
	add r0, r3, #0
	orr r1, r1, r0
_08123348:
	mov r7, #150
	lsl r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r3]
	sub r0, r0, r1
	strh r0, [r3]
	ldr r1, _081233A8  @ =0x00000E29
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r4, _081233AC  @ =0x00001732
	add r7, r2, r4
	strb r1, [r7]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _08123396
	ldr r5, _081233B0  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldr r4, _081233B4  @ =0x00000964
	add r1, r2, r4
	ldrh r1, [r1]
	ldrh r2, [r3]
	ldr r4, _081233B8  @ =gUnknown_0818041C
	ldrb r3, [r7]
	add r3, r3, r4
	ldrb r3, [r3]
	mov r7, #240
	lsl r7, r7, #6
	add r4, r7, #0
	orr r3, r3, r4
	str r6, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_08123396:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081233A0:
	.4byte gRam
_081233A4:
	.4byte 0x00000A92
_081233A8:
	.4byte 0x00000E29
_081233AC:
	.4byte 0x00001732
_081233B0:
	.4byte gUnknown_03003E74
_081233B4:
	.4byte 0x00000964
_081233B8:
	.4byte gUnknown_0818041C
	THUMB_FUNC_END sub_08123324

