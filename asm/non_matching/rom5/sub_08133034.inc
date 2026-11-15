	THUMB_FUNC_START sub_08133034
sub_08133034: @ 0x08133034
	push {r4,r5,lr}
	ldr r4, _08133084  @ =gRam
	ldr r1, _08133088  @ =0x00000CB2
	add r0, r4, r1
	ldrh r0, [r0]
	mov r5, #184
	lsl r5, r5, #1
	cmp r0, #0
	bne _08133048
	sub r5, r5, #112
_08133048:
	ldr r1, _0813308C  @ =gUnknown_0822BB84
	ldr r2, _08133090  @ =0x00000CA4
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r1, _08133094  @ =gUnknown_02030200
	add r2, r0, r1
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r5, r0
	lsl r0, r0, #1
	ldr r4, _08133098  @ =gUnknown_02000800
	add r1, r0, r4
_0813306E:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _0813306E
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08133084:
	.4byte gRam
_08133088:
	.4byte 0x00000CB2
_0813308C:
	.4byte gUnknown_0822BB84
_08133090:
	.4byte 0x00000CA4
_08133094:
	.4byte gUnknown_02030200
_08133098:
	.4byte gUnknown_02000800
	THUMB_FUNC_END sub_08133034

