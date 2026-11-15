	THUMB_FUNC_START sub_080691D8
sub_080691D8: @ 0x080691D8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _08069280  @ =gRam
	ldr r3, _08069284  @ =0x00000C88
	add r2, r4, r3
	ldrh r2, [r2]
	sub r1, r1, r2
	add r3, r3, #2
	add r2, r4, r3
	ldrh r6, [r2]
	and r1, r1, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r2, #248
	mov r8, r2
	add r3, r1, #0
	and r3, r3, r2
	lsl r3, r3, #2
	ldr r2, _08069288  @ =0x0000096C
	add r7, r4, r2
	mov r5, #128
	lsl r5, r5, #2
	add r2, r1, #0
	and r2, r2, r5
	lsl r2, r2, #4
	orr r3, r3, r2
	mov r2, #128
	lsl r2, r2, #1
	and r1, r1, r2
	lsl r1, r1, #3
	orr r3, r3, r1
	ldr r1, _0806928C  @ =0x00000C8C
	add r4, r4, r1
	ldrh r1, [r4]
	sub r0, r0, r1
	and r0, r0, r6
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r0, #0
	mov r4, r8
	and r1, r1, r4
	lsr r1, r1, #3
	orr r3, r3, r1
	add r1, r0, #0
	and r1, r1, r5
	lsl r1, r1, #3
	orr r3, r3, r1
	and r0, r0, r2
	lsl r0, r0, #2
	orr r3, r3, r0
	strh r3, [r7]
	ldr r1, _08069290  @ =gUnknown_0815DF14
	mov r2, #0
	ldrsh r0, [r7, r2]
	lsl r0, r0, #1
	ldr r3, _08069294  @ =gUnknown_02018000
	add r0, r0, r3
	ldrh r2, [r0]
	ldr r0, _08069298  @ =0x000001FF
	and r0, r0, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _0806926E
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #26
	orr r1, r1, r0
_0806926E:
	strh r2, [r7]
	lsl r0, r1, #16
	asr r0, r0, #16
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08069280:
	.4byte gRam
_08069284:
	.4byte 0x00000C88
_08069288:
	.4byte 0x0000096C
_0806928C:
	.4byte 0x00000C8C
_08069290:
	.4byte gUnknown_0815DF14
_08069294:
	.4byte gUnknown_02018000
_08069298:
	.4byte 0x000001FF
	THUMB_FUNC_END sub_080691D8

