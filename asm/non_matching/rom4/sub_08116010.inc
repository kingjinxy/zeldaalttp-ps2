	THUMB_FUNC_START sub_08116010
sub_08116010: @ 0x08116010
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r7, _08116030  @ =gRam
	ldr r1, _08116034  @ =0x00000E33
	add r0, r7, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811603C
	ldr r2, _08116038  @ =0x00000E15
	add r0, r7, r2
	add r0, r4, r0
	strb r1, [r0]
	b _081160D2
_08116030:
	.4byte gRam
_08116034:
	.4byte 0x00000E33
_08116038:
	.4byte 0x00000E15
_0811603C:
	ldr r3, _081160DC  @ =0x000016D5
	add r0, r7, r3
	ldrb r3, [r0]
	lsr r3, r3, #1
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrb r0, [r0]
	ldr r2, _081160E0  @ =0x000016C1
	add r1, r7, r2
	mov r2, #0
	ldrsb r2, [r1, r2]
	lsl r2, r2, #8
	ldr r1, _081160E4  @ =gUnknown_0817ED14
	lsl r3, r3, #1
	add r1, r3, r1
	orr r0, r0, r2
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _081160E8  @ =0x00000958
	add r1, r7, r2
	ldrh r1, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r5, r7, r1
	mov r6, #0
	strh r0, [r5]
	ldr r2, _081160EC  @ =0x000016C4
	add r0, r7, r2
	ldrb r0, [r0]
	add r2, r2, #1
	add r1, r7, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	ldr r2, _081160F0  @ =gUnknown_0817ED1C
	add r3, r3, r2
	orr r0, r0, r1
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r3, _081160F4  @ =0x00000952
	add r1, r7, r3
	ldrh r1, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r0, r0, r1
	ldr r1, _081160F8  @ =0x00000964
	add r2, r7, r1
	strh r0, [r2]
	ldr r1, _081160FC  @ =gUnknown_0817ED24
	ldr r3, _08116100  @ =0x00000E47
	add r0, r7, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r4, [r0]
	ldr r1, _08116104  @ =0x00001724
	add r0, r7, r1
	strb r4, [r0]
	ldr r0, _08116108  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldrh r1, [r2]
	ldrh r2, [r5]
	mov r3, #2
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #183
	orr r3, r3, r4
	str r6, [sp]
	bl sub_080C6368
_081160D2:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081160DC:
	.4byte 0x000016D5
_081160E0:
	.4byte 0x000016C1
_081160E4:
	.4byte gUnknown_0817ED14
_081160E8:
	.4byte 0x00000958
_081160EC:
	.4byte 0x000016C4
_081160F0:
	.4byte gUnknown_0817ED1C
_081160F4:
	.4byte 0x00000952
_081160F8:
	.4byte 0x00000964
_081160FC:
	.4byte gUnknown_0817ED24
_08116100:
	.4byte 0x00000E47
_08116104:
	.4byte 0x00001724
_08116108:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_08116010

