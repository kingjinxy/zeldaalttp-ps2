	THUMB_FUNC_START sub_081252B4
sub_081252B4: @ 0x081252B4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	lsl r1, r1, #24
	lsr r6, r1, #24
	bl sub_080C177C
	mov r0, #16
	bl sub_080CF370
	ldr r1, _081253AC  @ =gRam
	ldr r2, _081253B0  @ =0x00000A92
	add r0, r1, r2
	ldr r3, [sp, #4]
	add r7, r3, r0
	ldrb r0, [r7]
	sub r0, r0, #31
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #96
	bhi _081252EE
	mov r0, #128
	strb r0, [r7]
_081252EE:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r1
	mov r10, r0
	mov r0, #0
	ldrsb r0, [r7, r0]
	mov r2, r10
	ldrh r2, [r2]
	add r0, r0, r2
	mov r3, r10
	strh r0, [r3]
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r2, #32
	neg r2, r2
	cmp r0, r2
	blt _0812539C
	ldr r3, _081253B4  @ =gUnknown_03003E74
	mov r8, r3
	ldrh r0, [r3]
	ldr r2, _081253B8  @ =0x00000964
	add r2, r2, r1
	mov r9, r2
	ldrh r1, [r2]
	mov r3, r10
	ldrh r2, [r3]
	mov r3, #2
	str r3, [sp]
	mov r3, #208
	lsl r3, r3, #6
	bl sub_080C6368
	add r2, r0, #0
	ldrh r1, [r2, #4]
	ldr r5, _081253BC  @ =0xFFFFFC00
	add r0, r5, #0
	and r0, r0, r1
	mov r3, #144
	lsl r3, r3, #2
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2, #4]
	add r6, r6, #9
	lsl r6, r6, #4
	ldrb r1, [r2, #5]
	mov r4, #15
	add r0, r4, #0
	and r0, r0, r1
	orr r0, r0, r6
	strb r0, [r2, #5]
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrh r0, [r1]
	mov r2, r9
	ldrh r1, [r2]
	add r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r3, r10
	ldrh r2, [r3]
	add r2, r2, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #16
	str r3, [sp]
	mov r3, #208
	lsl r3, r3, #6
	bl sub_080C6368
	add r2, r0, #0
	ldrh r0, [r2, #4]
	and r5, r5, r0
	mov r1, #145
	lsl r1, r1, #2
	add r0, r1, #0
	orr r5, r5, r0
	strh r5, [r2, #4]
	ldrb r0, [r2, #5]
	and r4, r4, r0
	orr r4, r4, r6
	strb r4, [r2, #5]
	mov r2, r8
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
_0812539C:
	mov r1, #0
	ldrsb r1, [r7, r1]
	mov r3, #32
	neg r3, r3
	cmp r1, r3
	ble _081253C0
	mov r4, #1
	b _081253CA
_081253AC:
	.4byte gRam
_081253B0:
	.4byte 0x00000A92
_081253B4:
	.4byte gUnknown_03003E74
_081253B8:
	.4byte 0x00000964
_081253BC:
	.4byte 0xFFFFFC00
_081253C0:
	mov r0, #64
	neg r0, r0
	cmp r1, r0
	ble _081253FA
	mov r4, #2
_081253CA:
	ldr r0, [sp, #4]
	bl sub_080C177C
	ldr r1, _0812540C  @ =gRam
	ldr r2, _08125410  @ =0x00001724
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _08125414  @ =0x00000968
	add r0, r1, r3
	strb r2, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #32
	strh r0, [r2]
	ldr r2, _08125418  @ =0x00000964
	add r1, r1, r2
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	add r0, r4, #0
	bl sub_0811B82C
_081253FA:
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
_0812540C:
	.4byte gRam
_08125410:
	.4byte 0x00001724
_08125414:
	.4byte 0x00000968
_08125418:
	.4byte 0x00000964
	THUMB_FUNC_END sub_081252B4

