	THUMB_FUNC_START sub_080CB6B4
sub_080CB6B4: @ 0x080CB6B4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r4, r1, #0
	ldr r0, _080CB7B0  @ =gUnknown_08227C73
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	mov r12, r0
	and r0, r0, r1
	ldr r6, _080CB7B4  @ =gRam
	cmp r0, #0
	bne _080CB6F2
	ldr r1, _080CB7B8  @ =0x00000B36
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080CB7BC  @ =gUnknown_02006B80
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r5, _080CB7C0  @ =0x00000964
	add r1, r6, r5
	ldrb r1, [r1]
	asr r0, r0, r1
	mov r1, r12
	and r0, r0, r1
	cmp r0, #0
	bne _080CB7A6
_080CB6F2:
	ldr r2, _080CB7C0  @ =0x00000964
	add r0, r6, r2
	ldrb r3, [r0]
	sub r7, r7, #2
	ldr r5, _080CB7C4  @ =0x00000FA2
	add r0, r6, r5
	add r0, r3, r0
	mov r1, #0
	mov r8, r1
	mov r1, #8
	strb r1, [r0]
	ldrb r0, [r7]
	ldr r2, _080CB7C8  @ =gUnknown_03003829
	strb r0, [r2]
	ldr r5, _080CB7CC  @ =0x000010F2
	add r1, r6, r5
	add r1, r3, r1
	lsl r0, r0, #24
	lsr r0, r0, #31
	strb r0, [r1]
	ldr r0, _080CB7D0  @ =0x00000ED2
	add r1, r6, r0
	add r1, r3, r1
	ldrb r0, [r7]
	lsl r0, r0, #4
	strb r0, [r1]
	ldr r2, _080CB7D4  @ =0x00000EF2
	add r1, r6, r2
	add r1, r3, r1
	ldr r5, _080CB7D8  @ =0x000015F5
	add r2, r6, r5
	ldrb r0, [r7]
	lsr r0, r0, #4
	mov r5, r12
	and r0, r0, r5
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r1]
	add r7, r7, #1
	ldrb r1, [r7]
	ldr r0, _080CB7DC  @ =0x000015FA
	add r5, r6, r0
	strb r1, [r5]
	ldr r2, _080CB7E0  @ =0x00000EE2
	add r0, r6, r2
	add r0, r3, r0
	lsl r1, r1, #4
	strb r1, [r0]
	ldr r0, _080CB7E4  @ =0x00000F02
	add r1, r6, r0
	add r1, r3, r1
	ldr r0, _080CB7E8  @ =0x000015F4
	add r2, r6, r0
	ldrb r0, [r7]
	lsr r0, r0, #4
	mov r7, r12
	and r0, r0, r7
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r1]
	ldr r1, _080CB7EC  @ =0x00000FF2
	add r0, r6, r1
	add r0, r3, r0
	strb r4, [r0]
	ldr r7, _080CB7F0  @ =0x00001002
	add r2, r6, r7
	add r2, r3, r2
	mov r0, r8
	strb r0, [r2]
	ldr r1, _080CB7C8  @ =gUnknown_03003829
	ldrb r0, [r1]
	mov r1, #96
	and r1, r1, r0
	lsr r1, r1, #2
	ldr r7, _080CB7C8  @ =gUnknown_03003829
	strb r1, [r7]
	ldrb r0, [r5]
	lsr r0, r0, #5
	orr r1, r1, r0
	strb r1, [r2]
	lsl r0, r3, #1
	ldr r2, _080CB7F4  @ =0x00001192
	add r1, r6, r2
	add r0, r0, r1
	mov r1, #0
	strh r3, [r0]
	ldr r5, _080CB7F8  @ =0x00000E85
	add r0, r6, r5
	add r3, r3, r0
	strb r1, [r3]
_080CB7A6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CB7B0:
	.4byte gUnknown_08227C73
_080CB7B4:
	.4byte gRam
_080CB7B8:
	.4byte 0x00000B36
_080CB7BC:
	.4byte gUnknown_02006B80
_080CB7C0:
	.4byte 0x00000964
_080CB7C4:
	.4byte 0x00000FA2
_080CB7C8:
	.4byte gUnknown_03003829
_080CB7CC:
	.4byte 0x000010F2
_080CB7D0:
	.4byte 0x00000ED2
_080CB7D4:
	.4byte 0x00000EF2
_080CB7D8:
	.4byte 0x000015F5
_080CB7DC:
	.4byte 0x000015FA
_080CB7E0:
	.4byte 0x00000EE2
_080CB7E4:
	.4byte 0x00000F02
_080CB7E8:
	.4byte 0x000015F4
_080CB7EC:
	.4byte 0x00000FF2
_080CB7F0:
	.4byte 0x00001002
_080CB7F4:
	.4byte 0x00001192
_080CB7F8:
	.4byte 0x00000E85
	THUMB_FUNC_END sub_080CB6B4

