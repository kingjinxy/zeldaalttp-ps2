	THUMB_FUNC_START sub_08087F1C
sub_08087F1C: @ 0x08087F1C
	push {r4,lr}
	ldr r2, _08087F70  @ =gRam
	ldr r3, _08087F74  @ =0x0000096C
	add r1, r2, r3
	mov r4, #0
	ldrsh r1, [r1, r4]
	add r3, r0, r1
	mov r0, #64
	and r0, r0, r3
	asr r0, r0, #4
	ldr r4, _08087F78  @ =0x00000978
	add r1, r2, r4
	strh r0, [r1]
	ldrb r1, [r1]
	sub r4, r4, #7
	add r0, r2, r4
	strb r1, [r0]
	ldr r1, _08087F7C  @ =0x00000979
	add r0, r2, r1
	ldrb r0, [r0]
	sub r4, r4, #1
	add r2, r2, r4
	strb r0, [r2]
	ldr r0, _08087F80  @ =0x0000303F
	and r3, r3, r0
	asr r0, r3, #1
	ldrh r1, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	lsl r0, r0, #16
	asr r3, r0, #16
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r3
	asr r0, r0, #8
	mov r1, #255
	and r3, r3, r1
	lsl r1, r3, #8
	orr r0, r0, r1
	pop {r4}
	pop {r1}
	bx r1
_08087F70:
	.4byte gRam
_08087F74:
	.4byte 0x0000096C
_08087F78:
	.4byte 0x00000978
_08087F7C:
	.4byte 0x00000979
_08087F80:
	.4byte 0x0000303F
	THUMB_FUNC_END sub_08087F1C

