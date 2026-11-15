	THUMB_FUNC_START sub_08102AE8
sub_08102AE8: @ 0x08102AE8
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _08102B60  @ =gRam
	ldr r1, _08102B64  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _08102B56
	ldr r2, _08102B68  @ =0x00000F82
	add r0, r6, r2
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r5, _08102B6C  @ =0x0000096C
	add r0, r6, r5
	strh r3, [r0]
	ldr r0, _08102B70  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r1, r6, r7
	ldrh r1, [r1]
	sub r5, r5, #8
	add r2, r6, r5
	ldrh r2, [r2]
	add r2, r2, r3
	sub r2, r2, #12
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r5, _08102B74  @ =gUnknown_0817B904
	ldr r7, _08102B78  @ =0x00001082
	add r3, r6, r7
	add r3, r4, r3
	ldrb r4, [r3]
	add r5, r4, r5
	ldrb r3, [r5]
	ldr r5, _08102B7C  @ =gUnknown_0817B908
	add r4, r4, r5
	ldrb r4, [r4]
	ldr r7, _08102B80  @ =0x00000969
	add r5, r6, r7
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_08102B56:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102B60:
	.4byte gRam
_08102B64:
	.4byte 0x00000F92
_08102B68:
	.4byte 0x00000F82
_08102B6C:
	.4byte 0x0000096C
_08102B70:
	.4byte gUnknown_03003E74
_08102B74:
	.4byte gUnknown_0817B904
_08102B78:
	.4byte 0x00001082
_08102B7C:
	.4byte gUnknown_0817B908
_08102B80:
	.4byte 0x00000969
	THUMB_FUNC_END sub_08102AE8

